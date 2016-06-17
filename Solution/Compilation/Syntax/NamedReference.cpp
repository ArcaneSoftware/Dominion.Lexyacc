//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "NamedReference.h"

using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CAccessTypeEnum
//***********************************************************************************************************************************************************************************//
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
//***********************************************************************************************************************************************************************************//
//CNamedReference
//***********************************************************************************************************************************************************************************//
CNamedReference::CNamedReference() :
  _accessType(EAccessType::Private)
{
}

CNamedReference::CNamedReference(C_NAMED_REFERENCE& that) :
  CObject(that),
  _accessType(that._accessType),
  _identifier(that._identifier)
{
}

CNamedReference::CNamedReference(C_NAMED_REFERENCE&& that) :
  CObject(that),
  _accessType(move(that._accessType)),
  _identifier(move(that._identifier))
{
}

CNamedReference::CNamedReference(EAccessType accessType, C_IDENTIFIER& identifier) :
  _accessType(accessType),
  _identifier(identifier)
{
}

CNamedReference::~CNamedReference()
{
}

bool CNamedReference::IsAvailable() const
{
  return !_identifier.GetName().empty();
}

C_NAMED_REFERENCE& CNamedReference::operator=(C_NAMED_REFERENCE& that)
{
  CObject::operator=(that);

  _accessType = that._accessType;
  _identifier = that._identifier;

  return *this;
}

C_NAMED_REFERENCE& CNamedReference::operator=(C_NAMED_REFERENCE && that)
{
  CObject::operator=(that);

  _accessType = move(that._accessType);
  _identifier = move(that._identifier);

  return *this;
}
