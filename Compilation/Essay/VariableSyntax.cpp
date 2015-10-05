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
  _space(that._space),
  _name(that._name)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX&& that) :
  CEssaySyntax(that),
  _space(move(that._space)),
  _name(move(that._name))
{
}

CVariableSyntax::CVariableSyntax(int32_t livingLine, WSTRING& space, WSTRING& name) :
  CEssaySyntax(ESyntaxType::Variable, livingLine),
  _space(space),
  _name(name)
{
}

CVariableSyntax::~CVariableSyntax()
{
}

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _space = that._space;
  _name = that._name;

  return *this;
}
