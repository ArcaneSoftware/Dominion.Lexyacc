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
public ref class ChainSyntax : public AbstractSyntaxTree
{
public:
  ChainSyntax();
  ~ChainSyntax();
protected:
  !ChainSyntax();

public:
  property int32_t CurrentID
  {
    int32_t get();
    void set(int32_t value);
  }

  property int32_t NextID
  {
    int32_t get();
    void set(int32_t value);
  }

private:
  int32_t _currentID;
  int32_t _nextID;
};

END_DOMINION_COMPILATION_ESSAY
