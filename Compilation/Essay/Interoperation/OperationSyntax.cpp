#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "OperationSyntax.h"

using namespace Dominion;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//OperationSyntax
//********************************************************************************************************************//
OperationSyntax::OperationSyntax() :
  RawSyntax(SyntaxTypeEnum::Operation, LineConst::NONE),
  _leftOperandID(IDConst::NONE),
  _rightOperandID(IDConst::NONE)
{
}

OperationSyntax::~OperationSyntax()
{
}

OperationSyntax::!OperationSyntax()
{
}

OperationTypeEnum OperationSyntax::OperationType::get()
{
  return _operationType;
}

void OperationSyntax::OperationType::set(OperationTypeEnum value)
{
  _operationType = value;
}

int32_t OperationSyntax::LeftOperandID::get()
{
  return _leftOperandID;
}

void OperationSyntax::LeftOperandID::set(int32_t value)
{
  _leftOperandID = value;
}

int32_t OperationSyntax::RightOperandID::get()
{
  return _rightOperandID;
}

void OperationSyntax::RightOperandID::set(int32_t value)
{
  _rightOperandID = value;
}
