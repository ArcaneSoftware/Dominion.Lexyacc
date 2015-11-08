//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"

using namespace System;

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//ScalarTypeEnum
//
//****************************************************************************************************//
public enum class ScalarTypeEnum
{
  Nil = 0,
  Numeric,
  String,
  Boolean
};
//****************************************************************************************************//
//Scalar
//
//****************************************************************************************************//
public ref class Scalar
{
public:
  Scalar();
  Scalar(double value);
  Scalar(String^ value);
  Scalar(bool value);
  ~Scalar();
protected:
  !Scalar();

public:
  property ScalarTypeEnum ScalarType
  {
    ScalarTypeEnum get();
    void set(ScalarTypeEnum value);
  }

  property double NumericValue
  {
    double get();
    void set(double value);
  }

  property String^ StringValue
  {
    String^ get();
    void set(String^ value);
  }

  property bool BooleanValue
  {
    bool get();
    void set(bool value);
  }

  property bool IsNil
  {
    bool get();
  }

  String^ ToString() override;

private:
  ScalarTypeEnum _scalarType;
  double _numericValue;
  String^ _stringValue;
  bool _booleanValue;
};

END_DOMINION_COMPILATION_ESSAY
