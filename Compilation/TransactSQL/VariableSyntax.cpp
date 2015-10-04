//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CVariableSyntax
//*******************************************************************************************************************//
CVariableSyntax::CVariableSyntax() :
  CTransactSQLSyntax(ESyntaxType::Variable)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _name(that._name)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _name(move(that._name))
{
}

CVariableSyntax::CVariableSyntax(int32_t livingLine, WSTRING& name) :
  CTransactSQLSyntax(ESyntaxType::Variable, livingLine),
  _name(name)
{
}

CVariableSyntax::~CVariableSyntax()
{
}

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _name = that._name;
  return *this;
}