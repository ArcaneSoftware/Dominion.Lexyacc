//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "AssignVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CAssignVariableSyntax
//***********************************************************************************************************************************************************************************//
CAssignVariableSyntax::CAssignVariableSyntax() :
  CReducibleSyntax(ESyntaxType::AssignVariable),
  _variableID(NONE_ID),
  _valueID(NONE_ID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX& that) :
  CReducibleSyntax(that),
  _variableID(that._variableID),
  _valueID(that._valueID)
{
}

CAssignVariableSyntax::CAssignVariableSyntax(C_ASSIGN_VARIABLE_SYNTAX&& that) :
  CReducibleSyntax(that),
  _variableID(move(that._variableID)),
  _valueID(move(that._valueID))
{
}

CAssignVariableSyntax::CAssignVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t variableID, int32_t valueID) :
  CReducibleSyntax(ESyntaxType::AssignVariable, liveLine, liveNamespace),
  _variableID(variableID),
  _valueID(valueID)
{
}

CAssignVariableSyntax::~CAssignVariableSyntax()
{
}

CScalar CAssignVariableSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  auto variable = context.GetSyntax(GetVariableID());
  bool successed = context.SetVariableValue(variable->GetIdentifier(), GetValueID());

  return variable->Reduce(context);
}

C_ASSIGN_VARIABLE_SYNTAX& CAssignVariableSyntax::operator=(C_ASSIGN_VARIABLE_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _variableID = that._variableID;
  _valueID = that._valueID;

  return *this;
}

C_ASSIGN_VARIABLE_SYNTAX& CAssignVariableSyntax::operator=(C_ASSIGN_VARIABLE_SYNTAX&& that)
{
  CReducibleSyntax::operator=(that);

  _variableID = move(that._variableID);
  _valueID = move(that._valueID);

  return *this;
}
