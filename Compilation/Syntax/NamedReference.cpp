//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "NamedReference.h"

using namespace Dominion::Compilation::Syntax;
//********************************************************************************************************************//
//CNamedReference
//********************************************************************************************************************//
CNamedReference::CNamedReference()
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

C_NAMED_REFERENCE& CNamedReference::operator=(C_NAMED_REFERENCE& that)
{
  CObject::operator=(that);

  _accessType = that._accessType;
  _identifier = that._identifier;

  return *this;
}
