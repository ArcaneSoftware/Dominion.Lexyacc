//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "InvokingException.h"
#include "StringTemplate.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CInvokingException
//*******************************************************************************************************************//
wstring CInvokingException::MAKE_NOTE(WSTRING& name)
{
  return CWStringTemplate(L"Fail to invoke:[%x];").Format(name);
}

CInvokingException::CInvokingException()
{
}

CInvokingException::CInvokingException(C_INVOKE_METHOD_EXCEPTION& that) :
  CException(that)
{
}

CInvokingException::CInvokingException(C_INVOKE_METHOD_EXCEPTION&& that) :
  CException(that)
{
}

CInvokingException::CInvokingException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CInvokingException::~CInvokingException()
{
}

C_INVOKE_METHOD_EXCEPTION& CInvokingException::operator=(C_INVOKE_METHOD_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
