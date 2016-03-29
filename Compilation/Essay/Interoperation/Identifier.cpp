#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Identifier.h"

using namespace Dominion;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//Identifier
//********************************************************************************************************************//
Identifier^ Identifier::CREATE(C_IDENTIFIER& identifier)
{
  auto result = gcnew Identifier();

  result->LiveNamespace = gcnew Namespace(new CNamespace(identifier.GetLiveNamespace()));
  result->Name = CLIString::NativeToCLI(identifier.GetName().c_str());

  return result;
}

Identifier::Identifier() :
  _liveNamespace(gcnew Namespace()),
  _name(String::Empty)
{
}

Identifier::Identifier(String^ fullName)
{
  if (fullName->IndexOf(L'.') > 0)
  {
    _name = fullName;
  }
  else
  {
    auto namingArray = fullName->Split(L'.');

    for each(auto string in namingArray)
    {
      _liveNamespace->Add(string);
    }
  }
}

Identifier::~Identifier()
{
}

Identifier::!Identifier()
{
}

Namespace^ Identifier::LiveNamespace::get()
{
  return _liveNamespace;
}

void Identifier::LiveNamespace::set(Namespace^ value)
{
  _liveNamespace = value;
}

String^ Identifier::Name::get()
{
  return _name;
}

void Identifier::Name::set(String^ value)
{
  _name = value;
}
