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
  TTarit* Cast(CAbstractSyntaxTree<ESyntaxType>* syntax)
  {
    TTarit* result = dynamic_cast<TTarit*>(syntax);

    return result;
  }

public:
  //Reference
  ScalarSyntax^ MakeScalar(CAbstractSyntaxTree<ESyntaxType>* source);
  VariableSyntax^ MakeVariable(CAbstractSyntaxTree<ESyntaxType>* source);
  FunctionSyntax^ MakeFunction(CAbstractSyntaxTree<ESyntaxType>* source);
  //Component
  ChainSyntax^ MakeChain(CAbstractSyntaxTree<ESyntaxType>* source);
  OperationSyntax^ MakeOperation(CAbstractSyntaxTree<ESyntaxType>* source);
  //Statement
  BlockSyntax^ MakeBlock(CAbstractSyntaxTree<ESyntaxType>* source);
  DefineVariableSyntax^ MakeDefineVariable(CAbstractSyntaxTree<ESyntaxType>* source);
  AssignVariableSyntax^ MakeAssignVariable(CAbstractSyntaxTree<ESyntaxType>* source);
  DefineFunctionSyntax^ MakeDefineFunction(CAbstractSyntaxTree<ESyntaxType>* source);
  ReturnSyntax^ MakeReturn(CAbstractSyntaxTree<ESyntaxType>* source);
};

END_DOMINION_COMPILATION_ESSAY
