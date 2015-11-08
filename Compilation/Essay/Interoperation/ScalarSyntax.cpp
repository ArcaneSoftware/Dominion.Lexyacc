#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "ScalarSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//ScalarSyntax
//********************************************************************************************************************//
ScalarSyntax::ScalarSyntax() :
  RawSyntax(SyntaxTypeEnum::Scalar, LineConst::NONE),
  _value(gcnew Scalar())
{
}

ScalarSyntax::~ScalarSyntax()
{
}

ScalarSyntax::!ScalarSyntax()
{
}

Scalar^ ScalarSyntax::Value::get()
{
  return _value;
}

void ScalarSyntax::Value::set(Scalar^ value)
{
  _value = value;
}
