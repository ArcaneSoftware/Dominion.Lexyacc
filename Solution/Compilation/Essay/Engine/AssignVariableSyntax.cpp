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
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::AssignVariable),
  _variableID(NONE_ID),
  _valueID(NONE_ID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _variableID(that._variableID),
  _valueID(that._valueID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _variableID(move(that._variableID)),
  _valueID(move(that._valueID))
{
}

CAssignVariableSyntax::CAssignVariableSyntax(int32_t liveLine,
                                             C_NAMESPACE& liveNamespace,
                                             int32_t variableID,
                                             int32_t valueID) :
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::AssignVariable, liveLine, liveNamespace),
  _variableID(variableID),
  _valueID(valueID)
{
}

CAssignVariableSyntax::~CAssignVariableSyntax()
{
}

C_ASSIGN_VARIABLE_SYNTAX& CAssignVariableSyntax::operator=(C_ASSIGN_VARIABLE_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  _variableID = that._variableID;
  _valueID = that._valueID;

  return *this;
}
