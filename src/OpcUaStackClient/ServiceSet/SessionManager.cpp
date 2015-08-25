#include "OpcUaStackClient/ServiceSet/SessionManager.h"
#include "OpcUaStackCore/Base/Log.h"
#include "OpcUaStackCore/BuildInTypes/OpcUaIdentifier.h"

namespace OpcUaStackClient
{

	SessionManager* SessionManager::instance_ = nullptr;
	
	SessionManager* 
	SessionManager::instance(void)
	{
		if (instance_ == NULL) {
			instance_ = new SessionManager();
		}
		return instance_;
	}

	SessionManager::SessionManager(void)
	{
	}

	SessionManager::~SessionManager(void)
	{
	}

	void 
	SessionManager::start(void)
	{
		ioService_.start();
	}
		
	void 
	SessionManager::stop(void)
	{
		ioService_.stop();
	}

	Session::SPtr 
	SessionManager::getNewSession(
		const std::string& prefixSessionConfig, Config& sessionConfig,
		const std::string& prefixSecureChannelConfig, Config& secureChannelConfig,
		SessionIf* sessionIf,
		bool newSecureChannel)
	{
		bool rc;
		Session::SPtr sessionSPtr;

		// create session
		session_ = Session::construct(ioService_);
		rc = SessionConfig::initial(session_, prefixSessionConfig, &sessionConfig);
		if (!rc) {
			Log(Error, "cannot create client session");
			return sessionSPtr;
		}
		session_->sessionManagerIf(this);
		session_->sessionIf(sessionIf);

		// create secure channel
		secureChannel_ = SecureChannelClient::construct(ioService_);
		SecureChannelClientConfig::initial(secureChannel_, prefixSecureChannelConfig, &secureChannelConfig);
		secureChannel_->secureChannelIf(this);
		secureChannel_->debugMode(false);

		return session_;
	}

	void 
	SessionManager::deleteSession(void)
	{
	}

	IOService*
	SessionManager::ioService(void)
	{
		return &ioService_;
	}


	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// SessionSecureChannelIf
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	void 
	SessionManager::connectToSecureChannel(void)
	{
		secureChannel_->connect();
	}

	void 
	SessionManager::send(SecureChannelTransaction::SPtr secureChannelTransaction)
	{
		secureChannel_->send(secureChannelTransaction);
	}

	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	//
	// SecureChannelIf
	//
	// ------------------------------------------------------------------------
	// ------------------------------------------------------------------------
	void 
	SessionManager::connect(void)
	{
		session_->handleSecureChannelConnect();
	}
		
	void 
	SessionManager::disconnect(void)
	{
		session_->handleSecureChannelDisconnect();
	}
		
	bool 
	SessionManager::receive(SecureChannelTransaction::SPtr secureChannelTransaction)
	{
		return session_->receive(secureChannelTransaction);
	}
}
