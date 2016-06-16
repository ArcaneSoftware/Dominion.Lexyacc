//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "UnsupportedScalarOperationException.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CUnsupportedScalarOperationException
//***********************************************************************************************************************************************************************************//
wstring CUnsupportedScalarOperationException::MAKE_NOTE(EOperationType operationType, EScalarType scalarType)
{
  return CWStringTemplate(L"Operation [%x] does not support the scalar type [%x]").Format(COperationTypeEnum(operationType).ToString(),
                                                                                          CScalarTypeEnum(scalarType).ToString());
}

CUnsupportedScalarOperationException::CUnsupportedScalarOperationException()
{
}

CUnsupportedScalarOperationException::CUnsupportedScalarOperationException(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& that) :
  CException(that)
{
}

CUnsupportedScalarOperationException::CUnsupportedScalarOperationException(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION&& that) :
  CException(that)
{
}

CUnsupportedScalarOperationException::CUnsupportedScalarOperationException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CUnsupportedScalarOperationException::~CUnsupportedScalarOperationException()
{
}

C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& CUnsupportedScalarOperationException::operator=(C_UNSUPPORTED_SCALAR_OPERATION_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
