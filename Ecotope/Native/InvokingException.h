//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Ecotope/Native/Exception.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CInvokingException
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CInvokingException, C_INVOKE_METHOD_EXCEPTION);
class LIBRARY_EXPORT CInvokingException : public CException
{
public:
  CLASS_INHERITOR(CException, CInvokingException);

  inline static wstring MAKE_NOTE(WSTRING& name);

protected:
  CInvokingException();
public:
  CInvokingException(C_INVOKE_METHOD_EXCEPTION& that);
  CInvokingException(C_INVOKE_METHOD_EXCEPTION&& that);
  explicit CInvokingException(C_TROUBLESPOT& troublespot);
  virtual ~CInvokingException();

  C_INVOKE_METHOD_EXCEPTION& operator=(C_INVOKE_METHOD_EXCEPTION& that);
};

END_DOMINION
