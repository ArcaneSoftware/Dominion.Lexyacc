//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "TransactSQLSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CTransactSQLSyntax
//*******************************************************************************************************************//
CTransactSQLSyntax::CTransactSQLSyntax() :
  _inParenthesis(false)
{
}

CTransactSQLSyntax::CTransactSQLSyntax(C_CONCRETE_SYNTAX& that) :
  CAbstractSyntaxTree(that),
  _inParenthesis(that._inParenthesis)
{
}

CTransactSQLSyntax::CTransactSQLSyntax(C_CONCRETE_SYNTAX&& that) :
  CAbstractSyntaxTree(that),
  _inParenthesis(move(that._inParenthesis))
{
}

CTransactSQLSyntax::CTransactSQLSyntax(ESyntaxType syntaxType, int32_t livingLine) :
  CAbstractSyntaxTree(syntaxType, livingLine)
{
}

CTransactSQLSyntax::~CTransactSQLSyntax()
{
}

C_CONCRETE_SYNTAX& CTransactSQLSyntax::operator=(C_CONCRETE_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  _inParenthesis = that._inParenthesis;

  return *this;
}
