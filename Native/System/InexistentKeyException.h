//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Exception.h"
#include "Dominion/Native/System/StringTemplate.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CInexistentKeyException
//
//*****************************************************************************************************************//
template<typename TKey, typename TValue>
class LIBRARY_EXPORT CInexistentKeyException : public CException
{
public:
  TYPEDEF(CInexistentKeyException<TKey _COMMA TValue>, Class, CLASS);
  CLASS_INHERITOR(CException, Class);

  inline static wstring MAKE_NOTE(const TKey& key)
  {
    return CWStringTemplate(L"Fail to found Key:[%x];").Format(key);
  }

  inline static void CHECK(const TKey& key, const map<TKey, TValue>& container, C_TROUBLESPOT& troublespot) throw()
  {
    if (container.find(key) == container.end())
    {
      throw Class(C_TROUBLESPOT(troublespot).AppendNote(MAKE_NOTE(key)));
    }
  }

protected:
  CInexistentKeyException()
  {
  }

public:
  CInexistentKeyException(CLASS& that) : CException(that)
  {
  }

  CInexistentKeyException(CLASS&& that) : CException(that)
  {
  }

  explicit CInexistentKeyException(C_TROUBLESPOT& troublespot) : CException(troublespot)
  {
  }

  virtual ~CInexistentKeyException()
  {
  }

  CLASS& operator=(CLASS& that)
  {
    CException::operator=(that);

    return *this;
  }
};

END_DOMINION
