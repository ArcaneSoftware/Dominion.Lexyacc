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
//CUnmatchedScalarTypeException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CUnmatchedScalarTypeException, C_UNMATCHED_SCALAR_TYPE_EXCEPTION);
class LIBRARY_EXPORT CUnmatchedScalarTypeException : public CException
{
public:
  CLASS_INHERITOR(CException, CUnmatchedScalarTypeException);

  inline static wstring MAKE_NOTE(EOperationType operationType, EScalarType leftType, EScalarType rightType);

protected:
  CUnmatchedScalarTypeException();
public:
  CUnmatchedScalarTypeException(C_UNMATCHED_SCALAR_TYPE_EXCEPTION& that);
  CUnmatchedScalarTypeException(C_UNMATCHED_SCALAR_TYPE_EXCEPTION&& that);
  explicit CUnmatchedScalarTypeException(C_TROUBLESPOT& troublespot);
  virtual ~CUnmatchedScalarTypeException();

  C_UNMATCHED_SCALAR_TYPE_EXCEPTION& operator=(C_UNMATCHED_SCALAR_TYPE_EXCEPTION& that);
};

END_DOMINION_COMPILATION_SYNTAX
