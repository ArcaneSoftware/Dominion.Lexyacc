//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CExceedMemoryException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CExceedMemoryException, C_EXCEED_MEMORY_EXCEPTION);
class LIBRARY_EXPORT CExceedMemoryException : public CException
{
public:
  CLASS_INHERITOR(CException, CExceedMemoryException);

  inline static wstring MAKE_NOTE(size_t input_size, size_t allowable_size);
  inline static void CHECK(size_t input_size, size_t allowable_size, C_TROUBLESPOT& troublespot) throw();

protected:
  CExceedMemoryException();
public:
  CExceedMemoryException(C_EXCEED_MEMORY_EXCEPTION& that);
  CExceedMemoryException(C_EXCEED_MEMORY_EXCEPTION&& that);
  explicit CExceedMemoryException(C_TROUBLESPOT& troublespot);
  virtual ~CExceedMemoryException();

  C_EXCEED_MEMORY_EXCEPTION& operator=(C_EXCEED_MEMORY_EXCEPTION& that);
};

END_DOMINION
