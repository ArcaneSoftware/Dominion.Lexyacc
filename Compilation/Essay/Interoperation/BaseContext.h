#pragma once

#include "Dominion/Compilation/Essay/Interoperation/AbstractSyntaxTree.h"
#include "Dominion/Compilation/Essay/Interoperation/Variable.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//IBaseContext
//
//****************************************************************************************************//
public interface class IBaseContext
{
  bool ExistSyntax(int32_t index);
  bool HasDefinedIdentifier(String^ fullName, IdentifierTypeEnum identifierType);
  bool HasDefinedIdentifier(Namespace^ liveNamespace, String^ name, IdentifierTypeEnum identifierType);
  AbstractSyntaxTree^ GetSyntax(int32_t index);
  Variable^ GetVariable(String^ identifier);
  Variable^ GetVariable(Identifier^ identifier);
  void SetVariableValue(String^ identifier, int32_t valueID);
  void SetVariableValue(Identifier^ identifier, int32_t valueID);
};

END_DOMINION_COMPILATION_ESSAY
