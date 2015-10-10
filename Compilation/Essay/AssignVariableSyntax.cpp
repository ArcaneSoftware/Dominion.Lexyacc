//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "AssignVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CAssignVariableSyntax
//*******************************************************************************************************************//
CAssignVariableSyntax::CAssignVariableSyntax() :
  CEssaySyntax(ESyntaxType::AssignVariable),
  _valueID(NONE_ID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that) :
  CEssaySyntax(that),
  _currentNamespace(that._currentNamespace),
  _variableName(that._variableName),
  _valueID(that._valueID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that) :
  CEssaySyntax(that),
  _currentNamespace(move(that._currentNamespace)),
  _variableName(move(that._variableName)),
  _valueID(move(that._valueID))
{
}

CAssignVariableSyntax::CAssignVariableSyntax(int32_t livingLine,
                                             C_NAMESPACE& currentNamespace,
                                             WSTRING& variableName,
                                             int32_t valueID) :
  CEssaySyntax(ESyntaxType::AssignVariable, livingLine),
  _currentNamespace(currentNamespace),
  _variableName(variableName),
  _valueID(valueID)
{
}

CAssignVariableSyntax::~CAssignVariableSyntax()
{
}

C_ASSIGN_VARIABLE_SYNTAX& CAssignVariableSyntax::operator=(C_ASSIGN_VARIABLE_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _currentNamespace = that._currentNamespace;
  _variableName = that._variableName;
  _valueID = that._valueID;

  return *this;
}
