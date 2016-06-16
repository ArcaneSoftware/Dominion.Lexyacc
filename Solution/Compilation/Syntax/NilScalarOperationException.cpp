//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "NilScalarOperationException.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CNilScalarOperationException
//***********************************************************************************************************************************************************************************//
inline wstring CNilScalarOperationException::MAKE_NOTE()
{
  return L"Sclar is a nil;";
}

inline void CNilScalarOperationException::CHECK(C_SCALAR& scalar, C_TROUBLESPOT & troublespot) throw()
{
  if (scalar.GetScalarType() == EScalarType::Nil)
  {
    throw CNilScalarOperationException(CTroublespot(troublespot).AppendNote(MAKE_NOTE()));
  }
}

CNilScalarOperationException::CNilScalarOperationException()
{
}

CNilScalarOperationException::CNilScalarOperationException(C_NIL_SCALAR_OPERATION_EXCEPTION& that) :
  CException(that)
{
}

CNilScalarOperationException::CNilScalarOperationException(C_NIL_SCALAR_OPERATION_EXCEPTION&& that) :
  CException(that)
{
}

CNilScalarOperationException::CNilScalarOperationException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CNilScalarOperationException::~CNilScalarOperationException()
{
}

C_NIL_SCALAR_OPERATION_EXCEPTION& CNilScalarOperationException::operator=(C_NIL_SCALAR_OPERATION_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
