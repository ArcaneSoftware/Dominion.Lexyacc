//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CZeroException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CZeroException, C_ZERO_EXCEPTION);
class LIBRARY_EXPORT CZeroException : public CException
{
public:
  CLASS_INHERITOR(CException, CZeroException);

  inline static wstring MAKE_NOTE();
  inline static void CHECK(int32_t checked, C_TROUBLESPOT& troublespot) throw();

protected:
  CZeroException();
public:
  CZeroException(C_ZERO_EXCEPTION& that);
  CZeroException(C_ZERO_EXCEPTION&& that);
  CZeroException(C_TROUBLESPOT& troublespot);
  virtual ~CZeroException();

  C_ZERO_EXCEPTION& operator=(C_ZERO_EXCEPTION& that);
};

END_DOMINION
