//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Scalar.h"
#include "UnmatchedScalarTypeException.h"
#include "NilScalarOperationException.h"
#include "UnsupportedScalarOperationException.h"
#include "ZeroDivisorScalarExecption.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
//***********************************************************************************************************************************************************************************//
//CScalar
//***********************************************************************************************************************************************************************************//
CScalar::CScalar() :
  _scalarType(EScalarType::Nil),
  _numericValue(0),
  _booleanValue(false)
{
}

CScalar::CScalar(C_SCALAR& that) :
  CObject(that),
  _scalarType(that._scalarType),
  _numericValue(that._numericValue),
  _stringValue(that._stringValue),
  _booleanValue(that._booleanValue)
{
}

CScalar::CScalar(C_SCALAR&& that) :
  CObject(that),
  _scalarType(move(that._scalarType)),
  _numericValue(move(that._numericValue)),
  _stringValue(move(that._stringValue)),
  _booleanValue(move(that._booleanValue))
{
}


CScalar::CScalar(int64_t value) :
  _scalarType(EScalarType::Numeric),
  _numericValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(double value) :
  _scalarType(EScalarType::Numeric),
  _numericValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(char* value) :
  _scalarType(EScalarType::String),
  _numericValue(0),
  _stringValue(WSTR(value)),
  _booleanValue(false)
{
}

CScalar::CScalar(MSTRING& value) :
  _scalarType(EScalarType::String),
  _numericValue(0),
  _stringValue(WSTR(value)),
  _booleanValue(false)
{
}

CScalar::CScalar(const wchar_t* value) :
  _scalarType(EScalarType::String),
  _numericValue(0),
  _stringValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(WSTRING& value) :
  _scalarType(EScalarType::String),
  _numericValue(0),
  _stringValue(value),
  _booleanValue(false)
{
}

CScalar::CScalar(bool value) :
  _scalarType(EScalarType::Boolean),
  _numericValue(0),
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
    case EScalarType::Numeric:
    {
      stream << _numericValue;
      stream >> string;
      stream.clear();

      break;
    }
    case EScalarType::String:
    {
      string = L"\"" + _stringValue + L"\"";

      break;
    }
    case EScalarType::Boolean:
    {
      string = CBool(_booleanValue).ToString();

      break;
    }
    case EScalarType::Nil:
    {
      string = L"nil";

      break;
    }
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
  _numericValue = that._numericValue;
  _stringValue = that._stringValue;
  _booleanValue = that._booleanValue;

  return *this;
}

C_SCALAR& CScalar::operator=(C_SCALAR&& that) throw()
{
  CObject::operator=(that);

  _scalarType = move(that._scalarType);
  _numericValue = move(that._numericValue);
  _stringValue = move(that._stringValue);
  _booleanValue = move(that._booleanValue);

  return *this;
}

CScalar CScalar::operator+(C_SCALAR& right) throw()
{
  CNilScalarOperationException::CHECK(*this, CTroublespot(THIS_SCENE(L"operator+"), NSTR, NSTR, NSTR));
  CNilScalarOperationException::CHECK(right, CTroublespot(THIS_SCENE(L"operator+"), L"right", NSTR, NSTR));

  CScalar result;
  EScalarType rightScalarType = right.GetScalarType();

  if (rightScalarType != GetScalarType())
  {
    throw CUnmatchedScalarTypeException(CTroublespot(THIS_SCENE(L"operator+"),
                                                     NSTR,
                                                     CUnmatchedScalarTypeException::MAKE_NOTE(EOperationType::Add, GetScalarType(),rightScalarType),
                                                     NSTR));
  }

  switch (GetScalarType())
  {
    case EScalarType::Numeric:
    {
      result.SetNumericValue(_numericValue + right.GetNumericValue());

      break;
    }
    case EScalarType::String:
    {
      result.SetStringValue(_stringValue + right.GetStringValue());
    }
    break;
    default:
    {
      throw CUnsupportedScalarOperationException(CTroublespot(THIS_SCENE(L"operator+"),
                                                              NSTR,
                                                              CUnsupportedScalarOperationException::MAKE_NOTE(EOperationType::Add, GetScalarType()),
                                                              NSTR));
    }
  }

  return move(result);
}

