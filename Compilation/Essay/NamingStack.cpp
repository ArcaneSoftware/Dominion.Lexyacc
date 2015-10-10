//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "NamingStack.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CNamingStack
//*******************************************************************************************************************//
CNamingStack::CNamingStack()
{
}

CNamingStack::CNamingStack(C_NAMING_STACK& that) :
  CStack<wstring>(that)
{
}

CNamingStack::CNamingStack(C_NAMING_STACK&& that) :
  CStack<wstring>(that)
{
}

CNamingStack::~CNamingStack()
{
}

CNamespace CNamingStack::GetNamespace() const
{
  return move(CNamespace(_core));
}

C_NAMING_STACK& CNamingStack::operator=(C_NAMING_STACK& that)
{
  CStack<wstring>::operator=(that);

  return *this;
}