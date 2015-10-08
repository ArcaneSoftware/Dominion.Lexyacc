//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CVariableDefinitionSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableDefinitionSyntax, C_VARIABLE_DEFINITION_SYNTAX);
class LIBRARY_EXPORT CVariableDefinitionSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CVariableDefinitionSyntax);

  CVariableDefinitionSyntax();
  CVariableDefinitionSyntax(C_VARIABLE_DEFINITION_SYNTAX& that);
  CVariableDefinitionSyntax(C_VARIABLE_DEFINITION_SYNTAX&& that);
  CVariableDefinitionSyntax(int32_t livingLine,
                            WSTRING& variableName,
                            WSTRING& sqlType,
                            int32_t valueID,
                            bool output);
  virtual ~CVariableDefinitionSyntax();
  //{CAbstractSyntaxTree
  virtual wstring Naming() const override;
  //}
  CLASS_PROPERTY(wstring, _variableName, VariableName);
  CLASS_PROPERTY(wstring, _sqlType, SQLType);
  CLASS_PROPERTY(int32_t, _valueID, ValueID);
  CLASS_PROPERTY(bool, _output, Output);

  C_VARIABLE_DEFINITION_SYNTAX& operator=(C_VARIABLE_DEFINITION_SYNTAX& that);

private:
  wstring _variableName;
  wstring  _sqlType;
  int32_t _valueID;
  bool _output;
};

END_DOMINION_COMPILATION_TRANSACTSQL
