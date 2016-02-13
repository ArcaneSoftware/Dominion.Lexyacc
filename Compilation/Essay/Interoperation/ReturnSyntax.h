//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/RawSyntax.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//ReturnSyntax
//
//****************************************************************************************************//
public ref class ReturnSyntax : public RawSyntax
{
public:
  ReturnSyntax();
  ~ReturnSyntax();
protected:
  !ReturnSyntax();

public:
  property int ExpressionID
  {
    int get();
    void set(int value);
  }

private:
  int32_t _expressionID;
};

END_DOMINION_COMPILATION_ESSAY
