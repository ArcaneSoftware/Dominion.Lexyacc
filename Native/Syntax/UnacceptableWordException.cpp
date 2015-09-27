//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "UnacceptableWordException.h"

using namespace Dominion;
using namespace Dominion::Syntax;
//*******************************************************************************************************************//
//CUnacceptableWordException
//*******************************************************************************************************************//
wstring CUnacceptableWordException::MAKE_NOTE(WSTRING& unacceptable, WSTRING& context)
{
  return CWStringTemplate(L"Unacceptable word:[%x] after the text:[%x];").Format(unacceptable, context);
}

CUnacceptableWordException::CUnacceptableWordException()
{
}

CUnacceptableWordException::CUnacceptableWordException(C_UNACCEPTABLE_WORD_EXCEPTION& that) :
  CException(that)
{
}

CUnacceptableWordException::CUnacceptableWordException(C_UNACCEPTABLE_WORD_EXCEPTION&& that) :
  CException(that)
{
}

CUnacceptableWordException::CUnacceptableWordException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CUnacceptableWordException::~CUnacceptableWordException()
{
}

C_UNACCEPTABLE_WORD_EXCEPTION& CUnacceptableWordException::operator=(C_UNACCEPTABLE_WORD_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
