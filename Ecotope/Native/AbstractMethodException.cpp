//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "AbstractMethodException.h"
#include "StringTemplate.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CAbstractMethodException
//*******************************************************************************************************************//
wstring CAbstractMethodException::MAKE_NOTE(WSTRING& method)
{
  return CWStringTemplate(L"Call abstract method:[%x];").Format(method);
}

CAbstractMethodException::CAbstractMethodException()
{
}

CAbstractMethodException::CAbstractMethodException(C_ABSTRACT_METHOD_EXCEPTION& that) :
  CException(that)
{
}

CAbstractMethodException::CAbstractMethodException(C_ABSTRACT_METHOD_EXCEPTION&& that) :
  CException(that)
{
}

CAbstractMethodException::CAbstractMethodException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CAbstractMethodException::~CAbstractMethodException()
{
}

C_ABSTRACT_METHOD_EXCEPTION& CAbstractMethodException::operator=(C_ABSTRACT_METHOD_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
