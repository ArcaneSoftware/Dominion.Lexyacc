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
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::Variable)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _name(that._name)
{
}

CVariableSyntax::CVariableSyntax(C_VARIABLE_SYNTAX&& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _name(move(that._name))
{
}

CVariableSyntax::CVariableSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name) :
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::Variable, liveLine, liveNamespace),
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

C_VARIABLE_SYNTAX& CVariableSyntax::operator=(C_VARIABLE_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  _name = that._name;

  return *this;
}
