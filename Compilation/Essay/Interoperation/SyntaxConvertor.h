//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"
#include "Dominion/Compilation/Essay/Interoperation/ASTs.h"

using namespace System;
using namespace System::IO;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//SyntaxBuilder
//
//****************************************************************************************************//
public ref class SyntaxConvertor
{
public:
  SyntaxConvertor();
  ~SyntaxConvertor();
protected:
  !SyntaxConvertor();

protected:
  template<typename TTarit>
  TTarit* Cast(CEssaySyntax* syntax)
  {
    TTarit* result = dynamic_cast<TTarit*>(syntax);

    return result;
  }

public:
  //Reference
  ScalarSyntax^ MakeScalar(CEssaySyntax* source);
  VariableSyntax^ MakeVariable(CEssaySyntax* source);
  FunctionSyntax^ MakeFunction(CEssaySyntax* source);
  //Component
  ChainSyntax^ MakeChain(CEssaySyntax* source);
  OperationSyntax^ MakeOperation(CEssaySyntax* source);
  //Statement
  BlockSyntax^ MakeBlock(CEssaySyntax* source);
  DefineVariableSyntax^ MakeDefineVariable(CEssaySyntax* source);
  AssignVariableSyntax^ MakeAssignVariable(CEssaySyntax* source);
  DefineFunctionSyntax^ MakeDefineFunction(CEssaySyntax* source);
  ReturnSyntax^ MakeReturn(CEssaySyntax* source);
};

END_DOMINION_COMPILATION_ESSAY
