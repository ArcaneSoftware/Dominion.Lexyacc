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
NamedReference::NamedReference()
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
