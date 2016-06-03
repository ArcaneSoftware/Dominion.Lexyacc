//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Scalar.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//*******************************************************************************************************************//
//CScalar
//*******************************************************************************************************************//
CScalar::CScalar() :
  _scalarType(EScalarType::Nil),
  _integerValue(0),
  _decimalValue(0),
  _booleanValue(false)
{
}

CScalar::CScalar(C_SCALAR& that) :
  CObject(that),
  _scalarType(that._scalarType),
  _integerValue(that._integerValue),
  _decimalValue(that._decimalValue),
  _stringValue(that._stringValue),
  _booleanValue(that._booleanValue)
{
}

CScalar::CScalar(C_SCALAR&& that) :
  CObject(that),
  _scalarType(move(that._scalarType)),
  _integerValue(move(that._integerValue)),
  _decimalValue(move(that._decimalValue)),
  _stringValue(move(that._stringValue)),
  _booleanValue(move(that._booleanValue))
{
}


CScalar::CScalar(int64_t value) :
  _scalarType(EScalarType::Integer),
  _integerValue(value),
  _decimalValue(0),
  _booleanValue(false)
{
}

CScalar::CScalar(double value) :
  _scalarType(EScalarType::Decimal),
  _integerValue(0),
  _decimalValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(char* value) :
  _scalarType(EScalarType::String),
  _integerValue(0),
  _decimalValue(0),
  _stringValue(WSTR(value)),
  _booleanValue(false)
{
}

CScalar::CScalar(MSTRING& value) :
  _scalarType(EScalarType::String),
  _integerValue(0),
  _decimalValue(0),
  _stringValue(WSTR(value)),
  _booleanValue(false)
{
}

CScalar::CScalar(const wchar_t* value) :
  _scalarType(EScalarType::String),
  _integerValue(0),
  _decimalValue(0),
  _stringValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(WSTRING& value) :
  _scalarType(EScalarType::String),
  _integerValue(0),
  _decimalValue(0),
  _stringValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(bool value) :
  _scalarType(EScalarType::Boolean),
  _integerValue(0),
  _decimalValue(0),
  _booleanValue(value)
{
}

CScalar::~CScalar()
{
}

wstring CScalar::ToString() const
{
  wstring string;
  wstringstream stream;

  switch (_scalarType)
  {
    case EScalarType::Integer:
      stream << _integerValue;
      stream >> string;
      stream.clear();
    case EScalarType::Decimal:
      stream << _decimalValue;
      stream >> string;
      stream.clear();
      break;
    case EScalarType::String:
      string = L"\"" + _stringValue + L"\"";
      break;
    case EScalarType::Boolean:
      string = CBool(_booleanValue).ToString();

      break;
    case EScalarType::Nil:
      string = L"nil";
      break;
  }

  return move(string);
}

bool CScalar::IsNil() const
{
  return EScalarType::Nil == _scalarType;
}

C_SCALAR& CScalar::operator=(C_SCALAR& that)
{
  CObject::operator=(that);

  _scalarType = that._scalarType;
  _integerValue = that._integerValue;
  _decimalValue = that._decimalValue;
  _stringValue = that._stringValue;
  _booleanValue = that._booleanValue;

  return *this;
}
