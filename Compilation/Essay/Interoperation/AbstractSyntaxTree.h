//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Namespace.h"
#include "Dominion/Compilation/Essay/Interoperation/Scalar.h"
#include "Dominion/Compilation/Essay/Interoperation/NamedReference.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//SyntaxTypeEnum
//
//*****************************************************************************************************************//
public enum class LIBRARY_EXPORT SyntaxTypeEnum
{
  Empty = 0,
  //Reference
  Scalar,
  Variable,
  Function,
  //Composition
  Chain,
  Operation,
  Parameter,
  Argurment,
  //Statement
  Block,
  Flow,
  DefineVariable,
  AssignVariable,
  DefineFunction,
  Return,
};
//*****************************************************************************************************************//
//IdentifierTypeEnum
//
//*****************************************************************************************************************//
public enum class LIBRARY_EXPORT IdentifierTypeEnum
{
  Variable = 0,
  Function,
};
//*****************************************************************************************************************//
//AbstractSyntaxTree
//
//*****************************************************************************************************************//
public ref class AbstractSyntaxTree
{
public:
  AbstractSyntaxTree();
  AbstractSyntaxTree(SyntaxTypeEnum syntaxType, int32_t livingLine);
  ~AbstractSyntaxTree();
protected:
  !AbstractSyntaxTree();

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

  virtual Identifier^ GetIdentifier();

private:
  SyntaxTypeEnum _syntaxType;
  int32_t _liveLine;
  Namespace^ _liveNamespace;
};

END_DOMINION_COMPILATION_ESSAY
