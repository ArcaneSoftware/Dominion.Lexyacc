#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "VariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//VariableSyntax
//********************************************************************************************************************//
VariableSyntax::VariableSyntax() :
  RawSyntax(SyntaxTypeEnum::Variable, LineConst::NONE)
{
}

VariableSyntax::~VariableSyntax()
{
}

VariableSyntax::!VariableSyntax()
{
}

String^ VariableSyntax::Name::get()
{
  return _name;
}

void VariableSyntax::Name::set(String^ value)
{
  _name = value;
}
