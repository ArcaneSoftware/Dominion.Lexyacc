//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Exception.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CExceedMemoryException
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CSubscriptOverflowException, C_SUBSCRIPT_OVERFLOW_EXCEPTION);
class LIBRARY_EXPORT CSubscriptOverflowException : public CException
{
public:
  CLASS_INHERITOR(CException, CSubscriptOverflowException);

  inline static wstring MAKE_NOTE(size_t subscript, size_t capacity);
  inline static void CHECK(size_t subscript, size_t capacity, C_TROUBLESPOT& troublespot) throw();

protected:
  CSubscriptOverflowException();
public:
  CSubscriptOverflowException(C_SUBSCRIPT_OVERFLOW_EXCEPTION& that);
  CSubscriptOverflowException(C_SUBSCRIPT_OVERFLOW_EXCEPTION&& that);
  explicit CSubscriptOverflowException(C_TROUBLESPOT& troublespot);
  virtual ~CSubscriptOverflowException();

  C_SUBSCRIPT_OVERFLOW_EXCEPTION& operator=(C_SUBSCRIPT_OVERFLOW_EXCEPTION& that);
};

END_DOMINION
