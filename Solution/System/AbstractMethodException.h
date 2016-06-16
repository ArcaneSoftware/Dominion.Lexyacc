//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Exception.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CAbstractMethodException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CAbstractMethodException, C_ABSTRACT_METHOD_EXCEPTION);
class LIBRARY_EXPORT CAbstractMethodException : public CException
{
public:
  CLASS_INHERITOR(CException, CAbstractMethodException);

  inline static wstring MAKE_NOTE(WSTRING& method);

protected:
  CAbstractMethodException();
public:
  CAbstractMethodException(C_ABSTRACT_METHOD_EXCEPTION& that);
  CAbstractMethodException(C_ABSTRACT_METHOD_EXCEPTION&& that);
  explicit CAbstractMethodException(C_TROUBLESPOT& troublespot);
  explicit CAbstractMethodException(C_SCENE& scene);
  virtual ~CAbstractMethodException();

  C_ABSTRACT_METHOD_EXCEPTION& operator=(C_ABSTRACT_METHOD_EXCEPTION& that);
};

END_DOMINION
