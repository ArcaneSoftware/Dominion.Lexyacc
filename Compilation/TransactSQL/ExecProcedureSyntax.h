//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CExecProcedureSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CExecProcedureSyntax, C_EXEC_PROCEDURE_SYNTAX);
class LIBRARY_EXPORT CExecProcedureSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CExecProcedureSyntax);

  CExecProcedureSyntax();
  CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX& that);
  CExecProcedureSyntax(C_EXEC_PROCEDURE_SYNTAX&& that);
  CExecProcedureSyntax(int32_t livingLine,
                       WSTRING& returnVariableName,
                       WSTRING& procedureName,
                       int32_t argumentChainIndex);
  virtual ~CExecProcedureSyntax();

  CLASS_PROPERTY(wstring, _returnVariableName, ReturnVariableName);
  CLASS_PROPERTY(wstring, _procedureName, ProcedureName);
  CLASS_PROPERTY(int32_t, _argumentChainIndex, ArgumentChainIndex);

  C_EXEC_PROCEDURE_SYNTAX& operator=(C_EXEC_PROCEDURE_SYNTAX& that);

private:
  wstring _returnVariableName;
  wstring _procedureName;
  int32_t _argumentChainIndex;
};

END_DOMINION_COMPILATION_TRANSACTSQL
