//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "SpaceStack.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CSpaceStack
//*******************************************************************************************************************//
CSpaceStack::CSpaceStack()
{
}

CSpaceStack::CSpaceStack(C_SPACE_STACK& that) :
  CStack<wstring>(that)
{
}

CSpaceStack::CSpaceStack(C_SPACE_STACK&& that) :
  CStack<wstring>(that)
{
}

CSpaceStack::~CSpaceStack()
{
}

CNamespace CSpaceStack::GetNamespace() const
{
  return CNamespace(_core);
}

C_SPACE_STACK& CSpaceStack::operator=(C_SPACE_STACK& that)
{
  CStack<wstring>::operator=(that);

  return *this;
}