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
  AbstractSyntaxTree(SyntaxTypeEnum::Variable, LineConst::NONE)
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

Identifier^ VariableSyntax::GetIdentifier()
{
  return gcnew Identifier(LiveNamespace, Name);
}