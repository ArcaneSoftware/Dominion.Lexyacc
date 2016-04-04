#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "FunctionSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//FunctionSyntax
//********************************************************************************************************************//
FunctionSyntax::FunctionSyntax() :
  AbstractSyntaxTree(SyntaxTypeEnum::Function, LineConst::NONE),
  _argumentChainID(IDConst::NONE)
{
}

FunctionSyntax::~FunctionSyntax()
{
}

FunctionSyntax::!FunctionSyntax()
{
}

String^ FunctionSyntax::Name::get()
{
  return _name;
}

void FunctionSyntax::Name::set(String^ value)
{
  _name = value;
}

int32_t FunctionSyntax::ArgumentChainID::get()
{
  return _argumentChainID;
}

void FunctionSyntax::ArgumentChainID::set(int32_t value)
{
  _argumentChainID = value;
}
