//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "SubscriptOverflowException.h"
#include "StringTemplate.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CSubscriptOverflowException
//***********************************************************************************************************************************************************************************//
wstring CSubscriptOverflowException::MAKE_NOTE(size_t subscript, size_t capacity)
{
  return CWStringTemplate(L"Subscript:[%x] exceeds capacity:[%x];").Format(subscript, capacity);
}

void CSubscriptOverflowException::CHECK(size_t subscript, size_t capacity, C_TROUBLESPOT& troublespot) throw()
{
  if (subscript >= capacity)
  {
    throw CSubscriptOverflowException(CTroublespot(troublespot).AppendNote(MAKE_NOTE(subscript, capacity)));
  }
}

CSubscriptOverflowException::CSubscriptOverflowException()
{
}

CSubscriptOverflowException::CSubscriptOverflowException(C_SUBSCRIPT_OVERFLOW_EXCEPTION& that) :
  CException(that)
{
}

CSubscriptOverflowException::CSubscriptOverflowException(C_SUBSCRIPT_OVERFLOW_EXCEPTION&& that) :
  CException(that)
{
}

CSubscriptOverflowException::CSubscriptOverflowException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CSubscriptOverflowException::~CSubscriptOverflowException()
{
}

C_SUBSCRIPT_OVERFLOW_EXCEPTION& CSubscriptOverflowException::operator=(C_SUBSCRIPT_OVERFLOW_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}

C_SUBSCRIPT_OVERFLOW_EXCEPTION& CSubscriptOverflowException::operator=(C_SUBSCRIPT_OVERFLOW_EXCEPTION&& that)
{
  CException::operator=(that);

  return *this;
}
