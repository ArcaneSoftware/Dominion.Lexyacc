//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CChainAST
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CChainAST, C_CHAIN_AST);
class LIBRARY_EXPORT CChainAST : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CChainAST);

  CChainAST();
  CChainAST(C_CHAIN_AST& that);
  CChainAST(C_CHAIN_AST&& that);
  CChainAST(int32_t livingLine, int32_t currentID, int32_t nextID);
  virtual ~CChainAST();

  CLASS_PROPERTY(int32_t, _currentID, CurrentID);
  CLASS_PROPERTY(int32_t, _nextID, NextID);

  C_CHAIN_AST& operator=(C_CHAIN_AST& that);

private:
  int32_t _currentID;
  int32_t _nextID;
};

END_DOMINION_COMPILATION_TRANSACTSQL


