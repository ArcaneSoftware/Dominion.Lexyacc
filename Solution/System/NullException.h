//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CNullException
//
//***********************************************************************************************************************************************************************************//
template<typename TSubject, ENull _TYPE = ENull::Pointer>
class LIBRARY_EXPORT CNullException : public CException
{
public:
  TYPEDEF(CNullException<TSubject _COMMA _TYPE>, Class, CLASS);
  CLASS_INHERITOR(CException, Class);

  inline static wstring MAKE_NOTE()
  {
    return _TYPE == ENull::Pointer ? L"It is a null pointer" : L"It is a null functor";
  }

  inline static TSubject CHECK(const TSubject& subject, C_TROUBLESPOT& troublespot) throw()
  {
    if (nullptr == subject)
    {
      throw CNullException(CTroublespot(troublespot).AppendNote(MAKE_NOTE()));
    }

    return subject;
  }

protected:
  CNullException()
  {
  }
public:
  CNullException(CLASS& that) : CException(that)
  {
  }

  CNullException(CLASS&& that) : CException(that)
  {
  }

  explicit CNullException(C_TROUBLESPOT& troublespot) : CException(troublespot)
  {
  }

  virtual ~CNullException()
  {
  }

  CLASS& operator=(CLASS& that)
  {
    CException::operator=(that);

    return *this;
  }

  CLASS& operator=(CLASS&& that)
  {
    CException::operator=(that);

    return *this;
  }
};

END_DOMINION
