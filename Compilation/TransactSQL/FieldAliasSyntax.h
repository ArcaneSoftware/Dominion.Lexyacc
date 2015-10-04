//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CFieldAliasSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFieldAliasSyntax, C_FIELD_ALIAS_SYNTAX);
class LIBRARY_EXPORT CFieldAliasSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CFieldAliasSyntax);

  CFieldAliasSyntax();
  CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX& that);
  CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX&& that);
  CFieldAliasSyntax(int32_t livingLine, WSTRING& identifier, int32_t expressionIndex, WSTRING& alias);
  virtual ~CFieldAliasSyntax();

  CLASS_PROPERTY(wstring, _identifier, Identifier);
  CLASS_PROPERTY(int32_t, _expressionIndex, ExpressionIndex);
  CLASS_PROPERTY(wstring, _nickname, Nickname);

  C_FIELD_ALIAS_SYNTAX& operator=(C_FIELD_ALIAS_SYNTAX& that);

private:
  wstring _identifier;
  int32_t _expressionIndex;
  wstring _nickname;
};

END_DOMINION_COMPILATION_TRANSACTSQL
