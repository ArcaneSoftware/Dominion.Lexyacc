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
                        C_NAMESPACE& _namespace_,
                        WSTRING& name,
                        int32_t initialValueID);
  virtual ~CDefineVariableSyntax();

  CLASS_PROPERTY(EVariableType, _variableType, VariableType);
  CLASS_PROPERTY(CNamespace, _namespace, Namespace);
  CLASS_PROPERTY(wstring, _name, Name);
  CLASS_PROPERTY(int32_t, _initialValueID, InitialValueID);

  C_DEFINE_VARIABLE_SYNTAX& operator=(C_DEFINE_VARIABLE_SYNTAX& that);

private:
  EVariableType _variableType;
  CNamespace _namespace;
  wstring _name;
  int32_t _initialValueID;
};

END_DOMINION_COMPILATION_ESSAY