//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "ZeroDivisorScalarExecption.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CZeroDivisorScalarExecption
//***********************************************************************************************************************************************************************************//
wstring CZeroDivisorScalarExecption::MAKE_NOTE()
{
  return L"Dividor is 0.";
}

inline void CZeroDivisorScalarExecption::CHECK(C_SCALAR& scalar, C_TROUBLESPOT & troublespot) throw()
{
  if (scalar.GetScalarType() == EScalarType::Numeric)
  {
    if (scalar.GetNumericValue() == 0)
    {
      throw CZeroDivisorScalarExecption(CTroublespot(troublespot).AppendNote(MAKE_NOTE()));
    }
  }
}
CZeroDivisorScalarExecption::CZeroDivisorScalarExecption()
{
}

CZeroDivisorScalarExecption::CZeroDivisorScalarExecption(C_ZERO_DIVISOR_SCALAR_EXECPTION& that) :
  CException(that)
{
}

CZeroDivisorScalarExecption::CZeroDivisorScalarExecption(C_ZERO_DIVISOR_SCALAR_EXECPTION&& that) :
  CException(that)
{
}

CZeroDivisorScalarExecption::CZeroDivisorScalarExecption(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CZeroDivisorScalarExecption::~CZeroDivisorScalarExecption()
{
}

C_ZERO_DIVISOR_SCALAR_EXECPTION& CZeroDivisorScalarExecption::operator=(C_ZERO_DIVISOR_SCALAR_EXECPTION& that)
{
  CException::operator=(that);

  return *this;
}
