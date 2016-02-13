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
  CEssaySyntax(ESyntaxType::Function),
  _argumentChainID(NONE_ID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX& that) :
  CEssaySyntax(that),
  _name(that._name),
  _argumentChainID(that._argumentChainID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX&& that) :
  CEssaySyntax(that),
  _name(move(that._name)),
  _argumentChainID(move(that._argumentChainID))
{
}

CFunctionSyntax::CFunctionSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t argumentChainID) :
  CEssaySyntax(ESyntaxType::Function, liveLine, liveNamespace),
  _name(name),
  _argumentChainID(argumentChainID)
{
}

CFunctionSyntax::~CFunctionSyntax()
{
}

C_FUNCTION_SYNTAX& CFunctionSyntax::operator=(C_FUNCTION_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _name = that._name;
  _argumentChainID = that._argumentChainID;

  return *this;
}
