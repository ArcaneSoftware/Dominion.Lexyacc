//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ChainAST.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CChainAST
//*******************************************************************************************************************//
CChainAST::CChainAST() :
  CTransactSQLSyntax(ESyntaxType::Chain),
  _currentID(NONE_ID),
  _nextID(NONE_ID)
{
}

CChainAST::CChainAST(C_CHAIN_AST& that) :
  CTransactSQLSyntax(that),
  _currentID(that._currentID),
  _nextID(that._nextID)
{
}

CChainAST::CChainAST(C_CHAIN_AST&& that) :
  CTransactSQLSyntax(that),
  _currentID(move(that._currentID)),
  _nextID(move(that._nextID))
{
}

CChainAST::CChainAST(int32_t livingLine, int32_t currentID, int32_t nextID) :
  CTransactSQLSyntax(ESyntaxType::Chain, livingLine),
  _currentID(currentID),
  _nextID(nextID)
{
}

CChainAST::~CChainAST()
{
}

C_CHAIN_AST& CChainAST::operator=(C_CHAIN_AST& that)
{
  CTransactSQLSyntax::operator=(that);
  _currentID = that._currentID;
  _nextID = that._nextID;
  return *this;
}
