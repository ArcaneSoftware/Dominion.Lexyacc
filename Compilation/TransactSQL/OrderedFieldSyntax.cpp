//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "OrderedFieldSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//COrderedFieldSyntax
//*******************************************************************************************************************//
COrderedFieldSyntax::COrderedFieldSyntax() :
  CTransactSQLSyntax(ESyntaxType::OrderedField),
  _orderByType(EOrderByType::Asc),
  _identifierIndex(NONE_ID)
{
}

COrderedFieldSyntax::COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _orderByType(that._orderByType),
  _identifierIndex(that._identifierIndex)
{
}

COrderedFieldSyntax::COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _orderByType(move(that._orderByType)),
  _identifierIndex(move(that._identifierIndex))
{
}

COrderedFieldSyntax::COrderedFieldSyntax(int32_t livingLine, EOrderByType orderByType, int32_t identifierIndex) :
  CTransactSQLSyntax(ESyntaxType::OrderedField, livingLine),
  _orderByType(orderByType),
  _identifierIndex(identifierIndex)
{
}

COrderedFieldSyntax::~COrderedFieldSyntax()
{
}

C_ORDERED_FIELD_SYNTAX& COrderedFieldSyntax::operator=(C_ORDERED_FIELD_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _orderByType = that._orderByType;
  _identifierIndex = that._identifierIndex;
  return *this;
}
