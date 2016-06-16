//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "UnmatchedScalarTypeException.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CUnmatchedScalarTypeException
//***********************************************************************************************************************************************************************************//
wstring CUnmatchedScalarTypeException::MAKE_NOTE(EOperationType operationType, EScalarType leftType, EScalarType rightType)
{
  return CWStringTemplate(L"RIGHT scalar type [%x] unmatched LEFT scalar type [%x] while doing ['%x'] operator").Format(CScalarTypeEnum(rightType).ToString(),
                                                                                                                        CScalarTypeEnum(leftType).ToString(),
                                                                                                                        COperationTypeEnum(operationType).ToString());
}

CUnmatchedScalarTypeException::CUnmatchedScalarTypeException()
{
}

CUnmatchedScalarTypeException::CUnmatchedScalarTypeException(C_UNMATCHED_SCALAR_TYPE_EXCEPTION& that) :
  CException(that)
{
}

CUnmatchedScalarTypeException::CUnmatchedScalarTypeException(C_UNMATCHED_SCALAR_TYPE_EXCEPTION&& that) :
  CException(that)
{
}

CUnmatchedScalarTypeException::CUnmatchedScalarTypeException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CUnmatchedScalarTypeException::~CUnmatchedScalarTypeException()
{
}

C_UNMATCHED_SCALAR_TYPE_EXCEPTION& CUnmatchedScalarTypeException::operator=(C_UNMATCHED_SCALAR_TYPE_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
