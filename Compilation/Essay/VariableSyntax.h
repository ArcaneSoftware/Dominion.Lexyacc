//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CVariableSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableSyntax, C_VARIABLE_SYNTAX);
class LIBRARY_EXPORT CVariableSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, CVariableSyntax);

  CVariableSyntax();
  CVariableSyntax(C_VARIABLE_SYNTAX& that);
  CVariableSyntax(C_VARIABLE_SYNTAX&& that);
  CVariableSyntax(int32_t livingLine, WSTRING& nameSpace, WSTRING& name);
  virtual ~CVariableSyntax();

  CLASS_PROPERTY(wstring, _nameSpace, NameSpace);
  CLASS_PROPERTY(wstring, _name, Name);

  C_VARIABLE_SYNTAX& operator=(C_VARIABLE_SYNTAX& that);

private:
  wstring _nameSpace;
  wstring _name;
};

END_DOMINION_COMPILATION_ESSAY