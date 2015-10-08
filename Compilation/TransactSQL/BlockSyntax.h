//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CBlockSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CBlockSyntax, C_BLOCK_SYNTAX);
class LIBRARY_EXPORT CBlockSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CBlockSyntax);

  CBlockSyntax();
  CBlockSyntax(C_BLOCK_SYNTAX& that);
  CBlockSyntax(C_BLOCK_SYNTAX&& that);
  CBlockSyntax(int32_t livingLine, int32_t statementID, int32_t blockID);
  virtual ~CBlockSyntax();

  CLASS_PROPERTY(int32_t, _statementID, StatementID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_BLOCK_SYNTAX& operator=(C_BLOCK_SYNTAX& that);

private:
  int32_t _statementID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
