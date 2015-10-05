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
  _initialValueIndex(NONE_INDEX)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX& that) :
  CEssaySyntax(that),
  _variableType(that._variableType),
  _space(that._space),
  _name(that._name),
  _initialValueIndex(that._initialValueIndex)
{
}

CDefineVariableSyntax::CDefineVariableSyntax(C_DEFINE_VARIABLE_SYNTAX&& that) :
  CEssaySyntax(that),
  _variableType(move(that._variableType)),
  _space(move(that._space)),
  _name(move(that._name)),
  _initialValueIndex(move(that._initialValueIndex))
{
}

CDefineVariableSyntax::CDefineVariableSyntax(int32_t livingLine,
                                             EVariableType variableType,
                                             WSTRING& space,
                                             WSTRING& name,
                                             int32_t initialValueIndex) :
  CEssaySyntax(ESyntaxType::DefineVariable, livingLine),
  _variableType(variableType),
  _space(space),
  _name(name),
  _initialValueIndex(initialValueIndex)
{
}

CDefineVariableSyntax::~CDefineVariableSyntax()
{
}

C_DEFINE_VARIABLE_SYNTAX& CDefineVariableSyntax::operator=(C_DEFINE_VARIABLE_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _variableType = that._variableType;
  _space = that._space;
  _name = that._name;
  _initialValueIndex = that._initialValueIndex;

  return *this;
}