//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CAssignVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CAssignVariableSyntax, C_ASSIGN_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CAssignVariableSyntax : public CBaseSyntax
{
public:
  CLASS_INHERITOR(CBaseSyntax, CAssignVariableSyntax);

  CAssignVariableSyntax();
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that);
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that);
  CAssignVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t variableID, int32_t valueID);
  virtual ~CAssignVariableSyntax();

  CLASS_PROPERTY(int32_t, _variableID, VariableID);
  CLASS_PROPERTY(int32_t, _valueID, ValueID);

  C_ASSIGN_VARIABLE_SYNTAX& operator=(C_ASSIGN_VARIABLE_SYNTAX& that);

private:
  int32_t _variableID;
  int32_t _valueID;
};

END_DOMINION_COMPILATION_ESSAY
