//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ScalarSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CScalarSyntax
//*******************************************************************************************************************//
CScalarSyntax::CScalarSyntax() :
  CBaseSyntax(ESyntaxType::Scalar)
{
}

CScalarSyntax::CScalarSyntax(C_SCALAR_SYNTAX& that) :
  CBaseSyntax(that),
  _value(that._value)
{
}

CScalarSyntax::CScalarSyntax(C_SCALAR_SYNTAX&& that) :
  CBaseSyntax(that),
  _value(move(that._value))
{
}

CScalarSyntax::CScalarSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, C_SCALAR& value) :
  CBaseSyntax(ESyntaxType::Scalar, liveLine, liveNamespace),
  _value(value)
{
}

CScalarSyntax::~CScalarSyntax()
{
}

bool CScalarSyntax::IsNil() const
{
  return _value.IsNil();
}

EScalarType CScalarSyntax::GetScalarType() const
{
  return _value.GetScalarType();
}

C_SCALAR_SYNTAX& CScalarSyntax::operator=(C_SCALAR_SYNTAX& that)
{
  CBaseSyntax::operator=(that);

  _value = that._value;

  return *this;
}
