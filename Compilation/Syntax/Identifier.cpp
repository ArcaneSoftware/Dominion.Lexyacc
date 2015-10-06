//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Identifier.h"

using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CIdentifier
//*******************************************************************************************************************//
CIdentifier::CIdentifier()
{
}

CIdentifier::CIdentifier(C_IDENTIFIER& that) :
  CObject(that),
  _namespace(that._namespace),
  _name(that._name)
{
}

CIdentifier::CIdentifier(C_IDENTIFIER&& that) :
  CObject(that),
  _namespace(move(that._namespace)),
  _name(move(that._name))
{
}

CIdentifier::CIdentifier(C_NAMESPACE& _namespace_, WSTRING& name) :
  _namespace(_namespace_),
  _name(name)
{
}

CIdentifier::~CIdentifier()
{
}

wstring CIdentifier::ToString() const
{
  return _namespace.Empty() ?
         _name :
         _namespace.ToString() + L"." + _name;
}

C_IDENTIFIER& CIdentifier::operator=(C_IDENTIFIER& that)
{
  CObject::operator=(that);

  _namespace = that._namespace;
  _name = that._name;

  return *this;
}
