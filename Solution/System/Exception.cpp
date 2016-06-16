//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Exception.h"
#include "StringTemplate.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CException
//***********************************************************************************************************************************************************************************//
CException::CException()
{
}

CException::CException(C_EXCEPTION& that) :
  CObject(that),
  _caseStack(that._caseStack)
{
}

CException::CException(C_EXCEPTION&& that) :
  CObject(that),
  _caseStack(move(that._caseStack))
{
}

CException::CException(C_TROUBLESPOT& troublespot)
{
  Append(MakeCase(troublespot));
}

CException::~CException()
{
}

void CException::Append(C_CASE& a_case)
{
  _caseStack.push_back(a_case);
}

wstring CException::ToString() const
{
  wstring string;

  for (int i = 0; i < _caseStack.size(); i++)
  {
    string += _caseStack[i].ToString();
    string += L"\n";
  }

  return move(string);
}

CCase CException::MakeCase(C_TROUBLESPOT& troublespot) const
{
  return CCase(troublespot.GetScene(),
               CWStringTemplate(L"Encounter Exception %x").Format(troublespot.GetUserMessage()),
               troublespot.GetArguments(),
               troublespot.GetNotes());
}

C_CASE& CException::LatestRecord() const
{
  return _caseStack[_caseStack.size() - 1];
}

size_t CException::Count() const
{
  return _caseStack.size();
}

C_EXCEPTION& CException::operator=(C_EXCEPTION& that)
{
  CObject::Clone(that);

  _caseStack = that._caseStack;

  return *this;
}
