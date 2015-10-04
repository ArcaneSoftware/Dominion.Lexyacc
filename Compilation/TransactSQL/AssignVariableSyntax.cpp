//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "AssignVariableSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CAssignVariableSyntax
//*******************************************************************************************************************//
CAssignVariableSyntax::CAssignVariableSyntax() :
  CTransactSQLSyntax(ESyntaxType::AssignVariable),
  _valueIndex(NONE_INDEX)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _variableName(that._variableName),
  _valueIndex(that._valueIndex)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _variableName(move(that._variableName)),
  _valueIndex(move(that._valueIndex))
{
}

CAssignVariableSyntax::CAssignVariableSyntax(int32_t livingLine, WSTRING& variableName, int32_t valueIndex) :
  CTransactSQLSyntax(ESyntaxType::AssignVariable, livingLine),
  _variableName(variableName),
  _valueIndex(valueIndex)
{
}

CAssignVariableSyntax::~CAssignVariableSyntax()
{
}

C_ASSIGN_VARIABLE_SYNTAX& CAssignVariableSyntax::operator=(C_ASSIGN_VARIABLE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _variableName = that._variableName;
  _valueIndex = that._valueIndex;
  return *this;
}
