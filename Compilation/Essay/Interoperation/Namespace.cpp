#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Namespace.h"

using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//Namespace
//********************************************************************************************************************//
Namespace::Namespace()
{
  _native = nullptr;
}
Namespace::Namespace(CNamespace* native) :
  _native(native)
{
}

Namespace::~Namespace()
{
  delete _native;
}

Namespace::!Namespace()
{
  delete _native;
}

CNamespace* Namespace::GetNative()
{
  return _native;
}

bool Namespace::Empty()
{
  return _native->Empty();
}

size_t Namespace::Depth()
{
  return _native->Depth();
}

void Namespace::Add(String^ naming)
{
  wchar_t string[128] = {0};

  CLIString::CLIToNative(naming, string);

  _native->Add(string);
}

Namespace^ Namespace::GetParent()
{
  return gcnew Namespace(new CNamespace(_native->GetParent()));
}