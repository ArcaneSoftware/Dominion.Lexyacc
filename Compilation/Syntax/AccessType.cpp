//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "AccessType.h"

using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CAccessTypeEnum
//*******************************************************************************************************************//
map<wstring, EAccessType> CAccessTypeEnum::STRING_TO_VALUE()
{
  map<wstring, EAccessType> map;

  map[L"Private"] = EAccessType::Private;
  map[L"Public"] = EAccessType::Public;

  return move(map);
}

map<EAccessType, wstring> CAccessTypeEnum::VALUE_TO_STRING()
{
  map<EAccessType, wstring> map;

  map[EAccessType::Private] = L"Private";
  map[EAccessType::Public] = L"Public";

  return move(map);
}

CAccessTypeEnum::CAccessTypeEnum()
{
}

CAccessTypeEnum::CAccessTypeEnum(C_ACCESS_TYPE_ENUM& that) :
  CEnum(that)
{
}

CAccessTypeEnum::CAccessTypeEnum(C_ACCESS_TYPE_ENUM&& that) :
  CEnum(that)
{
}

CAccessTypeEnum::CAccessTypeEnum(EAccessType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CAccessTypeEnum::CAccessTypeEnum(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CAccessTypeEnum::~CAccessTypeEnum()
{
}

C_ACCESS_TYPE_ENUM& CAccessTypeEnum::operator=(C_ACCESS_TYPE_ENUM& that)
{
  CEnum<EAccessType>::operator=(that);

  return *this;
}
