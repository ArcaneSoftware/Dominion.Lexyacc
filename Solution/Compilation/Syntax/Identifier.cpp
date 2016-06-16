//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Identifier.h"

using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CIdentifier
//***********************************************************************************************************************************************************************************//
CIdentifier::CIdentifier()
{
}

CIdentifier::CIdentifier(C_IDENTIFIER& that) :
  CObject(that),
  _liveNamespace(that._liveNamespace),
  _name(that._name)
{
}

CIdentifier::CIdentifier(C_IDENTIFIER&& that) :
  CObject(that),
  _liveNamespace(move(that._liveNamespace)),
  _name(move(that._name))
{
}

CIdentifier::CIdentifier(WSTRING& fullName)
{
  Construct(fullName);
}

CIdentifier::CIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name) :
  _liveNamespace(liveNamespace),
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
      _liveNamespace.Add(*a);
    }

    _name = namingVector.back();
  }
}

wstring CIdentifier::ToString() const
{
  return _liveNamespace.Empty() ?
         _name :
         _liveNamespace.ToString() + L"." + _name;
}

bool CIdentifier::HasNamespace() const
{
  return !_liveNamespace.Empty();
}

C_IDENTIFIER& CIdentifier::operator=(C_IDENTIFIER& that)
{
  CObject::operator=(that);

  _liveNamespace = that._liveNamespace;
  _name = that._name;

  return *this;
}
