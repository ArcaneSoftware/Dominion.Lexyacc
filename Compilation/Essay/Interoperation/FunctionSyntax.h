//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/AbstractSyntaxTree.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//ChainSyntax
//
//****************************************************************************************************//
public ref class FunctionSyntax : public AbstractSyntaxTree
{
public:
  FunctionSyntax();
  ~FunctionSyntax();
protected:
  !FunctionSyntax();

public:
  property String^ Name
  {
    String^ get();
    void set(String^ value);
  }

  property int32_t ArgumentChainID
  {
    int32_t get();
    void set(int32_t value);
  }

private:
  String^ _name;
  int32_t _argumentChainID;
};

END_DOMINION_COMPILATION_ESSAY
