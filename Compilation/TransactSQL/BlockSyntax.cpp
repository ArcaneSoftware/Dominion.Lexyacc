//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "BlockSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CBlockSyntax
//*******************************************************************************************************************//
CBlockSyntax::CBlockSyntax() :
  CTransactSQLSyntax(ESyntaxType::Block)
{
}

CBlockSyntax::CBlockSyntax(C_BLOCK_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _statementIndex(that._statementIndex),
  _blockIndex(that._blockIndex)
{
}

CBlockSyntax::CBlockSyntax(C_BLOCK_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _statementIndex(move(that._statementIndex)),
  _blockIndex(move(that._blockIndex))
{
}

CBlockSyntax::CBlockSyntax(int32_t livingLine, int32_t statementIndex, int32_t blockIndex) :
  CTransactSQLSyntax(ESyntaxType::Block, livingLine),
  _statementIndex(statementIndex),
  _blockIndex(blockIndex)
{
}

CBlockSyntax::~CBlockSyntax()
{
}

C_BLOCK_SYNTAX& CBlockSyntax::operator=(C_BLOCK_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _statementIndex = that._statementIndex;
  _blockIndex = that._blockIndex;
  return *this;
}
