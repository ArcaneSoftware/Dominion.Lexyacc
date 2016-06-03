//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "CaughtException.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CCaughtException
//*******************************************************************************************************************//
void CCaughtException::THROW(C_SCENE& scene, C_EXCEPTION& cause, WSTRING& notes)
{
  throw CCaughtException(scene, cause, notes);
}

CCaughtException::CCaughtException()
{
}

CCaughtException::CCaughtException(C_SCENE& scene, C_EXCEPTION& cause, WSTRING& notes)
{
  SetCaseStack(cause.GetCaseStack());

  Append(CCase(scene, L"Catch", NSTR, notes));
}

C_CAUGHT_EXCEPTION& CCaughtException::operator=(C_CAUGHT_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
