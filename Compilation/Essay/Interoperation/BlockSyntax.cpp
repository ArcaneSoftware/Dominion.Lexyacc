#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "BlockSyntax.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//BlockSyntax
//********************************************************************************************************************//
BlockSyntax::BlockSyntax() :
  RawSyntax(SyntaxTypeEnum::Block, LineConst::NONE),
  _statementID(IDConst::NONE),
  _blockID(IDConst::NONE)
{
}

BlockSyntax::~BlockSyntax()
{
}

BlockSyntax::!BlockSyntax()
{
}

int32_t BlockSyntax::StatementID::get()
{
  return _statementID;
}

void BlockSyntax::StatementID::set(int32_t value)
{
  _statementID = value;
}

int32_t BlockSyntax::BlockID::get()
{
  return _blockID;
}

void BlockSyntax::BlockID::set(int32_t value)
{
  _blockID = value;
}
