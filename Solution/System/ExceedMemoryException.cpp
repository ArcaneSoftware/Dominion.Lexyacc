//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "ExceedMemoryException.h"
#include "StringTemplate.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CExceedMemoryException
//***********************************************************************************************************************************************************************************//
wstring CExceedMemoryException::MAKE_NOTE(size_t input_size, size_t allowable_size)
{
  return CWStringTemplate(L"Input size:[%x] exceeds allowable size:[%x];").Format(input_size, allowable_size);
}

void CExceedMemoryException::CHECK(size_t input_size, size_t allowable_size, C_TROUBLESPOT& troublespot) throw()
{
  if (input_size > allowable_size)
  {
    throw CExceedMemoryException(CTroublespot(troublespot).AppendNote(MAKE_NOTE(input_size, allowable_size)));
  }
}

CExceedMemoryException::CExceedMemoryException()
{
}

CExceedMemoryException::CExceedMemoryException(C_EXCEED_MEMORY_EXCEPTION& that) :
  CException(that)
{
}

CExceedMemoryException::CExceedMemoryException(C_EXCEED_MEMORY_EXCEPTION&& that) :
  CException(that)
{
}

CExceedMemoryException::CExceedMemoryException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CExceedMemoryException::~CExceedMemoryException()
{
}

C_EXCEED_MEMORY_EXCEPTION& CExceedMemoryException::operator=(C_EXCEED_MEMORY_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
