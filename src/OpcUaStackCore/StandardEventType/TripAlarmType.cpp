/*
    EventTypeClass: TripAlarmType

    Generated Source Code - please do not change this source code

    EventTypeCodeGenerator Version:
        OpcUaStackCore - 3.0.1

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardEventType/TripAlarmType.h"

namespace OpcUaStackCore
{
    
    TripAlarmType::TripAlarmType(void)
    : OffNormalAlarmType()
    , eventVariables_()
    {
    
        eventVariables_.eventType(OpcUaNodeId((OpcUaUInt32)10751));
        eventVariables_.namespaceIndex(0);
        eventVariables_.browseName(OpcUaQualifiedName("TripAlarmType"));
        eventVariables_.namespaceUri("");
    }
    
    TripAlarmType::~TripAlarmType(void)
    {
    }
    
    void
    TripAlarmType::mapNamespaceUri(void)
    {
        uint32_t namespaceIndex;
        OffNormalAlarmType::mapNamespaceUri();
    
        OpcUaVariant::SPtr eventTypeVariable = constructSPtr<OpcUaVariant>();
        eventTypeVariable->setValue(eventVariables_.eventType());
    
        setNamespaceIndex(eventVariables_.namespaceUri(), namespaceIndex, eventVariables_.browseName(), eventTypeVariable);
    
        eventType(eventTypeVariable);
        eventVariables_.eventType(eventTypeVariable);
        eventVariables_.namespaceIndex(namespaceIndex);
    }

    OpcUaVariant::SPtr
    TripAlarmType::get(
    	OpcUaNodeId& eventType,
    	std::list<OpcUaQualifiedName::SPtr>& browseNameList,
    	EventResult::Code& resultCode
    )
    {
        resultCode = EventResult::Success;

        // check whether eventType and typeNodeId are identical
        if (eventType == eventVariables_.eventType()) {
    	    return eventVariables_.get(browseNameList, resultCode);
        }

        // the start item was not found. We delegate the search to the base class
        OpcUaVariant::SPtr variant;
        variant = OffNormalAlarmType::get(eventType, browseNameList, resultCode);
        if (resultCode != EventResult::Success || browseNameList.empty()) {
    	    return variant;
        }

        return eventVariables_.get(browseNameList, resultCode);
    }

}