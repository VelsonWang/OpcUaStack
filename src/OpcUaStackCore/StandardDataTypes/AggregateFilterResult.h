/*
    DataTypeClass: AggregateFilterResult

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_AggregateFilterResult_h__
#define __OpcUaStackCore_AggregateFilterResult_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/BuildInTypes/JsonNumber.h"
#include "OpcUaStackCore/StandardDataTypes/MonitoringFilterResult.h"
#include "OpcUaStackCore/StandardDataTypes/AggregateConfiguration.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT AggregateFilterResult
    : public MonitoringFilterResult
    {
      public:
        typedef boost::shared_ptr<AggregateFilterResult> SPtr;
        typedef std::vector<AggregateFilterResult::SPtr> Vec;
    
        AggregateFilterResult(void);
        AggregateFilterResult(const AggregateFilterResult& value);
        virtual ~AggregateFilterResult(void);
        
        OpcUaUtcTime& revisedStartTime(void);
        OpcUaDuration& revisedProcessingInterval(void);
        AggregateConfiguration& revisedAggregateConfiguration(void);
        
        //- ExtensionObjectBase -----------------------------------------------
        virtual ExtensionObjectBase::SPtr factory(void);
        virtual std::string namespaceName(void);
        virtual std::string typeName(void);
        virtual OpcUaNodeId typeId(void);
        virtual OpcUaNodeId binaryTypeId(void);
        virtual OpcUaNodeId xmlTypeId(void);
        virtual OpcUaNodeId jsonTypeId(void);
        virtual void opcUaBinaryEncode(std::ostream& os) const;
        virtual void opcUaBinaryDecode(std::istream& is);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool jsonEncode(boost::property_tree::ptree& pt, const std::string& element);
        virtual bool jsonEncode(boost::property_tree::ptree& pt);
        virtual bool jsonDecode(boost::property_tree::ptree& pt, const std::string& element);
        virtual bool jsonDecode(boost::property_tree::ptree& pt);
        virtual void copyTo(ExtensionObjectBase& extensionObjectBase);
        virtual bool equal(ExtensionObjectBase& extensionObjectBase) const;
        virtual void out(std::ostream& os);
        //- ExtensionObjectBase -----------------------------------------------
        
        void copyTo(AggregateFilterResult& value);
        bool operator==(const AggregateFilterResult& value);
        bool operator!=(const AggregateFilterResult& value);
        AggregateFilterResult& operator=(const AggregateFilterResult& value);
    
      private:
        OpcUaUtcTime revisedStartTime_;
        OpcUaDuration revisedProcessingInterval_;
        AggregateConfiguration revisedAggregateConfiguration_;
    
    };
    
    class AggregateFilterResultArray
    : public OpcUaArray<AggregateFilterResult::SPtr, SPtrTypeCoder<AggregateFilterResult> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<AggregateFilterResultArray> SPtr;
    };

}

#endif