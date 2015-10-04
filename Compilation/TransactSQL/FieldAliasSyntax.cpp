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
  _expressionIndex(NONE_INDEX)
{
}

CFieldAliasSyntax::CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _identifier(that._identifier),
  _expressionIndex(that._expressionIndex),
  _nickname(that._nickname)
{
}

CFieldAliasSyntax::CFieldAliasSyntax(C_FIELD_ALIAS_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _identifier(move(that._identifier)),
  _expressionIndex(move(that._expressionIndex)),
  _nickname(move(that._nickname))
{
}

CFieldAliasSyntax::CFieldAliasSyntax(int32_t livingLine,
                                     WSTRING& identifier,
                                     int32_t expressionIndex,
                                     WSTRING& alias) :
  CTransactSQLSyntax(ESyntaxType::FieldAlias, livingLine),
  _identifier(identifier),
  _expressionIndex(expressionIndex),
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
  _expressionIndex = that._expressionIndex;
  _nickname = that._nickname;
  return *this;
}