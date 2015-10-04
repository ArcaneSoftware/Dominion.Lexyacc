//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CChainSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CChainSyntax, C_CHAIN_SYNTAX);
class LIBRARY_EXPORT CChainSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, CChainSyntax);

  CChainSyntax();
  CChainSyntax(C_CHAIN_SYNTAX& that);
  CChainSyntax(C_CHAIN_SYNTAX&& that);
  CChainSyntax(int32_t livingLine, int32_t currentIndex, int32_t nextIndex);
  virtual ~CChainSyntax();

  CLASS_PROPERTY(int32_t, _currentIndex, CurrentIndex);
  CLASS_PROPERTY(int32_t, _nextIndex, NextIndex);

  C_CHAIN_SYNTAX& operator=(C_CHAIN_SYNTAX& that);

private:
  int32_t _currentIndex;
  int32_t _nextIndex;
};

END_DOMINION_COMPILATION_ESSAY
