//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "CaseSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CCaseSyntax
//*******************************************************************************************************************//
CCaseSyntax::CCaseSyntax() :
  CTransactSQLSyntax(ESyntaxType::Case),
  _conditionIndex(NONE_ID),
  _whenChainIndex(NONE_ID),
  _elseIndex(NONE_ID)
{
}

CCaseSyntax::CCaseSyntax(C_CASE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _conditionIndex(that._conditionIndex),
  _whenChainIndex(that._whenChainIndex),
  _elseIndex(that._elseIndex)
{
}

CCaseSyntax::CCaseSyntax(C_CASE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _conditionIndex(move(that._conditionIndex)),
  _whenChainIndex(move(that._whenChainIndex)),
  _elseIndex(move(that._elseIndex))
{
}

CCaseSyntax::CCaseSyntax(int32_t livingLine, int32_t conditionIndex, int32_t whenChainIndex, int32_t elseIndex) :
  CTransactSQLSyntax(ESyntaxType::Case, livingLine),
  _conditionIndex(conditionIndex),
  _whenChainIndex(whenChainIndex),
  _elseIndex(elseIndex)
{
}

CCaseSyntax::~CCaseSyntax()
{
}

C_CASE_SYNTAX& CCaseSyntax::operator=(C_CASE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _conditionIndex = that._conditionIndex;
  _whenChainIndex = that._whenChainIndex;
  _elseIndex = that._elseIndex;
  return *this;
}