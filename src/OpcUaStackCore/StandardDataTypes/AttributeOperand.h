/*
    DataTypeClass: AttributeOperand

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.0.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_AttributeOperand_h__
#define __OpcUaStackCore_AttributeOperand_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardDataTypes/FilterOperand.h"
#include "OpcUaStackCore/StandardDataTypes/RelativePath.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT AttributeOperand
    : public FilterOperand
    {
      public:
        typedef boost::shared_ptr<AttributeOperand> SPtr;
        typedef std::vector<AttributeOperand::SPtr> Vec;
    
        AttributeOperand(void);
        AttributeOperand(const AttributeOperand& value);
        virtual ~AttributeOperand(void);
        
        OpcUaNodeId& nodeId(void);
        OpcUaString& alias(void);
        RelativePath& browsePath(void);
        OpcUaIntegerId& attributeId(void);
        OpcUaNumericRange& indexRange(void);
        
        //- ExtensionObjectBase -----------------------------------------------
        virtual ExtensionObjectBase::SPtr factory(void) override;
        virtual std::string namespaceName(void) override;
        virtual std::string typeName(void) override;
        virtual OpcUaNodeId typeId(void) override;
        virtual OpcUaNodeId binaryTypeId(void) override;
        virtual OpcUaNodeId xmlTypeId(void) override;
        virtual OpcUaNodeId jsonTypeId(void) override;
        virtual bool opcUaBinaryEncode(std::ostream& os) const override;
        virtual bool opcUaBinaryDecode(std::istream& is) override;
        virtual bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) override;
        virtual bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns) override;
        virtual bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) override;
        virtual bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns) override;
        virtual void copyTo(ExtensionObjectBase& extensionObjectBase) override;
        virtual bool equal(ExtensionObjectBase& extensionObjectBase) const override;
        virtual void out(std::ostream& os) override;
        //- ExtensionObjectBase -----------------------------------------------
        
        virtual bool jsonEncodeImpl(boost::property_tree::ptree& pt) const override;
        virtual bool jsonDecodeImpl(const boost::property_tree::ptree& pt) override;
        
        void copyTo(AttributeOperand& value);
        bool operator==(const AttributeOperand& value);
        bool operator!=(const AttributeOperand& value);
        AttributeOperand& operator=(const AttributeOperand& value);
    
      private:
        OpcUaNodeId nodeId_;
        OpcUaString alias_;
        RelativePath browsePath_;
        OpcUaIntegerId attributeId_;
        OpcUaNumericRange indexRange_;
    
    };
    
    class DLLEXPORT AttributeOperandArray
    : public OpcUaArray<AttributeOperand::SPtr, SPtrTypeCoder<AttributeOperand> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<AttributeOperandArray> SPtr;
    };

}

#endif