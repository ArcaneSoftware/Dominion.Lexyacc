//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CNamingStack
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CNamingStack, C_NAMING_STACK);
class LIBRARY_EXPORT CNamingStack : public CStack<wstring>
{
public:
  CLASS_INHERITOR(CStack<wstring>, CNamingStack);

  CNamingStack();
  CNamingStack(C_NAMING_STACK& that);
  CNamingStack(C_NAMING_STACK&& that);
  virtual ~CNamingStack();

  CNamespace GetNamespace() const;

  C_NAMING_STACK& operator=(C_NAMING_STACK& that);
};

END_DOMINION_COMPILATION_ESSAY
