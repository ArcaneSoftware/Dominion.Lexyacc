//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "ScalarSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CScalarSyntax
//***********************************************************************************************************************************************************************************//
CScalarSyntax::CScalarSyntax() :
  CReducibleSyntax(ESyntaxType::Scalar)
{
}

CScalarSyntax::CScalarSyntax(C_SCALAR_SYNTAX& that) :
  CReducibleSyntax(that),
  _value(that._value)
{
}

CScalarSyntax::CScalarSyntax(C_SCALAR_SYNTAX&& that) :
  CReducibleSyntax(that),
  _value(move(that._value))
{
}

CScalarSyntax::CScalarSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, C_SCALAR& value) :
  CReducibleSyntax(ESyntaxType::Scalar, liveLine, liveNamespace),
  _value(value)
{
}

CScalarSyntax::~CScalarSyntax()
{
}

CScalar CScalarSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  return GetValue();
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
  CReducibleSyntax::operator=(that);

  _value = that._value;

  return *this;
}
