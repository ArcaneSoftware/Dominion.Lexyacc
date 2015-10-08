//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CAssignVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CAssignVariableSyntax, C_ASSIGN_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CAssignVariableSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CAssignVariableSyntax);

  CAssignVariableSyntax();
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that);
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that);
  CAssignVariableSyntax(int32_t livingLine, WSTRING& variableName, int32_t valueID);
  virtual ~CAssignVariableSyntax();

  CLASS_PROPERTY(wstring, _variableName, VariableName);
  CLASS_PROPERTY(int32_t, _valueID, ValueID);

  C_ASSIGN_VARIABLE_SYNTAX& operator=(C_ASSIGN_VARIABLE_SYNTAX& that);

private:
  wstring _variableName;
  int32_t _valueID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
