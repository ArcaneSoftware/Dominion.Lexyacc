//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "SyntaxEnum.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CESyntaxType
//*******************************************************************************************************************//
map<wstring, ESyntaxType> CESyntaxType::STRING_TO_VALUE()
{
  map<wstring, ESyntaxType> map;

  map[NSTR] = ESyntaxType::Empty;
  map[L"Chain"] = ESyntaxType::Chain;
  map[L"Parameter"] = ESyntaxType::Parameter;
  map[L"Argurment"] = ESyntaxType::Argurment;
  map[L"Block"] = ESyntaxType::Block;
  map[L"Flow"] = ESyntaxType::Flow;
  map[L"Scalar"] = ESyntaxType::Scalar;
  map[L"Variable"] = ESyntaxType::Variable;
  map[L"VariableProperty"] = ESyntaxType::VariableProperty;
  map[L"VariableMethod"] = ESyntaxType::VariableMethod;
  map[L"Function"] = ESyntaxType::Function;
  map[L"Operation"] = ESyntaxType::Operation;
  map[L"DefineVariable"] = ESyntaxType::DefineVariable;
  map[L"AssignVariable"] = ESyntaxType::AssignVariable;
  map[L"DefineFunction"] = ESyntaxType::DefineFunction;
  map[L"Return"] = ESyntaxType::Return;

  return move(map);
}

map<ESyntaxType, wstring> CESyntaxType::VALUE_TO_STRING()
{
  map<ESyntaxType, wstring> map;

  map[ESyntaxType::Empty] = NSTR;
  map[ESyntaxType::Chain] = L"Chain";
  map[ESyntaxType::Parameter] = L"Parameter";
  map[ESyntaxType::Argurment] = L"Argurment";
  map[ESyntaxType::Block] = L"Block";
  map[ESyntaxType::Flow] = L"Flow";
  map[ESyntaxType::Scalar] = L"Scalar";
  map[ESyntaxType::Variable] = L"Variable";
  map[ESyntaxType::VariableProperty] = L"VariableProperty";
  map[ESyntaxType::VariableMethod] = L"VariableMethod";
  map[ESyntaxType::Function] = L"Function";
  map[ESyntaxType::Operation] = L"Operation";
  map[ESyntaxType::DefineVariable] = L"DefineVariable";
  map[ESyntaxType::AssignVariable] = L"AssignVariable";
  map[ESyntaxType::DefineFunction] = L"DefineFunction";
  map[ESyntaxType::Return] = L"Return";

  return move(map);
}

CESyntaxType::CESyntaxType()
{
}

CESyntaxType::CESyntaxType(CE_SYNTAX_TYPE& that) :
  CEnum(that)
{
}

CESyntaxType::CESyntaxType(CE_SYNTAX_TYPE&& that) :
  CEnum(that)
{
}

CESyntaxType::CESyntaxType(ESyntaxType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CESyntaxType::CESyntaxType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CESyntaxType::~CESyntaxType()
{
}

CE_SYNTAX_TYPE& CESyntaxType::operator=(CE_SYNTAX_TYPE& that)
{
  CEnum<ESyntaxType>::operator=(that);

  return *this;
}
