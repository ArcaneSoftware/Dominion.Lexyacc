#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Scalar.h"

using namespace Dominion;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//Scalar
//********************************************************************************************************************//
Scalar::Scalar() :
  _scalarType(ScalarTypeEnum::Nil),
  _stringValue(String::Empty)
{
}

Scalar::Scalar(long value) :
  _scalarType(ScalarTypeEnum::Integer),
  _integerValue(value),
  _stringValue(String::Empty)
{
}

Scalar::Scalar(double value) :
  _scalarType(ScalarTypeEnum::Decimal),
  _decimalValue(value),
  _stringValue(String::Empty)
{
}

Scalar::Scalar(String^ value) :
  _scalarType(ScalarTypeEnum::String),
  _stringValue(value)
{
}

Scalar::Scalar(bool value) :
  _scalarType(ScalarTypeEnum::Boolean),
  _booleanValue(value),
  _stringValue(String::Empty)
{
}

Scalar::~Scalar()
{
}

Scalar::!Scalar()
{
}

ScalarTypeEnum Scalar::ScalarType::get()
{
  return _scalarType;
}

void Scalar::ScalarType::set(ScalarTypeEnum value)
{
  _scalarType = value;
}

long Scalar::IntegerValue::get()
{
  return _integerValue;
}

void Scalar::IntegerValue::set(long value)
{
  _integerValue = value;
  ScalarType = ScalarTypeEnum::Integer;
}

double Scalar::DecimalValue::get()
{
  return _decimalValue;
}

void Scalar::DecimalValue::set(double value)
{
  _decimalValue = value;
  ScalarType = ScalarTypeEnum::Decimal;
}

String^ Scalar::StringValue::get()
{
  return _stringValue;
}

void Scalar::StringValue::set(String^ value)
{
  _stringValue = value;
  ScalarType = ScalarTypeEnum::String;
}

bool Scalar::BooleanValue::get()
{
  return _booleanValue;
}

bool Scalar::IsNil::get()
{
  return ScalarType == ScalarTypeEnum::Nil;
}

void Scalar::BooleanValue::set(bool value)
{
  _booleanValue = value;
  ScalarType = ScalarTypeEnum::Boolean;
}

String^ Scalar::ToString()
{
  CWStringBuilder builder;

  switch (ScalarType)
  {
    case ScalarTypeEnum::Nil:
      return L"nil";
    case ScalarTypeEnum::Integer:
      builder.Input(IntegerValue);

      return CLIString::NativeToCLI(builder.Output().c_str());
    case ScalarTypeEnum::Decimal:
      builder.Input(DecimalValue);

      return CLIString::NativeToCLI(builder.Output().c_str());
    case ScalarTypeEnum::String:
      return StringValue;
    case ScalarTypeEnum::Boolean:
      return BooleanValue ? L"true" : L"false";
    default:
      break;
  }
}
