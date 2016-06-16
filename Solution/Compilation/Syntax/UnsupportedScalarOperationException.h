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
//CUnsupportedScalarOperationException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CUnsupportedScalarOperationException, C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION);
class LIBRARY_EXPORT CUnsupportedScalarOperationException : public CException
{
public:
  CLASS_INHERITOR(CException, CUnsupportedScalarOperationException);

  inline static wstring MAKE_NOTE(EOperationType operationType, EScalarType scalarType);

protected:
  CUnsupportedScalarOperationException();
public:
  CUnsupportedScalarOperationException(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& that);
  CUnsupportedScalarOperationException(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION&& that);
  explicit CUnsupportedScalarOperationException(C_TROUBLESPOT& troublespot);
  virtual ~CUnsupportedScalarOperationException();

  C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& operator=(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& that);
};

END_DOMINION_COMPILATION_SYNTAX
