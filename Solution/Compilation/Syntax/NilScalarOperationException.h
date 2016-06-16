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
//CNilScalarOperationException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CNilScalarOperationException, C_NIL_SCALAR_OPERATION_EXCEPTION);
class LIBRARY_EXPORT CNilScalarOperationException : public CException
{
public:
  CLASS_INHERITOR(CException, CNilScalarOperationException);

  inline static wstring MAKE_NOTE();
  inline static void CHECK(C_SCALAR& scalar, C_TROUBLESPOT& troublespot) throw();

protected:
  CNilScalarOperationException();
public:
  CNilScalarOperationException(C_NIL_SCALAR_OPERATION_EXCEPTION& that);
  CNilScalarOperationException(C_NIL_SCALAR_OPERATION_EXCEPTION&& that);
  explicit CNilScalarOperationException(C_TROUBLESPOT& troublespot);
  virtual ~CNilScalarOperationException();

  C_NIL_SCALAR_OPERATION_EXCEPTION& operator=(C_NIL_SCALAR_OPERATION_EXCEPTION& that);
};

END_DOMINION_COMPILATION_SYNTAX
