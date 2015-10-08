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
  _statementID(that._statementID),
  _blockID(that._blockID)
{
}

CBlockSyntax::CBlockSyntax(C_BLOCK_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _statementID(move(that._statementID)),
  _blockID(move(that._blockID))
{
}

CBlockSyntax::CBlockSyntax(int32_t livingLine, int32_t statementID, int32_t blockID) :
  CTransactSQLSyntax(ESyntaxType::Block, livingLine),
  _statementID(statementID),
  _blockID(blockID)
{
}

CBlockSyntax::~CBlockSyntax()
{
}

C_BLOCK_SYNTAX& CBlockSyntax::operator=(C_BLOCK_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _statementID = that._statementID;
  _blockID = that._blockID;
  return *this;
}
