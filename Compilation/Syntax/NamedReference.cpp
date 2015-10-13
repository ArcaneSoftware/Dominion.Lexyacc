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
  _access(that._access),
  _identifier(that._identifier)
{
}

CNamedReference::CNamedReference(C_NAMED_REFERENCE&& that) :
  CObject(that),
  _access(move(that._access)),
  _identifier(move(that._identifier))
{
}

CNamedReference::CNamedReference(EAccessType access, C_IDENTIFIER& identifier) :
  _access(access),
  _identifier(identifier)
{
}

CNamedReference::~CNamedReference()
{
}

C_NAMED_REFERENCE& CNamedReference::operator=(C_NAMED_REFERENCE& that)
{
  CObject::operator=(that);

  _access = that._access;
  _identifier = that._identifier;

  return *this;
}
