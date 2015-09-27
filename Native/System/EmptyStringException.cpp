//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "EmptyStringException.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CEmptyStringException
//*******************************************************************************************************************//
wstring CEmptyStringException::MAKE_NOTE()
{
  return L"String is empty;";
}

void CEmptyStringException::CHECK(WSTRING& string, C_TROUBLESPOT& troublespot) throw()
{
  if (string.empty())
  {
    throw CEmptyStringException(CTroublespot(troublespot).AppendNote(MAKE_NOTE()));
  }
}

CEmptyStringException::CEmptyStringException()
{
}

CEmptyStringException::CEmptyStringException(C_EMPTY_STRING_EXCEPTION& that) :
  CException(that)
{
}

CEmptyStringException::CEmptyStringException(C_EMPTY_STRING_EXCEPTION&& that) :
  CException(that)
{
}

CEmptyStringException::CEmptyStringException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CEmptyStringException::~CEmptyStringException()
{
}

C_EMPTY_STRING_EXCEPTION& CEmptyStringException::operator=(C_EMPTY_STRING_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
