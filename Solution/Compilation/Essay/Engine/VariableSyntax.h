//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableSyntax, C_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CVariableSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CVariableSyntax);

  CVariableSyntax();
  CVariableSyntax(C_VARIABLE_SYNTAX& that);
  CVariableSyntax(C_VARIABLE_SYNTAX&& that);
  CVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name);
  virtual ~CVariableSyntax();

  virtual CIdentifier GetIdentifier() const override;

  CLASS_PROPERTY(wstring, _name, Name);

  C_VARIABLE_SYNTAX& operator=(C_VARIABLE_SYNTAX& that);

private:
  wstring _name;
};

END_DOMINION_COMPILATION_ESSAY
