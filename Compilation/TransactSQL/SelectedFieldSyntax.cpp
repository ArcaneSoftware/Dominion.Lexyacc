//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "SelectedFieldSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CSelectedFieldSyntax
//*******************************************************************************************************************//
CSelectedFieldSyntax::CSelectedFieldSyntax() :
  CTransactSQLSyntax(ESyntaxType::SelectedField),
  _aliasID(NONE_ID),
  _all(false)
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _aliasID(that._aliasID),
  _all(that._all)
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _aliasID(move(that._aliasID)),
  _all(move(that._all))
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(int32_t liveLine, int32_t aliasID, bool all) :
  CTransactSQLSyntax(ESyntaxType::SelectedField, liveLine),
  _aliasID(aliasID),
  _all(all)
{
}

CSelectedFieldSyntax::~CSelectedFieldSyntax()
{
}

C_SELECTED_FIELD_SYNTAX& CSelectedFieldSyntax::operator=(C_SELECTED_FIELD_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _aliasID = that._aliasID;
  _all = that._all;
  return *this;
}
