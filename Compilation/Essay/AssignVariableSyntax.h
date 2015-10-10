//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CAssignVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CAssignVariableSyntax, C_ASSIGN_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CAssignVariableSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, CAssignVariableSyntax);

  CAssignVariableSyntax();
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that);
  CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that);
  CAssignVariableSyntax(int32_t livingLine, C_NAMESPACE& currentNamespace, WSTRING& variableName, int32_t valueID);
  virtual ~CAssignVariableSyntax();

  CLASS_PROPERTY(CNamespace, _currentNamespace, CurrentNamespace);
  CLASS_PROPERTY(wstring, _variableName, VariableName);
  CLASS_PROPERTY(int32_t, _valueID, ValueID);

  C_ASSIGN_VARIABLE_SYNTAX& operator=(C_ASSIGN_VARIABLE_SYNTAX& that);

private:
  CNamespace _currentNamespace;
  wstring _variableName;
  int32_t _valueID;
};

END_DOMINION_COMPILATION_ESSAY
