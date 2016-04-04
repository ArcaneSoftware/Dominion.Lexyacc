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
//BlockSyntax
//
//****************************************************************************************************//
public ref class BlockSyntax : public AbstractSyntaxTree
{
public:
  BlockSyntax();
  ~BlockSyntax();
protected:
  !BlockSyntax();

public:
  property int StatementID
  {
    int get();
    void set(int value);
  }

  property int BlockID
  {
    int get();
    void set(int value);
  }

private:
  int32_t _statementID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_ESSAY