CScalar CScalar::operator-(C_SCALAR& right) throw()
{
  CNilScalarOperationException::CHECK(*this, CTroublespot(THIS_SCENE(L"operator-"), NSTR, NSTR, NSTR));
  CNilScalarOperationException::CHECK(right, CTroublespot(THIS_SCENE(L"operator-"), L"right", NSTR, NSTR));

  CScalar result;
  EScalarType rightScalarType = right.GetScalarType();

  if (GetScalarType() != EScalarType::Numeric)
  {
    throw CUnsupportedScalarOperationException(CTroublespot(THIS_SCENE(L"operator-"),
                                                            NSTR,
                                                            CUnsupportedScalarOperationException::MAKE_NOTE(EOperationType::Subtract, GetScalarType()),
                                                            NSTR));
  }

  if (rightScalarType != GetScalarType())
  {
    throw CUnmatchedScalarTypeException(CTroublespot(THIS_SCENE(L"operator-"),
                                                     NSTR,
                                                     CUnmatchedScalarTypeException::MAKE_NOTE(EOperationType::Subtract, GetScalarType(), rightScalarType),
                                                     NSTR));
  }

  result.SetNumericValue(_numericValue - right.GetNumericValue());

  return move(result);
}

CScalar CScalar::operator*(C_SCALAR& right) throw()
{
  CNilScalarOperationException::CHECK(*this, CTroublespot(THIS_SCENE(L"operator-"), NSTR, NSTR, NSTR));
  CNilScalarOperationException::CHECK(right, CTroublespot(THIS_SCENE(L"operator-"), L"right", NSTR, NSTR));

  CScalar result;
  EScalarType rightScalarType = right.GetScalarType();

  if (GetScalarType() != EScalarType::Numeric)
  {
    throw CUnsupportedScalarOperationException(CTroublespot(THIS_SCENE(L"operator-"),
                                                            NSTR,
                                                            CUnsupportedScalarOperationException::MAKE_NOTE(EOperationType::Multiply, GetScalarType()),
                                                            NSTR));
  }

  if (rightScalarType != GetScalarType())
  {
    throw CUnmatchedScalarTypeException(CTroublespot(THIS_SCENE(L"operator*"),
                                                     NSTR,
                                                     CUnmatchedScalarTypeException::MAKE_NOTE(EOperationType::Multiply, GetScalarType(), rightScalarType),
                                                     NSTR));
  }

  result.SetNumericValue(_numericValue * right.GetNumericValue());

  return move(result);
}

CScalar CScalar::operator/(C_SCALAR& right) throw()
{
  CNilScalarOperationException::CHECK(*this, CTroublespot(THIS_SCENE(L"operator-"), NSTR, NSTR, NSTR));
  CNilScalarOperationException::CHECK(right, CTroublespot(THIS_SCENE(L"operator-"), L"right", NSTR, NSTR));

  CScalar result;
  EScalarType rightScalarType = right.GetScalarType();

  if (GetScalarType() != EScalarType::Numeric)
  {
    throw CUnsupportedScalarOperationException(CTroublespot(THIS_SCENE(L"operator-"),
                                                            NSTR,
                                                            CUnsupportedScalarOperationException::MAKE_NOTE(EOperationType::Multiply, GetScalarType()),
                                                            NSTR));
  }

  if (rightScalarType != GetScalarType())
  {
    throw CUnmatchedScalarTypeException(CTroublespot(THIS_SCENE(L"operator*"),
                                                     NSTR,
                                                     CUnmatchedScalarTypeException::MAKE_NOTE(EOperationType::Multiply, GetScalarType(), rightScalarType),
                                                     NSTR));
  }

  CZeroDivisorScalarExecption::CHECK(right, CTroublespot(THIS_SCENE(L"operator*"), L"right", NSTR, NSTR));

  result.SetNumericValue(_numericValue / right.GetNumericValue());

  return move(result);
}
