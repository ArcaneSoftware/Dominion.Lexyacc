//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "BlockSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CBlockSyntax
//***********************************************************************************************************************************************************************************//
CBlockSyntax::CBlockSyntax() :
  CReducibleSyntax(ESyntaxType::Block)
{
}

CBlockSyntax::CBlockSyntax(C_BLOCK_SYNTAX& that) :
  CReducibleSyntax(that),
  _statementID(that._statementID),
  _blockID(that._blockID)
{
}

CBlockSyntax::CBlockSyntax(C_BLOCK_SYNTAX&& that) :
  CReducibleSyntax(that),
  _statementID(move(that._statementID)),
  _blockID(move(that._blockID))
{
}

CBlockSyntax::CBlockSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t statementID, int32_t blockID) :
  CReducibleSyntax(ESyntaxType::Block, liveLine, liveNamespace),
  _statementID(statementID),
  _blockID(blockID)
{
}

CBlockSyntax::~CBlockSyntax()
{
}

CScalar CBlockSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const
{
  return GetBlockID() == NONE_ID ?
         context.GetSyntax(GetStatementID())->Reduce(context) :
         context.GetSyntax(GetBlockID())->Reduce(context);
}

C_BLOCK_SYNTAX& CBlockSyntax::operator=(C_BLOCK_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _statementID = that._statementID;
  _blockID = that._blockID;

  return *this;
}
