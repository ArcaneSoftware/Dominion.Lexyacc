//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "TopSyntax.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CTopSyntax
//*******************************************************************************************************************//
CTopSyntax::CTopSyntax() :
  CTransactSQLSyntax(ESyntaxType::Top),
  _quantity(0),
  _percent(false)
{
}

CTopSyntax::CTopSyntax(C_TOP_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _quantity(that._quantity),
  _percent(that._percent)
{
}

CTopSyntax::CTopSyntax(C_TOP_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _quantity(move(that._quantity)),
  _percent(move(that._percent))
{
}

CTopSyntax::CTopSyntax(int32_t livingLine, int32_t quantity, bool percent) :
  CTransactSQLSyntax(ESyntaxType::Top, livingLine),
  _quantity(quantity),
  _percent(percent)
{
}

CTopSyntax::~CTopSyntax()
{
}

C_TOP_SYNTAX& CTopSyntax::operator=(C_TOP_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _quantity = that._quantity;
  _percent = that._percent;
  return *this;
}
