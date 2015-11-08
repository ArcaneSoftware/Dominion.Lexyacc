#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY

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

public enum class LIBRARY_EXPORT IdentifierTypeEnum
{
  Variable = 0,
  Function,
};

END_DOMINION_COMPILATION_ESSAY
