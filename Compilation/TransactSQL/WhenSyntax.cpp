//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "WhenSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CWhenSyntax
//*******************************************************************************************************************//
CWhenSyntax::CWhenSyntax() :
  CTransactSQLSyntax(ESyntaxType::When),
  _conditionIndex(NONE_INDEX),
  _thenIndex(NONE_INDEX)
{
}

CWhenSyntax::CWhenSyntax(C_WHEN_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _conditionIndex(that._conditionIndex),
  _thenIndex(that._thenIndex)
{
}

CWhenSyntax::CWhenSyntax(C_WHEN_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _conditionIndex(move(that._conditionIndex)),
  _thenIndex(move(that._thenIndex))
{
}

CWhenSyntax::CWhenSyntax(int32_t livingLine, int32_t conditionIndex, int32_t whenIndex) :
  CTransactSQLSyntax(ESyntaxType::When, livingLine),
  _conditionIndex(conditionIndex),
  _thenIndex(whenIndex)
{
}

CWhenSyntax::~CWhenSyntax()
{
}

C_WHEN_SYNTAX& CWhenSyntax::operator=(C_WHEN_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _conditionIndex = that._conditionIndex;
  _thenIndex = that._thenIndex;
  return *this;
}
