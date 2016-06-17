//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "VariableSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CVariableSyntax
//***********************************************************************************************************************************************************************************//
CVariableSyntax::CVariableSyntax() :
  CReducibleSyntax(ESyntaxType::Variable)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX& that) :
  CReducibleSyntax(that),
  _name(that._name)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX&& that) :
  CReducibleSyntax(that),
  _name(move(that._name))
{
}

CVariableSyntax::CVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name) :
  CReducibleSyntax(ESyntaxType::Variable, liveLine, liveNamespace),
  _name(name)
{
}

CVariableSyntax::~CVariableSyntax()
{
}

CIdentifier CVariableSyntax::GetIdentifier() const
{
  return CIdentifier(GetLiveNamespace(), _name);
}

CScalar CVariableSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  CIdentifier identifier(GetLiveNamespace(), GetName());
  auto variable = context.GetVariable(identifier);

  return context.GetSyntax(variable.GetRealValueID())->Reduce(context);
}

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX& that)
{
  CReducibleSyntax::operator=(that);

  _name = that._name;

  return *this;
}

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX&& that)
{
  CReducibleSyntax::operator=(that);

  _name = move(that._name);

  return *this;
}
