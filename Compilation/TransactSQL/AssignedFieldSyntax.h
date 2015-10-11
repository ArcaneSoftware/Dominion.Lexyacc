//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CAssignedFieldSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CAssignedFieldSyntax, C_ASSIGNED_FIELD_SYNTAX);
class LIBRARY_EXPORT CAssignedFieldSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CAssignedFieldSyntax);

  CAssignedFieldSyntax();
  CAssignedFieldSyntax(C_ASSIGNED_FIELD_SYNTAX& that);
  CAssignedFieldSyntax(C_ASSIGNED_FIELD_SYNTAX&& that);
  CAssignedFieldSyntax(int32_t liveLine, WSTRING& variableID, WSTRING& fieldName);
  virtual ~CAssignedFieldSyntax();

  CLASS_PROPERTY(wstring, _variableName, VariableName);
  CLASS_PROPERTY(wstring, _fieldName, FieldName);

  C_ASSIGNED_FIELD_SYNTAX& operator=(C_ASSIGNED_FIELD_SYNTAX& that);

private:
  wstring _variableName;
  wstring _fieldName;
};

END_DOMINION_COMPILATION_TRANSACTSQL
