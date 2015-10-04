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
  _aliasIndex(NONE_INDEX),
  _all(false)
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _aliasIndex(that._aliasIndex),
  _all(that._all)
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(C_SELECTED_FIELD_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _aliasIndex(move(that._aliasIndex)),
  _all(move(that._all))
{
}

CSelectedFieldSyntax::CSelectedFieldSyntax(int32_t livingLine, int32_t aliasIndex, bool all) :
  CTransactSQLSyntax(ESyntaxType::SelectedField, livingLine),
  _aliasIndex(aliasIndex),
  _all(all)
{
}

CSelectedFieldSyntax::~CSelectedFieldSyntax()
{
}

C_SELECTED_FIELD_SYNTAX& CSelectedFieldSyntax::operator=(C_SELECTED_FIELD_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _aliasIndex = that._aliasIndex;
  _all = that._all;
  return *this;
}
