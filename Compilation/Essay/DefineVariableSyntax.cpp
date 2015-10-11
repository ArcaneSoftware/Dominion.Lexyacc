//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "DefineVariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CDefineVariableSyntax
//*******************************************************************************************************************//
CDefineVariableSyntax::CDefineVariableSyntax() :
  CEssaySyntax(ESyntaxType::DefineVariable),
  _initialValueID(NONE_ID)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX& that) :
  CEssaySyntax(that),
  _variableType(that._variableType),
  _name(that._name),
  _initialValueID(that._initialValueID)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX&& that) :
  CEssaySyntax(that),
  _variableType(move(that._variableType)),
  _name(move(that._name)),
  _initialValueID(move(that._initialValueID))
{
}

CDefineVariableSyntax::CDefineVariableSyntax(int32_t liveLine,
                                             C_NAMESPACE& liveNamespace,
                                             EVariableType variableType,
                                             WSTRING& name,
                                             int32_t initialValueID) :
  CEssaySyntax(ESyntaxType::DefineVariable, liveLine, liveNamespace),
  _variableType(variableType),
  _name(name),
  _initialValueID(initialValueID)
{
}

CDefineVariableSyntax::~CDefineVariableSyntax()
{
}

C_DEFINE_VARIABLE_SYNTAX& CDefineVariableSyntax::operator=(C_DEFINE_VARIABLE_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _variableType = that._variableType;
  _name = that._name;
  _initialValueID = that._initialValueID;

  return *this;
}