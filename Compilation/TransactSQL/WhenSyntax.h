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
  CWhenSyntax(int32_t livingLine, int32_t conditionID, int32_t thenID);
  virtual ~CWhenSyntax();

  CLASS_PROPERTY(int32_t, _conditionID, ConditionID);
  CLASS_PROPERTY(int32_t, _thenID, ThenID);

public:
  C_WHEN_SYNTAX& operator=(C_WHEN_SYNTAX& that);

private:
  int32_t _conditionID;
  int32_t _thenID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
