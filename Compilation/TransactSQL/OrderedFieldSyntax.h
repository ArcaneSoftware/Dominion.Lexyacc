//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//COrderedFieldSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(COrderedFieldSyntax, C_ORDERED_FIELD_SYNTAX);
class LIBRARY_EXPORT COrderedFieldSyntax : public CTransactSQLSyntax
{
public:
  CLASS_INHERITOR(CTransactSQLSyntax, COrderedFieldSyntax);

  COrderedFieldSyntax();
  COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX& that);
  COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX&& that);
  COrderedFieldSyntax(int32_t liveLine, EOrderByType orderByType, int32_t identifierID);
  virtual ~COrderedFieldSyntax();

  CLASS_PROPERTY(EOrderByType, _orderByType, OrderByType);
  CLASS_PROPERTY(int32_t, _identifierID, IdentifierID);

  C_ORDERED_FIELD_SYNTAX& operator=(C_ORDERED_FIELD_SYNTAX& that);

private:
  EOrderByType _orderByType;
  int32_t _identifierID;
};

END_DOMINION_COMPILATION_TRANSACTSQL
