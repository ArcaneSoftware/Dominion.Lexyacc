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
  _conditionID(NONE_ID),
  _thenID(NONE_ID)
{
}

CWhenSyntax::CWhenSyntax(C_WHEN_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _conditionID(that._conditionID),
  _thenID(that._thenID)
{
}

CWhenSyntax::CWhenSyntax(C_WHEN_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _conditionID(move(that._conditionID)),
  _thenID(move(that._thenID))
{
}

CWhenSyntax::CWhenSyntax(int32_t liveLine, int32_t conditionID, int32_t whenID) :
  CTransactSQLSyntax(ESyntaxType::When, liveLine),
  _conditionID(conditionID),
  _thenID(whenID)
{
}

CWhenSyntax::~CWhenSyntax()
{
}

C_WHEN_SYNTAX& CWhenSyntax::operator=(C_WHEN_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _conditionID = that._conditionID;
  _thenID = that._thenID;
  return *this;
}
