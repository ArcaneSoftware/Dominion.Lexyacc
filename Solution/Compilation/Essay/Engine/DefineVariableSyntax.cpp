//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "DefineVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CDefineVariableSyntax
//***********************************************************************************************************************************************************************************//
CDefineVariableSyntax::CDefineVariableSyntax() :
  CReducibleSyntax(ESyntaxType::DefineVariable),
  _initialValueID(NONE_ID)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX& that) :
  CReducibleSyntax(that),
  _accessType(that._accessType),
  _variableType(that._variableType),
  _name(that._name),
  _initialValueID(that._initialValueID)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX&& that) :
  CReducibleSyntax(that),
  _accessType(move(that._accessType)),
  _variableType(move(that._variableType)),
  _name(move(that._name)),
  _initialValueID(move(that._initialValueID))
{
}

CDefineVariableSyntax::CDefineVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, EAccessType access, EVariableType variableType, WSTRING& name, int32_t initialValueID) :
  CReducibleSyntax(ESyntaxType::DefineVariable, liveLine, liveNamespace),
  _accessType(access),
  _variableType(variableType),
  _name(name),
  _initialValueID(initialValueID)
{
}

CDefineVariableSyntax::~CDefineVariableSyntax()
{
}

CIdentifier CDefineVariableSyntax::GetIdentifier() const
{
  return CIdentifier(GetLiveNamespace(), GetName());
}

CScalar CDefineVariableSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  CIdentifier identifier(GetLiveNamespace(), GetName());
  auto variable = context.GetVariable(identifier.ToString());

  return context.GetSyntax(variable.GetRealValueID())->Reduce(context);
}

C_DEFINE_VARIABLE_SYNTAX& CDefineVariableSyntax::operator=(C_DEFINE_VARIABLE_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _accessType = that._accessType;
  _variableType = that._variableType;
  _name = that._name;
  _initialValueID = that._initialValueID;

  return *this;
}

C_DEFINE_VARIABLE_SYNTAX& CDefineVariableSyntax::operator=(C_DEFINE_VARIABLE_SYNTAX&& that)
{
  CReducibleSyntax::operator=(that);

  _accessType = move(that._accessType);
  _variableType = move(that._variableType);
  _name = move(that._name);
  _initialValueID = move(that._initialValueID);

  return *this;
}
