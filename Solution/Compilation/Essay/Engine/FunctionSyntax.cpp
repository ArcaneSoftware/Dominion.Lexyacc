//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "FunctionSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CFunctionSyntax
//*******************************************************************************************************************//
CFunctionSyntax::CFunctionSyntax() :
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::Function),
  _argumentChainID(NONE_ID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _name(that._name),
  _argumentChainID(that._argumentChainID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX&& that) :
  CAbstractSyntaxTree<ESyntaxType>(that),
  _name(move(that._name)),
  _argumentChainID(move(that._argumentChainID))
{
}

CFunctionSyntax::CFunctionSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t argumentChainID) :
  CAbstractSyntaxTree<ESyntaxType>(ESyntaxType::Function, liveLine, liveNamespace),
  _name(name),
  _argumentChainID(argumentChainID)
{
}

CFunctionSyntax::~CFunctionSyntax()
{
}

CIdentifier CFunctionSyntax::GetIdentifier() const
{
  return CIdentifier(GetLiveNamespace(), _name);
}

C_FUNCTION_SYNTAX& CFunctionSyntax::operator=(C_FUNCTION_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  _name = that._name;
  _argumentChainID = that._argumentChainID;

  return *this;
}
