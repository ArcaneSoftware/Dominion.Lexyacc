//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/AbstractSyntaxTree.h"
#include "Dominion/Compilation/Essay/Interoperation/GrammarEnum.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY

//****************************************************************************************************//
//OperationSyntax
//
//****************************************************************************************************//
public ref class OperationSyntax : public AbstractSyntaxTree
{
public:
  OperationSyntax();
  ~OperationSyntax();
protected:
  !OperationSyntax();

public:
  property OperationTypeEnum OperationType
  {
    OperationTypeEnum get();
    void set(OperationTypeEnum value);
  }

  property int32_t LeftOperandID
  {
    int32_t get();
    void set(int32_t value);
  }

  property int32_t RightOperandID
  {
    int32_t get();
    void set(int32_t value);
  }

private:
  OperationTypeEnum _operationType;
  int32_t _leftOperandID;
  int32_t _rightOperandID;
};

END_DOMINION_COMPILATION_ESSAY