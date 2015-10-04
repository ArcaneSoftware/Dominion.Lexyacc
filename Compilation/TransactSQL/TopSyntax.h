//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CTopSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CTopSyntax, C_TOP_SYNTAX);
class LIBRARY_EXPORT CTopSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, CTopSyntax);

  CTopSyntax();
  CTopSyntax(C_TOP_SYNTAX& that);
  CTopSyntax(C_TOP_SYNTAX&& that);
  CTopSyntax(int32_t livingLine, int32_t quantity, bool percent);
  virtual ~CTopSyntax();
  CLASS_PROPERTY(int32_t, _quantity, Quantity);
  CLASS_PROPERTY(bool, _percent, Percent);

  C_TOP_SYNTAX& operator=(C_TOP_SYNTAX& that);

private:
  int32_t _quantity;
  bool _percent;
};

END_DOMINION_COMPILATION_TRANSACTSQL
