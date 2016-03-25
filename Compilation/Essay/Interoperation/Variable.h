//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/NamedReference.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//Variable
//
//****************************************************************************************************//
public ref class Variable : NamedReference
{
public:
  static Variable^ CREATE(C_VARIABLE& native);

public:
  Variable();
  ~Variable();
protected:
  !Variable();

public:
  property int32_t InitialValueID
  {
    int32_t get();
    void set(int32_t value);
  }

  property int32_t RealValueID
  {
    int32_t get();
    void set(int32_t value);
  }

  property bool IsArgument
  {
    bool get();
    void set(bool value);
  }

private:
  int32_t _initialValueID;
  int32_t _realValueID;
  bool _isArgument;
};

END_DOMINION_COMPILATION_ESSAY
