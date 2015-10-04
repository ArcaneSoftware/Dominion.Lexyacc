//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableDefinitionSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CVariableDefinitionSyntax
//*******************************************************************************************************************//
CVariableDefinitionSyntax::CVariableDefinitionSyntax() :
  CTransactSQLSyntax(ESyntaxType::VariableDefinition),
  _valueIndex(NONE_INDEX),
  _output(false)
{
}

CVariableDefinitionSyntax::CVariableDefinitionSyntax(C_VARIABLE_DEFINITION_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _variableName(that._variableName),
  _sqlType(that._sqlType),
  _valueIndex(that._valueIndex),
  _output(that._output)
{
}

CVariableDefinitionSyntax::CVariableDefinitionSyntax(C_VARIABLE_DEFINITION_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _variableName(move(that._variableName)),
  _sqlType(move(that._sqlType)),
  _valueIndex(move(that._valueIndex)),
  _output(move(that._output))
{
}

CVariableDefinitionSyntax::CVariableDefinitionSyntax(int32_t livingLine,
                                                     WSTRING& variableName,
                                                     WSTRING& sqlType,
                                                     int32_t valueIndex,
                                                     bool output) :
  CTransactSQLSyntax(ESyntaxType::VariableDefinition, livingLine),
  _variableName(variableName),
  _sqlType(sqlType),
  _valueIndex(valueIndex),
  _output(output)
{
}

CVariableDefinitionSyntax::~CVariableDefinitionSyntax()
{
}

wstring CVariableDefinitionSyntax::Naming() const
{
  return _variableName;
}

C_VARIABLE_DEFINITION_SYNTAX& CVariableDefinitionSyntax::operator=(C_VARIABLE_DEFINITION_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _variableName = that._variableName;
  _sqlType = that._sqlType;
  _valueIndex = that._valueIndex;
  _output = that._output;
  return *this;
}
