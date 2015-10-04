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
  CEssaySyntax(ESyntaxType::Chain),
  _currentIndex(NONE_INDEX),
  _nextIndex(NONE_INDEX)
{
}

CChainSyntax::CChainSyntax(C_CHAIN_SYNTAX& that) :
  CEssaySyntax(that),
  _currentIndex(that._currentIndex),
  _nextIndex(that._nextIndex)
{
}

CChainSyntax::CChainSyntax(C_CHAIN_SYNTAX&& that) :
  CEssaySyntax(that),
  _currentIndex(move(that._currentIndex)),
  _nextIndex(move(that._nextIndex))
{
}

CChainSyntax::CChainSyntax(int32_t livingLine, int32_t currentIndex, int32_t nextIndex) :
  CEssaySyntax(ESyntaxType::Chain, livingLine),
  _currentIndex(currentIndex),
  _nextIndex(nextIndex)
{
}

CChainSyntax::~CChainSyntax()
{
}

C_CHAIN_SYNTAX& CChainSyntax::operator=(C_CHAIN_SYNTAX& that)
{
  CEssaySyntax::operator=(that);

  _currentIndex = that._currentIndex;
  _nextIndex = that._nextIndex;

  return *this;
}
