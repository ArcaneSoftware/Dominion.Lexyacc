//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CVariableAST
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableAST, C_VARIABLE_AST);
class LIBRARY_EXPORT CVariableAST : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CVariableAST);

  CVariableAST();
  CVariableAST(C_VARIABLE_AST& that);
  CVariableAST(C_VARIABLE_AST&& that);
  CVariableAST(int32_t liveLine, WSTRING& name);
  virtual ~CVariableAST();

  CLASS_PROPERTY(wstring, _name, Name);

  C_VARIABLE_AST& operator=(C_VARIABLE_AST& that);

private:
  wstring _name;
};

END_DOMINION_COMPILATION_TRANSACTSQL
