#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "ReturnSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//ReturnSyntax
//********************************************************************************************************************//
ReturnSyntax::ReturnSyntax() :
  AbstractSyntaxTree(SyntaxTypeEnum::Return, LineConst::NONE),
  _expressionID(IDConst::NONE)
{
}

ReturnSyntax::~ReturnSyntax()
{
}

ReturnSyntax::!ReturnSyntax()
{
}

int32_t ReturnSyntax::ExpressionID::get()
{
  return _expressionID;
}

void ReturnSyntax::ExpressionID::set(int32_t value)
{
  _expressionID = value;
}
