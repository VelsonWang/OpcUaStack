/*
   Copyright 2015-2019 Kai Huebl (kai@huebl-sgh.de)

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

#ifndef __OpcUaStackCore_ParsingResult_h__
#define __OpcUaStackCore_ParsingResult_h__

#include <stdint.h>
#include "OpcUaStackCore/BuildInTypes/OpcUaStatusCode.h"
#include "OpcUaStackCore/BuildInTypes/OpcUaDiagnosticInfo.h"

namespace OpcUaStackCore
{

	class DLLEXPORT ParsingResult
	: public Object
	{
	  public:
		typedef boost::shared_ptr<ParsingResult> SPtr;

		ParsingResult(void);
		virtual ~ParsingResult(void);

		void statusCode(const OpcUaStatusCode& statusCode);
		OpcUaStatusCode& statusCode(void);
		void dataStatusCodes(const OpcUaStatusCodeArray::SPtr dataStatusCodes);
		OpcUaStatusCodeArray::SPtr dataStatusCodes(void) const;
		void dataDiagnosticInfos(const OpcUaDiagnosticInfoArray::SPtr dataDiagnosticInfos);
		OpcUaDiagnosticInfoArray::SPtr dataDiagnosticInfos(void) const;

		void copyTo(ParsingResult& parsingResult) {}
		void out(std::ostream& os) const {};

		void opcUaBinaryEncode(std::ostream& os) const;
		void opcUaBinaryDecode(std::istream& is);
		bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) { return false; }
		bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns) { return false; }
		bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns) { return false; }
		bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns) { return false; }
		bool jsonEncode(boost::property_tree::ptree& pt, const std::string& element) { return false; }
		bool jsonEncode(boost::property_tree::ptree& pt) { return false; }
		bool jsonDecode(boost::property_tree::ptree& pt, const std::string& element) { return false; }
		bool jsonDecode(boost::property_tree::ptree& pt) { return false; }

	  private:
		OpcUaStatusCode statusCode_;
		OpcUaStatusCodeArray::SPtr dataStatusCodeArraySPtr_;
		OpcUaDiagnosticInfoArray::SPtr dataDiagnosticInfoArraySPtr_;
	};

	class DLLEXPORT ParsingResultArray
	: public OpcUaArray<ParsingResult::SPtr, SPtrTypeCoder<ParsingResult> >
	, public Object
	{
	  public:
		typedef boost::shared_ptr<ParsingResultArray> SPtr;
	};

}

#endif
