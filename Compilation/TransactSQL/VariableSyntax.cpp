//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableAST.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CVariableAST
//*******************************************************************************************************************//
CVariableAST::CVariableAST() :
  CTransactSQLSyntax(ESyntaxType::Variable)
{
}

CVariableAST::CVariableAST(C_VARIABLE_AST& that) :
  CTransactSQLSyntax(that),
  _name(that._name)
{
}

CVariableAST::CVariableAST(C_VARIABLE_AST&& that) :
  CTransactSQLSyntax(that),
  _name(move(that._name))
{
}

CVariableAST::CVariableAST(int32_t liveLine, WSTRING& name) :
  CTransactSQLSyntax(ESyntaxType::Variable, liveLine),
  _name(name)
{
}

CVariableAST::~CVariableAST()
{
}

C_VARIABLE_AST& CVariableAST::operator=(C_VARIABLE_AST& that)
{
  CTransactSQLSyntax::operator=(that);
  _name = that._name;
  return *this;
}