//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Namespace.h"
#include "Dominion/Compilation/Essay/Interoperation/Reducible.h"
#include "Dominion/Compilation/Essay/Interoperation/Scalar.h"

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
//RawSyntax
//
//*****************************************************************************************************************//
ref class Context;
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

  IReducible<Scalar^, Context^>^ _reduciable = nullptr;
};

END_DOMINION_COMPILATION_ESSAY
