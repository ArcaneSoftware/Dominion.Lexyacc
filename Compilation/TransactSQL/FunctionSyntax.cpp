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
  _argumentChainID(NONE_ID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _functionName(that._functionName),
  _argumentChainID(that._argumentChainID)
{
}

CFunctionSyntax::CFunctionSyntax(C_FUNCTION_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _functionName(move(that._functionName)),
  _argumentChainID(move(that._argumentChainID))
{
}

CFunctionSyntax::CFunctionSyntax(int32_t liveLine, WSTRING& functionName, int32_t argumentChainID) :
  CTransactSQLSyntax(ESyntaxType::Function, liveLine),
  _functionName(functionName),
  _argumentChainID(argumentChainID)
{
}

CFunctionSyntax::~CFunctionSyntax()
{
}

C_FUNCTION_SYNTAX& CFunctionSyntax::operator=(C_FUNCTION_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _functionName = that._functionName;
  _argumentChainID = that._argumentChainID;
  return *this;
}
