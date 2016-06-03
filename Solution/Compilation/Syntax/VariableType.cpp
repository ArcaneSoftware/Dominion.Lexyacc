//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableType.h"

using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CVariableTypeEnum
//*******************************************************************************************************************//
map<wstring, EVariableType> CVariableTypeEnum::STRING_TO_VALUE()
{
  map<wstring, EVariableType> map;

  map[L"Atom"] = EVariableType::Atom;
  map[L"Object"] = EVariableType::Object;

  return move(map);
}

map<EVariableType, wstring> CVariableTypeEnum::VALUE_TO_STRING()
{
  map<EVariableType, wstring> map;

  map[EVariableType::Atom] = L"Atom";
  map[EVariableType::Object] = L"Object";

  return move(map);
}

CVariableTypeEnum::CVariableTypeEnum()
{
}

CVariableTypeEnum::CVariableTypeEnum(C_VARIABLE_TYPE_ENUM& that) :
  CEnum(that)
{
}

CVariableTypeEnum::CVariableTypeEnum(C_VARIABLE_TYPE_ENUM&& that) :
  CEnum(that)
{
}

CVariableTypeEnum::CVariableTypeEnum(EVariableType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CVariableTypeEnum::CVariableTypeEnum(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CVariableTypeEnum::~CVariableTypeEnum()
{
}

C_VARIABLE_TYPE_ENUM& CVariableTypeEnum::operator=(C_VARIABLE_TYPE_ENUM& that)
{
  CEnum<EVariableType>::operator=(that);

  return *this;
}