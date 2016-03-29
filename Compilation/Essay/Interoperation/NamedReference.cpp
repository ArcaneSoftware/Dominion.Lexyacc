#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "NamedReference.h"

using namespace Dominion;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//NamedReference
//********************************************************************************************************************//
NamedReference::NamedReference() :
  _accessType(AccessTypeEnum::Private),
  _identifier(gcnew Identifier())
{
}

NamedReference::~NamedReference()
{
}

NamedReference::!NamedReference()
{
}

AccessTypeEnum NamedReference::AccessType::get()
{
  return _accessType;
}

void NamedReference::AccessType::set(AccessTypeEnum value)
{
  _accessType = value;
}

Identifier^ NamedReference::IdentifierObject::get()
{
  return _identifier;
}

void NamedReference::IdentifierObject::set(Identifier^ value)
{
  _identifier = value;
}

bool NamedReference::Available::get()
{
  return _identifier->Name->Length > 0;
}
