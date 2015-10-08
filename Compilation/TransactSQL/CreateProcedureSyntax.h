//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CCreateProcedureSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CCreateProcedureSyntax, C_CREATE_PROCEDURE_SYNTAX);
class LIBRARY_EXPORT CCreateProcedureSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CCreateProcedureSyntax);

  CCreateProcedureSyntax();
  CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX& that);
  CCreateProcedureSyntax(C_CREATE_PROCEDURE_SYNTAX&& that);
  CCreateProcedureSyntax(int32_t livingLine,
                         WSTRING& procedureName,
                         int32_t variableDefinitionChainID,
                         int32_t blockID);
  virtual ~CCreateProcedureSyntax();

  CLASS_PROPERTY(wstring, _procedureName, ProcedureName);
  CLASS_PROPERTY(int32_t, _variableDefinitionChainID, VariableDefinitionChainID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_CREATE_PROCEDURE_SYNTAX& operator=(C_CREATE_PROCEDURE_SYNTAX& that);

private:
  wstring _procedureName;
  int32_t _variableDefinitionChainID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
