#ifndef __OpcUaStackClient_ServiceTransaction_h__
#define __OpcUaStackClient_ServiceTransaction_h__

#include <boost/thread/mutex.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/SecureChannel/RequestHeader.h"
#include "OpcUaStackCore/SecureChannel/ResponseHeader.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient
{

	class DLLEXPORT ServiceTransaction : public Object 
	{
	  public:
		typedef boost::shared_ptr<ServiceTransaction> SPtr;

		ServiceTransaction(OpcUaUInt32 nodeTypeRequest, OpcUaUInt32 nodeTypeResponse);
		virtual ~ServiceTransaction(void);

		uint32_t transactionId(void);
		OpcUaNodeId& nodeTypeRequest(void);
		OpcUaNodeId& nodeTypeResponse(void);

		void requestHeader(RequestHeader::SPtr requestHeader);
		RequestHeader::SPtr requestHeader(void);
		void responseHeader(ResponseHeader::SPtr responseHeader);
		ResponseHeader::SPtr responseHeader(void);

		virtual void opcUaBinaryEncodeRequest(std::ostream& os) const = 0;
		virtual void opcUaBinaryEncodeResponse(std::ostream& os) const = 0;
		virtual void opcUaBinaryDecodeRequest(std::istream& is) = 0;
		virtual void opcUaBinaryDecodeResponse(std::istream& is) = 0;

	  private:
		static uint32_t uniqueTransactionId_;
		static boost::mutex mutex_;
		static uint32_t getUniqueTransactionId(void);

		uint32_t transactionId_;
		OpcUaNodeId nodeTypeRequest_;
		OpcUaNodeId nodeTypeResponse_;

		RequestHeader::SPtr requestHeader_;
		ResponseHeader::SPtr responseHeader_;
	};

}

#endif