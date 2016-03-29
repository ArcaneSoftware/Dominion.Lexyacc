//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Identifier.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//AccessTypeEnum
//
//****************************************************************************************************//
public enum class AccessTypeEnum
{
  Private = 0,
  Public = 1,
};

//****************************************************************************************************//
//NamedReference
//
//****************************************************************************************************//
public ref class NamedReference
{
public:
  NamedReference();
  ~NamedReference();
protected:
  !NamedReference();

public:
  property AccessTypeEnum AccessType
  {
    AccessTypeEnum get();
    void set(AccessTypeEnum value);
  }

  property Identifier^ IdentifierObject
  {
    Identifier^ get();
    void set(Identifier^ value);
  }

  property bool Available
  {
    bool get();
  }

private:
  AccessTypeEnum _accessType;
  Identifier^ _identifierObject;
};

END_DOMINION_COMPILATION_ESSAY
