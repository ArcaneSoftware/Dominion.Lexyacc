//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Namespace.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//Identifier
//
//****************************************************************************************************//
public ref class Identifier
{
public:
  Identifier();
  ~Identifier();
protected:
  !Identifier();

public:
  property Namespace^ LiveNamespace
  {
    Namespace^ get();
    void set(Namespace^ value);
  }

  property String^ Name
  {
    String^ get();
    void set(String^ value);
  }

private:
  Namespace^ _liveNamespace;
  String^ _name;
};

END_DOMINION_COMPILATION_ESSAY
