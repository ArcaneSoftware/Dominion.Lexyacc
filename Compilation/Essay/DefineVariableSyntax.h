//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CDefineVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CDefineVariableSyntax, C_DEFINE_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CDefineVariableSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, CDefineVariableSyntax);

  CDefineVariableSyntax();
  CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX& that);
  CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX&& that);
  CDefineVariableSyntax(int32_t livingLine,
                        EVariableType variableType,
                        WSTRING& space,
                        WSTRING& name,
                        int32_t initialValueIndex);
  virtual ~CDefineVariableSyntax();

  CLASS_PROPERTY(EVariableType, _variableType, VariableType);
  CLASS_PROPERTY(wstring, _space, Space);
  CLASS_PROPERTY(wstring, _name, Name);
  CLASS_PROPERTY(int32_t, _initialValueIndex, InitialValueIndex);

  C_DEFINE_VARIABLE_SYNTAX& operator=(C_DEFINE_VARIABLE_SYNTAX& that);

private:
  EVariableType _variableType;
  wstring _space;
  wstring _name;
  int32_t _initialValueIndex;
};

END_DOMINION_COMPILATION_ESSAY
