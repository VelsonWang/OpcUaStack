/*
   Copyright 2018 Kai Huebl (kai@huebl-sgh.de)

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

#ifndef __OpcUaStackCore_NodeInfoVariableType_h__
#define __OpcUaStackCore_NodeInfoVariableType_h__

#include "OpcUaStackCore/StandardDataTypes/StructureDefinitionExpand.h"

#include "OpcUaStackServer/Generator/NodeInfo.h"
#include "OpcUaStackServer/Generator/DataTypeField.h"
#include "OpcUaStackServer/Generator/NumberNamespaceMap.h"

using namespace OpcUaStackCore;

namespace OpcUaStackServer
{

/**
 * This function manages node variable type information
 */
class DLLEXPORT NodeInfoVariableType
{
  public:
	typedef boost::shared_ptr<NodeInfoVariableType> SPtr;

	/**
	 * constructor
	 */
	NodeInfoVariableType(void);

	/**
	 * destructor
	 */
	~NodeInfoVariableType(void);

	/**
	 * This function inits the node info class
	 *
	 * @parameter[in] dataVariableNodeId		opc ua variable type node identifier
	 * @parameter[in] informationModel			opc ua information model
	 */
	bool init(
		const OpcUaNodeId& variableTypeNodeId,
		InformationModel::SPtr& informationModel
	);

	std::string& className(void);

  private:
	NumberNamespaceMap numberNamespaceMap_;
	OpcUaNodeId variableTypeNodeId_;
	OpcUaNodeId parentVariableTypeNodeId_;
	InformationModel::SPtr informationModel_;

	BaseNodeClass::SPtr baseNode_;
	BaseNodeClass::SPtr parentBaseNode_;
	std::string namespaceName_;
	std::string parentNamespaceName_;
	std::string className_;
	std::string parentClassName_;
	std::string directory_;
	std::string parentDirectory_;
};

}

#endif
