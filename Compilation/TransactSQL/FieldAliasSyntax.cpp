//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "FieldAliasSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CFieldAliasSyntax
//*******************************************************************************************************************//
CFieldAliasSyntax::CFieldAliasSyntax() :
  CTransactSQLSyntax(ESyntaxType::FieldAlias),
  _expressionID(NONE_ID)
{
}

CFieldAliasSyntax::CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _identifier(that._identifier),
  _expressionID(that._expressionID),
  _nickname(that._nickname)
{
}

CFieldAliasSyntax::CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _identifier(move(that._identifier)),
  _expressionID(move(that._expressionID)),
  _nickname(move(that._nickname))
{
}

CFieldAliasSyntax::CFieldAliasSyntax(int32_t liveLine,
                                     WSTRING& identifier,
                                     int32_t expressionID,
                                     WSTRING& alias) :
  CTransactSQLSyntax(ESyntaxType::FieldAlias, liveLine),
  _identifier(identifier),
  _expressionID(expressionID),
  _nickname(alias)
{
}

CFieldAliasSyntax::~CFieldAliasSyntax()
{
}

C_FIELD_ALIAS_SYNTAX& CFieldAliasSyntax::operator=(C_FIELD_ALIAS_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _identifier = that._identifier;
  _expressionID = that._expressionID;
  _nickname = that._nickname;
  return *this;
}