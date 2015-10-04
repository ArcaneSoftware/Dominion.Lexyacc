//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "GrammarEnum.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CEFlowType
//*******************************************************************************************************************//
map<wstring, EFlowType> CEFlowType::STRING_TO_VALUE()
{
  map<wstring, EFlowType> map;

  map[L"If"] = EFlowType::If;
  map[L"While"] = EFlowType::While;

  return move(map);
}

map<EFlowType, wstring> CEFlowType::VALUE_TO_STRING()
{
  map<EFlowType, wstring> map;

  map[EFlowType::If] = L"If";
  map[EFlowType::While] = L"While";

  return move(map);
}

CEFlowType::CEFlowType()
{
}

CEFlowType::CEFlowType(C_FLOW_ENUM& that) :
  CEnum(that)
{
}

CEFlowType::CEFlowType(C_FLOW_ENUM&& that) :
  CEnum(that)
{
}

CEFlowType::CEFlowType(EFlowType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEFlowType::CEFlowType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEFlowType::~CEFlowType()
{
}

C_FLOW_ENUM& CEFlowType::operator=(C_FLOW_ENUM& that)
{
  CEnum<EFlowType>::operator=(that);

  return *this;
}
//*******************************************************************************************************************//
//CEOperationType
//*******************************************************************************************************************//
map<wstring, EOperationType> CEOperationType::STRING_TO_VALUE()
{
  map<wstring, EOperationType> map;

  map[NSTR] = EOperationType::Empty;
  map[L"Add"] = EOperationType::Add;
  map[L"Subtract"] = EOperationType::Subtract;
  map[L"Multiply"] = EOperationType::Multiply;
  map[L"Divide"] = EOperationType::Divide;
  map[L"Modulo"] = EOperationType::Modulo;
  map[L"Equal"] = EOperationType::Equal;
  map[L"NotEqual"] = EOperationType::NotEqual;
  map[L"Match"] = EOperationType::Match;
  map[L"NotMatch"] = EOperationType::NotMatch;
  map[L"Greater"] = EOperationType::Greater;
  map[L"GreaterEqual"] = EOperationType::GreaterEqual;
  map[L"Less"] = EOperationType::Less;
  map[L"LessEqual"] = EOperationType::LessEqual;
  map[L"And"] = EOperationType::And;
  map[L"Or"] = EOperationType::Or;
  map[L"Xor"] = EOperationType::Xor;
  map[L"Not"] = EOperationType::Not;

  return move(map);
}

map<EOperationType, wstring> CEOperationType::VALUE_TO_STRING()
{
  map<EOperationType, wstring> map;

  map[EOperationType::Empty] = NSTR;
  map[EOperationType::Add] = L"Add";
  map[EOperationType::Subtract] = L"Subtract";
  map[EOperationType::Multiply] = L"Multiply";
  map[EOperationType::Divide] = L"Divide";
  map[EOperationType::Modulo] = L"Modulo";
  map[EOperationType::Equal] = L"Equal";
  map[EOperationType::NotEqual] = L"NotEqual";
  map[EOperationType::Match] = L"Match";
  map[EOperationType::NotMatch] = L"NotMatch";
  map[EOperationType::Greater] = L"Greater";
  map[EOperationType::GreaterEqual] = L"GreaterEqual";
  map[EOperationType::Less] = L"Less";
  map[EOperationType::LessEqual] = L"LessEqual";
  map[EOperationType::And] = L"And";
  map[EOperationType::Or] = L"Or";
  map[EOperationType::Xor] = L"Xor";
  map[EOperationType::Not] = L"Not";

  return move(map);
}

CEOperationType::CEOperationType()
{
}

CEOperationType::CEOperationType(C_OPERATION_ENUM& that) :
  CEnum(that)
{
}

CEOperationType::CEOperationType(C_OPERATION_ENUM&& that) :
  CEnum(that)
{
}

CEOperationType::CEOperationType(EOperationType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOperationType::CEOperationType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOperationType::~CEOperationType()
{
}

C_OPERATION_ENUM& CEOperationType::operator=(C_OPERATION_ENUM& that)
{
  CEnum<EOperationType>::operator=(that);

  return *this;
}
