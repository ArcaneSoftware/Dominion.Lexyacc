//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ZeroException.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CZeroException
//*******************************************************************************************************************//
wstring CZeroException::MAKE_NOTE()
{
  return L"0 is a forbidden value;";
}

void CZeroException::CHECK(int32_t checked, C_TROUBLESPOT& troublespot) throw()
{
  if (checked == 0)
  {
    throw CZeroException(CTroublespot(troublespot).AppendNote(MAKE_NOTE()));
  }
}

CZeroException::CZeroException()
{
}

CZeroException::CZeroException(C_ZERO_EXCEPTION& that) :
  CException(that)
{
}

CZeroException::CZeroException(C_ZERO_EXCEPTION&& that) :
  CException(that)
{
}

CZeroException::CZeroException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CZeroException::~CZeroException()
{
}

C_ZERO_EXCEPTION& CZeroException::operator=(C_ZERO_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
