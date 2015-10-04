//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CCaseSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CCaseSyntax, C_CASE_SYNTAX);
class LIBRARY_EXPORT CCaseSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CCaseSyntax);

  CCaseSyntax();
  CCaseSyntax(C_CASE_SYNTAX& that);
  CCaseSyntax(C_CASE_SYNTAX&& that);
  CCaseSyntax(int32_t livingLine, int32_t conditionIndex, int32_t whenChainIndex, int32_t elseIndex);
  virtual ~CCaseSyntax();

  CLASS_PROPERTY(int32_t, _conditionIndex, ConditionIndex);
  CLASS_PROPERTY(int32_t, _whenChainIndex, WhenChainIndex);
  CLASS_PROPERTY(int32_t, _elseIndex, ElseIndex);

public:
  C_CASE_SYNTAX& operator=(C_CASE_SYNTAX& that);

private:
  int32_t _conditionIndex;
  int32_t _whenChainIndex;
  int32_t _elseIndex;
};

END_DOMINION_COMPILATION_TRANSACTSQL
