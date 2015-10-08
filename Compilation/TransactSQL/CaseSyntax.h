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
  CCaseSyntax(int32_t livingLine, int32_t conditionID, int32_t whenChainID, int32_t elseID);
  virtual ~CCaseSyntax();

  CLASS_PROPERTY(int32_t, _conditionID, ConditionID);
  CLASS_PROPERTY(int32_t, _whenChainID, WhenChainID);
  CLASS_PROPERTY(int32_t, _elseID, ElseID);

public:
  C_CASE_SYNTAX& operator=(C_CASE_SYNTAX& that);

private:
  int32_t _conditionID;
  int32_t _whenChainID;
  int32_t _elseID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
