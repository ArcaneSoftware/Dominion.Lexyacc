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
  _conditionID(NONE_ID),
  _whenChainID(NONE_ID),
  _elseID(NONE_ID)
{
}

CCaseSyntax::CCaseSyntax(C_CASE_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _conditionID(that._conditionID),
  _whenChainID(that._whenChainID),
  _elseID(that._elseID)
{
}

CCaseSyntax::CCaseSyntax(C_CASE_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _conditionID(move(that._conditionID)),
  _whenChainID(move(that._whenChainID)),
  _elseID(move(that._elseID))
{
}

CCaseSyntax::CCaseSyntax(int32_t livingLine, int32_t conditionID, int32_t whenChainID, int32_t elseID) :
  CTransactSQLSyntax(ESyntaxType::Case, livingLine),
  _conditionID(conditionID),
  _whenChainID(whenChainID),
  _elseID(elseID)
{
}

CCaseSyntax::~CCaseSyntax()
{
}

C_CASE_SYNTAX& CCaseSyntax::operator=(C_CASE_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _conditionID = that._conditionID;
  _whenChainID = that._whenChainID;
  _elseID = that._elseID;
  return *this;
}