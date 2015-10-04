//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CWhenSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CWhenSyntax, C_WHEN_SYNTAX);
class LIBRARY_EXPORT CWhenSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CWhenSyntax);

  CWhenSyntax();
  CWhenSyntax(C_WHEN_SYNTAX& that);
  CWhenSyntax(C_WHEN_SYNTAX&& that);
  CWhenSyntax(int32_t livingLine, int32_t conditionIndex, int32_t thenIndex);
  virtual ~CWhenSyntax();

  CLASS_PROPERTY(int32_t, _conditionIndex, ConditionIndex);
  CLASS_PROPERTY(int32_t, _thenIndex, ThenIndex);

public:
  C_WHEN_SYNTAX& operator=(C_WHEN_SYNTAX& that);

private:
  int32_t _conditionIndex;
  int32_t _thenIndex;
};

END_DOMINION_COMPILATION_TRANSACTSQL
