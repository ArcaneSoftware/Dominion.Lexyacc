//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/SyntaxTypeEnum.h"
#include "Dominion/Compilation/Essay/Interoperation/Namespace.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//Namespace
//
//*****************************************************************************************************************//
public ref class RawSyntax
{
public:
  RawSyntax();
  RawSyntax(SyntaxTypeEnum syntaxType, int32_t livingLine);
  ~RawSyntax();
protected:
  !RawSyntax();

public:
  property SyntaxTypeEnum SyntaxType
  {
    SyntaxTypeEnum get();
    void set(SyntaxTypeEnum value);
  }

  property int32_t LiveLine
  {
    int32_t get();
    void set(int32_t value);
  }

  property Namespace^ LiveNamespace
  {
    Namespace^ get();
    void set(Namespace^ value);
  }

private:
  SyntaxTypeEnum _syntaxType;
  int32_t _liveLine;
  Namespace^ _liveNamespace;
};

END_DOMINION_COMPILATION_ESSAY
