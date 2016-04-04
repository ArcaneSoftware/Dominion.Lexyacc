#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "AssignVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//AssignVariableSyntax
//********************************************************************************************************************//
AssignVariableSyntax::AssignVariableSyntax() :
  AbstractSyntaxTree(SyntaxTypeEnum::AssignVariable, LineConst::NONE),
  _variableID(IDConst::NONE),
  _valueID(IDConst::NONE)
{
}

AssignVariableSyntax::~AssignVariableSyntax()
{
}

AssignVariableSyntax::!AssignVariableSyntax()
{
}

int AssignVariableSyntax::VariableID::get()
{
  return _variableID;
}

void AssignVariableSyntax::VariableID::set(int value)
{
  _variableID = value;
}

int32_t AssignVariableSyntax::ValueID::get()
{
  return _valueID;
}

void AssignVariableSyntax::ValueID::set(int32_t value)
{
  _valueID = value;
}
