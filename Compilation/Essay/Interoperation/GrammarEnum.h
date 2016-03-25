#pragma once
#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY

public enum class OperationTypeEnum
{
  Empty = 0,
  Add,
  Subtract,
  Multiply,
  Divide,
  Modulo,
  Equal,
  NotEqual,
  Match,
  NotMatch,
  Greater,
  GreaterEqual,
  Less,
  LessEqual,
  And,
  Or,
  Xor,
  Not,
};

public enum class VariableTypeEnum
{
  Atom,
  Object,
};

END_DOMINION_COMPILATION_ESSAY
