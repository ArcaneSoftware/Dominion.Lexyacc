//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "VariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CVariableSyntax
//*******************************************************************************************************************//
CVariableSyntax::CVariableSyntax() :
  CEssaySyntax(ESyntaxType::Variable)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX& that) :
  CEssaySyntax(that),
  _name(that._name)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX&& that) :
  CEssaySyntax(that),
  _name(move(that._name))
{
}

CVariableSyntax::CVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name) :
  CEssaySyntax(ESyntaxType::Variable, liveLine, liveNamespace),
  _name(name)
{
}

CVariableSyntax::~CVariableSyntax()
{
}

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _name = that._name;

  return *this;
}
