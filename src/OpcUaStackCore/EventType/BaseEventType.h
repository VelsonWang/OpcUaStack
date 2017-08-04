/*
   Copyright 2017 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#ifndef __OpcUaStackCore_BaseEventType_h__
#define __OpcUaStackCore_BaseEventType_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/EventType/EventBase.h"

namespace OpcUaStackCore
{

	class DLLEXPORT BaseEventType
	: public EventBase
	{
	  public:
		typedef boost::shared_ptr<BaseEventType> SPtr;

		BaseEventType(void);
		virtual ~BaseEventType(void);

		bool eventId(OpcUaVariant::SPtr& eventId);
		OpcUaVariant::SPtr& eventId(void);
		bool eventType(OpcUaVariant::SPtr& eventType);
		OpcUaVariant::SPtr& eventType(void);
		bool sourceName(OpcUaVariant::SPtr& sourceName);
		OpcUaVariant::SPtr& sourceName(void);
		bool localTime(OpcUaVariant::SPtr& localTime);
		OpcUaVariant::SPtr& localTime(void);
		bool message(OpcUaVariant::SPtr& message);
		OpcUaVariant::SPtr& message(void);
		bool receiveTime(OpcUaVariant::SPtr& receiveTime);
		OpcUaVariant::SPtr& receiveTime(void);
		bool severity(OpcUaVariant::SPtr& severity);
		OpcUaVariant::SPtr& severity(void);
		bool sourceNode(OpcUaVariant::SPtr& sourceNode);
		OpcUaVariant::SPtr& sourceNode(void);
		bool time(OpcUaVariant::SPtr& time);
		OpcUaVariant::SPtr& time(void);

		OpcUaNodeId& typeNodeId(void);

		//- EventBase interface
		virtual void mapNamespaceUri(void);
		virtual OpcUaVariant::SPtr get(
			OpcUaNodeId& eventType,
			bool& eventTypeFound,
			std::list<OpcUaQualifiedName::SPtr>& browseNameList,
			bool& error,
			ResultCode& resultCode
		);
		//- EventBase interface

	  private:
		OpcUaVariant::SPtr get(OpcUaQualifiedName::SPtr& browseName, ResultCode& resultCode);

		std::string namespaceUri_;
		uint32_t namespaceIndex_;
		OpcUaNodeId typeNodeId_;
		OpcUaQualifiedName browseName_;

		OpcUaVariant::SPtr eventId_;		// OpcUaByteString
		OpcUaVariant::SPtr eventType_;		// OpcUaNodeId
		OpcUaVariant::SPtr sourceName_;		// OpcUaString
		OpcUaVariant::SPtr localTime_;		// OpcUaDateTime
		OpcUaVariant::SPtr message_;		// OpcUaLocalizedText
		OpcUaVariant::SPtr receiveTime_;	// OpcUaDateTime
		OpcUaVariant::SPtr severity_;		// OpcUaUInt16
		OpcUaVariant::SPtr sourceNode_;		// OpcUaNodeId
		OpcUaVariant::SPtr time_;			// OpcUaDateTime
	};

}

#endif
