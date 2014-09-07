#include "OpcUaStackCore/ServiceSet/CreateSessionRequest.h"
#include "OpcUaStackCore/ServiceSet/ActivateSessionRequest.h"
#include "OpcUaStackCore/ServiceSet/AnonymousIdentityToken.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/BuildInTypes/OpcUaIdentifier.h"
#include "OpcUaStackCore/Base/Log.h"
#include "OpcUaStackCore/Base/Utility.h"
#include "OpcUaStackClient/ServiceSet/Session.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient
{

	Session::Session(IOService& ioService)
	: pendingQueue_(ioService)
	, sessionState_(SessionState_Close)
	, requestHandle_(0)
	, applicatinDescriptionSPtr_(OpcUaStackCore::ApplicationDescription::construct())
	, createSessionParameter_()
	, sessionSecureChannelIf_(nullptr)
	, createSessionResponseSPtr_(OpcUaStackCore::CreateSessionResponse::construct())
	, activateSessionResponseSPtr_(OpcUaStackCore::ActivateSessionResponse::construct())
	{
		pendingQueue_.timeoutCallback().reset(
			boost::bind(&Session::pendingQueueTimeout, this, _1)
		);
	}

	Session::~Session(void)
	{
	}

	void 
	Session::createSession(void)
	{
		if (sessionState_ != SessionState_Close) {
			Log(Error, "cannot connect, because session is in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}
		
		sessionState_ = SessionState_ConnectingToSecureChannel;
		if (sessionSecureChannelIf_ != nullptr) sessionSecureChannelIf_->connectToSecureChannel();
	}

	void 
	Session::activateSession(void)
	{
		if (sessionState_ != SessionState_ReceiveCreateSession) {
			Log(Error, "cannot activate session, because session is in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}

		boost::asio::streambuf sb;
		std::iostream ios(&sb);

		OpcUaStackCore::ActivateSessionRequest::SPtr activateSessionRequestSPtr = OpcUaStackCore::ActivateSessionRequest::construct();
		activateSessionRequestSPtr->requestHeader()->requestHandle(++requestHandle_);
		activateSessionRequestSPtr->requestHeader()->sessionAuthenticationToken() = createSessionResponseSPtr_->authenticationToken();

		OpcUaString::SPtr localeIdSPtr = OpcUaString::construct();
		*localeIdSPtr = "en";
		activateSessionRequestSPtr->localeIds()->resize(1);
		activateSessionRequestSPtr->localeIds()->push_back(localeIdSPtr);

		activateSessionRequestSPtr->userIdentityToken()->parameterTypeId().nodeId(OpcUaId_AnonymousIdentityToken_Encoding_DefaultBinary);
		AnonymousIdentityToken::SPtr anonymousIdentityToken = activateSessionRequestSPtr->userIdentityToken()->parameter<AnonymousIdentityToken>();
		anonymousIdentityToken->policyId("Anonymous");
		activateSessionRequestSPtr->opcUaBinaryEncode(ios);

		sessionState_ = SessionState_SendActivateSession;
		if (sessionSecureChannelIf_ != nullptr) sessionSecureChannelIf_->activateSessionRequest(sb);
	}

	void 
	Session::send(ServiceTransaction::SPtr serviceTransaction)
	{
		if (sessionState_ != SessionState_ReceiveActivateSession) {
			Log(Error, "cannot send a message, because session is in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}

		boost::asio::streambuf sb;
		std::iostream ios(&sb);

		RequestHeader::SPtr requestHeader = serviceTransaction->requestHeader();
		requestHeader->requestHandle(serviceTransaction->transactionId());
		requestHeader->sessionAuthenticationToken() = createSessionResponseSPtr_->authenticationToken();
		requestHeader->opcUaBinaryEncode(ios);
		serviceTransaction->opcUaBinaryEncodeRequest(ios);

		pendingQueue_.insert(
			serviceTransaction->transactionId(),
			serviceTransaction,
			3000
		);

		if (sessionSecureChannelIf_ != nullptr) sessionSecureChannelIf_->send(serviceTransaction->nodeTypeRequest(), sb);
	}

	void 
	Session::handleSecureChannelConnect(void)
	{
		if (sessionState_ != SessionState_ConnectingToSecureChannel) {
			Log(Error, "receive connect secure channel invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
		}
		sessionState_ = SessionState_ConnectedToSecureChannel;

		boost::asio::streambuf sb;
		std::iostream ios(&sb);

		OpcUaStackCore::CreateSessionRequest::SPtr createSessionRequestSPtr = OpcUaStackCore::CreateSessionRequest::construct();
		createSessionRequestSPtr->requestHeader()->requestHandle(++requestHandle_);
		createSessionRequestSPtr->clientDescription(applicatinDescriptionSPtr_);
		createSessionRequestSPtr->endpointUrl(createSessionParameter_.endpointUrl_);
		createSessionRequestSPtr->sessionName(createSessionParameter_.sessionName_);
		createSessionRequestSPtr->clientNonce((OpcUaStackCore::OpcUaByte*)"\000", 1);
		createSessionRequestSPtr->requestSessionTimeout(createSessionParameter_.requestedSessionTimeout_);
		createSessionRequestSPtr->maxResponseMessageSize(createSessionParameter_.maxResponseMessageSize_);
		createSessionRequestSPtr->opcUaBinaryEncode(ios);

		sessionState_ = SessionState_SendCreateSession;
		if (sessionSecureChannelIf_ != nullptr) sessionSecureChannelIf_->createSessionRequest(sb);
	}

	void 
	Session::handleSecureChannelDisconnect(void)
	{
	}

	void 
	Session::receive(OpcUaStackCore::OpcUaNodeId& typeId, boost::asio::streambuf& sb)
	{
		switch (typeId.nodeId<OpcUaStackCore::OpcUaUInt32>())
		{
			case OpcUaId_CreateSessionResponse_Encoding_DefaultBinary:
			{
				receiveCreateSessionResponse(sb);
				break;
			}
			case OpcUaId_ActivateSessionResponse_Encoding_DefaultBinary:
			{
				receiveActivateSessionResponse(sb);
				break;
			}
			default:
			{
				receiveMessage(typeId, sb);
			}
		}

		
	}

	void 
	Session::receiveCreateSessionResponse(boost::asio::streambuf& sb)
	{
		if (sessionState_ != SessionState_SendCreateSession) {
			Log(Error, "receive create session response in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}

		std::iostream ios(&sb);
		createSessionResponseSPtr_->opcUaBinaryDecode(ios);
		sessionState_ = SessionState_ReceiveCreateSession;

		std::cout << "receive create session response..." << std::endl;
		std::cout << "size=" << OpcUaStackCore::count(ios) << std::endl;
		if (sessionIf_ != nullptr) sessionIf_->createSessionComplete(Success);
	}

	void 
	Session::receiveActivateSessionResponse(boost::asio::streambuf& sb)
	{
		if (sessionState_ != SessionState_SendActivateSession) {
			Log(Error, "receive activate session response in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}

		std::iostream ios(&sb);
		activateSessionResponseSPtr_->opcUaBinaryDecode(ios);
		sessionState_ = SessionState_ReceiveActivateSession;

		std::cout << "receive activate session response..." << std::endl;
		std::cout << "size=" << OpcUaStackCore::count(ios) << std::endl;
		if (sessionIf_ != nullptr) sessionIf_->activateSessionComplete(Success);
	}

	void 
	Session::receiveMessage(OpcUaStackCore::OpcUaNodeId& typeId, boost::asio::streambuf& sb)
	{
		if (sessionState_ != SessionState_ReceiveActivateSession) {
			Log(Error, "receive message response in invalid state")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("SessionState", sessionState_);
			if (sessionIf_ != nullptr) sessionIf_->error();
			return;
		}

		std::iostream ios(&sb);
		ResponseHeader::SPtr responseHeader = ResponseHeader::construct();
		responseHeader->opcUaBinaryDecode(ios);

		Object::SPtr objectSPtr = pendingQueue_.remove(responseHeader->requestHandle());
		if (objectSPtr.get() == nullptr) {
			Log(Error, "element in pending queue not exist")
				.parameter("EndpointUrl", createSessionParameter_.endpointUrl_)
				.parameter("SessionName", createSessionParameter_.sessionName_)
				.parameter("TypeId", typeId);
			char c; while (ios.get(c));
			return;
		}

		ServiceTransaction::SPtr serviceTransaction = boost::static_pointer_cast<ServiceTransaction>(objectSPtr);
		

	}

	void 
	Session::pendingQueueTimeout(Object::SPtr object)
	{
		// FIXME:
	}

	OpcUaStackCore::ApplicationDescription::SPtr 
	Session::applicationDescription(void)
	{
		return applicatinDescriptionSPtr_;
	}

	CreateSessionParameter& 
	Session::createSessionParameter(void)
	{
		return createSessionParameter_;
	}

	void 
	Session::sessionIf(SessionIf *sessionIf) 
	{
		sessionIf_ = sessionIf;
	}

	void 
	Session::sessionSecureChannelIf(SessionSecureChannelIf* sessionSecureChannelIf)
	{
		sessionSecureChannelIf_ = sessionSecureChannelIf;
	}

}
