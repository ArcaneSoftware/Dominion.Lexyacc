//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CEmptyStringException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CEmptyStringException, C_EMPTY_STRING_EXCEPTION);
class LIBRARY_EXPORT CEmptyStringException : public CException
{
public:
  CLASS_INHERITOR(CException, CEmptyStringException);

  inline static wstring MAKE_NOTE();
  inline static void CHECK(WSTRING& string, C_TROUBLESPOT& troublespot) throw();

protected:
  CEmptyStringException();
public:
  CEmptyStringException(C_EMPTY_STRING_EXCEPTION& that);
  CEmptyStringException(C_EMPTY_STRING_EXCEPTION&& that);
  explicit CEmptyStringException(C_TROUBLESPOT& troublespot);
  virtual ~CEmptyStringException();

  C_EMPTY_STRING_EXCEPTION& operator=(C_EMPTY_STRING_EXCEPTION& that);
  C_EMPTY_STRING_EXCEPTION& operator=(C_EMPTY_STRING_EXCEPTION&& that);
};

END_DOMINION
