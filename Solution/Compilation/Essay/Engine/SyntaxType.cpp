//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "SyntaxType.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CSyntaxTypeEnum
//*******************************************************************************************************************//
map<wstring, ESyntaxType> CSyntaxTypeEnum::STRING_TO_VALUE()
{
  map<wstring, ESyntaxType> map;

  map[NSTR] = ESyntaxType::Empty;
  map[L"Scalar"] = ESyntaxType::Scalar;
  map[L"Variable"] = ESyntaxType::Variable;
  map[L"Function"] = ESyntaxType::Function;
  map[L"Chain"] = ESyntaxType::Chain;
  map[L"Operation"] = ESyntaxType::Operation;
  map[L"Parameter"] = ESyntaxType::Parameter;
  map[L"Argurment"] = ESyntaxType::Argurment;
  map[L"Block"] = ESyntaxType::Block;
  map[L"Flow"] = ESyntaxType::Flow;
  map[L"DefineVariable"] = ESyntaxType::DefineVariable;
  map[L"AssignVariable"] = ESyntaxType::AssignVariable;
  map[L"DefineFunction"] = ESyntaxType::DefineFunction;
  map[L"Return"] = ESyntaxType::Return;

  return move(map);
}

map<ESyntaxType, wstring> CSyntaxTypeEnum::VALUE_TO_STRING()
{
  map<ESyntaxType, wstring> map;

  map[ESyntaxType::Empty] = NSTR;
  map[ESyntaxType::Scalar] = L"Scalar";
  map[ESyntaxType::Variable] = L"Variable";
  map[ESyntaxType::Function] = L"Function";
  map[ESyntaxType::Chain] = L"Chain";
  map[ESyntaxType::Operation] = L"Operation";
  map[ESyntaxType::Parameter] = L"Parameter";
  map[ESyntaxType::Argurment] = L"Argurment";
  map[ESyntaxType::Block] = L"Block";
  map[ESyntaxType::Flow] = L"Flow";
  map[ESyntaxType::DefineVariable] = L"DefineVariable";
  map[ESyntaxType::AssignVariable] = L"AssignVariable";
  map[ESyntaxType::DefineFunction] = L"DefineFunction";
  map[ESyntaxType::Return] = L"Return";

  return move(map);
}

CSyntaxTypeEnum::CSyntaxTypeEnum()
{
}

CSyntaxTypeEnum::CSyntaxTypeEnum(CE_SYNTAX_TYPE& that) :
  CEnum(that)
{
}

CSyntaxTypeEnum::CSyntaxTypeEnum(CE_SYNTAX_TYPE&& that) :
  CEnum(that)
{
}

CSyntaxTypeEnum::CSyntaxTypeEnum(ESyntaxType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CSyntaxTypeEnum::CSyntaxTypeEnum(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CSyntaxTypeEnum::~CSyntaxTypeEnum()
{
}

CE_SYNTAX_TYPE& CSyntaxTypeEnum::operator=(CE_SYNTAX_TYPE& that)
{
  CEnum<ESyntaxType>::operator=(that);

  return *this;
}
