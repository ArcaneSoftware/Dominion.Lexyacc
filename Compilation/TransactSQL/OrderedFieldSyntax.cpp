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
  _identifierID(NONE_ID)
{
}

COrderedFieldSyntax::COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _orderByType(that._orderByType),
  _identifierID(that._identifierID)
{
}

COrderedFieldSyntax::COrderedFieldSyntax(C_ORDERED_FIELD_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _orderByType(move(that._orderByType)),
  _identifierID(move(that._identifierID))
{
}

COrderedFieldSyntax::COrderedFieldSyntax(int32_t livingLine, EOrderByType orderByType, int32_t identifierID) :
  CTransactSQLSyntax(ESyntaxType::OrderedField, livingLine),
  _orderByType(orderByType),
  _identifierID(identifierID)
{
}

COrderedFieldSyntax::~COrderedFieldSyntax()
{
}

C_ORDERED_FIELD_SYNTAX& COrderedFieldSyntax::operator=(C_ORDERED_FIELD_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _orderByType = that._orderByType;
  _identifierID = that._identifierID;
  return *this;
}
