//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CDefineVariableSyntax
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CDefineVariableSyntax, C_DEFINE_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CDefineVariableSyntax : public CReducibleSyntax
{
public:
  CLASS_INHERITOR(CReducibleSyntax, CDefineVariableSyntax);

  CDefineVariableSyntax();
  CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX& that);
  CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX&& that);
  CDefineVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, EAccessType access, EVariableType variableType, WSTRING& name, int32_t initialValueID);
  virtual ~CDefineVariableSyntax();
  //{
  virtual CIdentifier GetIdentifier() const override;
  virtual CScalar Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw() override;
  //}
  //{
  CLASS_PROPERTY(EAccessType, _accessType, AccessType);
  CLASS_PROPERTY(EVariableType, _variableType, VariableType);
  CLASS_PROPERTY(wstring, _name, Name);
  CLASS_PROPERTY(int32_t, _initialValueID, InitialValueID);
  //}
  //{
  C_DEFINE_VARIABLE_SYNTAX& operator=(C_DEFINE_VARIABLE_SYNTAX& that);
  //}
private:
  EAccessType _accessType;
  EVariableType _variableType;
  wstring _name;
  int32_t _initialValueID;
};

END_DOMINION_COMPILATION_ESSAY
