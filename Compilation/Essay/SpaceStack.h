//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CSpaceStack
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSpaceStack, C_SPACE_STACK);
class LIBRARY_EXPORT CSpaceStack : public CStack<wstring>
{
public:
  CLASS_INHERITOR(CStack<wstring>, CSpaceStack);

  CSpaceStack();
  CSpaceStack(C_SPACE_STACK& that);
  CSpaceStack(C_SPACE_STACK&& that);
  virtual ~CSpaceStack();

  CNamespace GetNamespace() const;

  C_SPACE_STACK& operator=(C_SPACE_STACK& that);
};

END_DOMINION_COMPILATION_ESSAY
