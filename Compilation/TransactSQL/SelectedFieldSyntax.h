//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CSelectedFieldSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSelectedFieldSyntax, C_SELECTED_FIELD_SYNTAX);
class LIBRARY_EXPORT CSelectedFieldSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CSelectedFieldSyntax);

  CSelectedFieldSyntax();
  CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX& that);
  CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX&& that);
  CSelectedFieldSyntax(int32_t livingLine, int32_t AliasIndex, bool all);
  virtual ~CSelectedFieldSyntax();

  CLASS_PROPERTY(int32_t, _aliasIndex, AliasIndex);
  CLASS_PROPERTY(bool, _all, All);

  C_SELECTED_FIELD_SYNTAX& operator=(C_SELECTED_FIELD_SYNTAX& that);

private:
  int32_t _aliasIndex;
  bool _all;
};

END_DOMINION_COMPILATION_TRANSACTSQL
