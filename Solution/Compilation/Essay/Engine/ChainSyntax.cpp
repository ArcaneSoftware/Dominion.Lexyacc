//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ChainSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CChainSyntax
//*******************************************************************************************************************//
CChainSyntax::CChainSyntax() :
  CBaseSyntax(ESyntaxType::Chain),
  _currentID(NONE_ID),
  _nextID(NONE_ID)
{
}

CChainSyntax::CChainSyntax(C_CHAIN_SYNTAX& that) :
  CBaseSyntax(that),
  _currentID(that._currentID),
  _nextID(that._nextID)
{
}

CChainSyntax::CChainSyntax(C_CHAIN_SYNTAX&& that) :
  CBaseSyntax(that),
  _currentID(move(that._currentID)),
  _nextID(move(that._nextID))
{
}

CChainSyntax::CChainSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t currentID, int32_t nextID) :
  CBaseSyntax(ESyntaxType::Chain, liveLine, liveNamespace),
  _currentID(currentID),
  _nextID(nextID)
{
}

CChainSyntax::~CChainSyntax()
{
}

C_CHAIN_SYNTAX& CChainSyntax::operator=(C_CHAIN_SYNTAX& that)
{
  CBaseSyntax::operator=(that);

  _currentID = that._currentID;
  _nextID = that._nextID;

  return *this;
}
