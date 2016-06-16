//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Dependence.h"
#include "Compilation/Syntax/Scalar.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//CZeroDivisorScalarExecption
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CZeroDivisorScalarExecption, C_ZERO_DIVISOR_SCALAR_EXECPTION);
class LIBRARY_EXPORT CZeroDivisorScalarExecption : public CException
{
public:
  CLASS_INHERITOR(CException, CZeroDivisorScalarExecption);

  inline static wstring MAKE_NOTE();
  inline static void CHECK(C_SCALAR& scalar, C_TROUBLESPOT& troublespot) throw();

protected:
  CZeroDivisorScalarExecption();
public:
  CZeroDivisorScalarExecption(C_ZERO_DIVISOR_SCALAR_EXECPTION& that);
  CZeroDivisorScalarExecption(C_ZERO_DIVISOR_SCALAR_EXECPTION&& that);
  explicit CZeroDivisorScalarExecption(C_TROUBLESPOT& troublespot);
  virtual ~CZeroDivisorScalarExecption();

  C_ZERO_DIVISOR_SCALAR_EXECPTION& operator=(C_ZERO_DIVISOR_SCALAR_EXECPTION& that);
};

END_DOMINION_COMPILATION_SYNTAX
