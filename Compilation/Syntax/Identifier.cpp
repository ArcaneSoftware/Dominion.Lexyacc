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

CIdentifier::CIdentifier(WSTRING& fullName)
{
  Construct(fullName);
}

CIdentifier::CIdentifier(C_NAMESPACE& a_namespace, WSTRING& name) :
  _namespace(a_namespace),
  _name(name)
{
}

CIdentifier::~CIdentifier()
{
}

void CIdentifier::Construct(WSTRING& fullName)
{
  if (fullName.find(L'.') < 0)
  {
    _name = fullName;
  }
  else
  {
    auto namingVector = SString::SPLIT(fullName, L'.');

    for (auto a = namingVector.begin(); a != namingVector.end() - 1; a++)
    {
      _namespace.Add(*a);
    }

    _name = namingVector.back();
  }
}

wstring CIdentifier::ToString() const
{
  return _namespace.Empty() ?
         _name :
         _namespace.ToString() + L"." + _name;
}

bool CIdentifier::HasNamespace() const
{
  return !_namespace.Empty();
}

C_IDENTIFIER& CIdentifier::operator=(C_IDENTIFIER& that)
{
  CObject::operator=(that);

  _namespace = that._namespace;
  _name = that._name;

  return *this;
}
