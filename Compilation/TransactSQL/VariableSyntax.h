//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableSyntax, C_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CVariableSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CVariableSyntax);

  CVariableSyntax();
  CVariableSyntax(C_VARIABLE_SYNTAX& that);
  CVariableSyntax(C_VARIABLE_SYNTAX&& that);
  CVariableSyntax(int32_t livingLine, WSTRING& name);
  virtual ~CVariableSyntax();

  CLASS_PROPERTY(wstring, _name, Name);

  C_VARIABLE_SYNTAX& operator=(C_VARIABLE_SYNTAX& that);

private:
  wstring _name;
};

END_DOMINION_COMPILATION_TRANSACTSQL
