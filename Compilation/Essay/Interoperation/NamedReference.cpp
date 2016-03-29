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
  _identifierObject(gcnew Identifier())
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
  return _identifierObject;
}

void NamedReference::IdentifierObject::set(Identifier^ value)
{
  _identifierObject = value;
}

bool NamedReference::Available::get()
{
  return !_identifierObject->Name->Empty;
}
