#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "ChainSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//ChainSyntax
//********************************************************************************************************************//
ChainSyntax::ChainSyntax() :
  AbstractSyntaxTree(SyntaxTypeEnum::Chain, LineConst::NONE),
  _currentID(IDConst::NONE),
  _nextID(IDConst::NONE)
{
}

ChainSyntax::~ChainSyntax()
{
}

ChainSyntax::!ChainSyntax()
{
}

int32_t ChainSyntax::CurrentID::get()
{
  return _currentID;
}

void ChainSyntax::CurrentID::set(int32_t value)
{
  _currentID = value;
}

int32_t ChainSyntax::NextID::get()
{
  return _nextID;
}

void ChainSyntax::NextID::set(int32_t value)
{
  _nextID = value;
}
