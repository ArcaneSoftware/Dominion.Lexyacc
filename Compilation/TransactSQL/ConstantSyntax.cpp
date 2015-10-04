//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ConstantSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CConstantSyntax
//*******************************************************************************************************************//
CConstantSyntax::CConstantSyntax() :
  CTransactSQLSyntax(ESyntaxType::Constant)
{
}

CConstantSyntax::CConstantSyntax(C_CONSTANT_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _value(that._value)
{
}

CConstantSyntax::CConstantSyntax(C_CONSTANT_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _value(move(that._value))
{
}

CConstantSyntax::CConstantSyntax(int32_t livingLine, C_SCALAR value) :
  CTransactSQLSyntax(ESyntaxType::Constant, livingLine),
  _value(value)
{
}

CConstantSyntax::~CConstantSyntax()
{
}

bool CConstantSyntax::IsNil() const
{
  return _value.IsNil();
}

EScalarType CConstantSyntax::GetScalarType() const
{
  return _value.GetScalarType();
}

C_CONSTANT_SYNTAX& CConstantSyntax::operator=(C_CONSTANT_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _value = that._value;
  return *this;
}
