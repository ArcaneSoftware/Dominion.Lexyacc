#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "DefineFunctionSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//DefineFunctionSyntax
//********************************************************************************************************************//
DefineFunctionSyntax::DefineFunctionSyntax() :
  AbstractSyntaxTree(SyntaxTypeEnum::DefineFunction, LineConst::NONE),
  _parameterChainID(IDConst::NONE),
  _blockID(IDConst::NONE)
{
}

DefineFunctionSyntax::~DefineFunctionSyntax()
{
}

DefineFunctionSyntax::!DefineFunctionSyntax()
{
}

AccessTypeEnum DefineFunctionSyntax::AccessType::get()
{
  return _accessType;
}

void DefineFunctionSyntax::AccessType::set(AccessTypeEnum value)
{
  _accessType = value;
}

String^ DefineFunctionSyntax::Name::get()
{
  return _name;
}

void DefineFunctionSyntax::Name::set(String^ value)
{
  _name = value;
}

int32_t DefineFunctionSyntax::ParameterChainID::get()
{
  return _parameterChainID;
}

void DefineFunctionSyntax::ParameterChainID::set(int32_t value)
{
  _parameterChainID = value;
}

int32_t DefineFunctionSyntax::BlockID::get()
{
  return _blockID;
}

void DefineFunctionSyntax::BlockID::set(int32_t value)
{
  _blockID = value;
}
