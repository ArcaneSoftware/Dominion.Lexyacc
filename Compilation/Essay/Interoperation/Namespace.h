#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//RawSyntax
//
//****************************************************************************************************//
public ref class Namespace
{
public:
  Namespace();
  Namespace(CNamespace* native);
  ~Namespace();
protected:
  !Namespace();

public:
  CNamespace* GetNative();
  bool Empty();
  size_t Depth();
  void Add(String^ naming);
  Namespace^ GetParent();

private:
  CNamespace* _native;
};

END_DOMINION_COMPILATION_ESSAY
