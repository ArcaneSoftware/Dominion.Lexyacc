#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "DefineVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//DefineVariableSyntax
//********************************************************************************************************************//
DefineVariableSyntax::DefineVariableSyntax() :
  RawSyntax(SyntaxTypeEnum::DefineVariable, LineConst::NONE),
  _initialValueID(IDConst::NONE)
{
}

DefineVariableSyntax::~DefineVariableSyntax()
{
}

DefineVariableSyntax::!DefineVariableSyntax()
{
}

AccessTypeEnum DefineVariableSyntax::AccessType::get()
{
  return _accessType;
}

void DefineVariableSyntax::AccessType::set(AccessTypeEnum value)
{
  _accessType = value;
}

VariableTypeEnum DefineVariableSyntax::VariableType::get()
{
  return _variableType;
}

void DefineVariableSyntax::VariableType::set(VariableTypeEnum value)
{
  _variableType = value;
}

String^ DefineVariableSyntax::Name::get()
{
  return _name;
}

void DefineVariableSyntax::Name::set(String^ value)
{
  _name = value;
}

int32_t DefineVariableSyntax::InitialValueID::get()
{
  return _initialValueID;
}

void DefineVariableSyntax::InitialValueID::set(int32_t value)
{
  _initialValueID = value;
}
