//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "FunctionSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CFunctionSyntax
//*******************************************************************************************************************//
CFunctionSyntax::CFunctionSyntax() :
  CTransactSQLSyntax(ESyntaxType::Function),
  _argumentChainIndex(NONE_INDEX)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _functionName(that._functionName),
  _argumentChainIndex(that._argumentChainIndex)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _functionName(move(that._functionName)),
  _argumentChainIndex(move(that._argumentChainIndex))
{
}

CFunctionSyntax::CFunctionSyntax(int32_t livingLine, WSTRING& functionName, int32_t argumentChainIndex) :
  CTransactSQLSyntax(ESyntaxType::Function, livingLine),
  _functionName(functionName),
  _argumentChainIndex(argumentChainIndex)
{
}

CFunctionSyntax::~CFunctionSyntax()
{
}

C_FUNCTION_SYNTAX& CFunctionSyntax::operator=(C_FUNCTION_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _functionName = that._functionName;
  _argumentChainIndex = that._argumentChainIndex;
  return *this;
}
