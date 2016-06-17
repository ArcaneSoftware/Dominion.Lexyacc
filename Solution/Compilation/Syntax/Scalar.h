//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Dependence.h"
#include "Compilation/Syntax/OperationTypeEnum.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//CScalarType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT EScalarType
{
  Nil = 0,
  Numeric,
  String,
  Boolean,
  Object
};

CLASS_DECLARATION(CScalarTypeEnum, C_SCALAR_TYPE_ENUM);
class LIBRARY_EXPORT CScalarTypeEnum : public CEnum<EScalarType>
{
public:
  CLASS_INHERITOR(CEnum<EScalarType>, CScalarTypeEnum);

  static map<wstring, EScalarType> STRING_TO_VALUE()
  {
    map<wstring, EScalarType> map;

    map[L"Nil"] = EScalarType::Nil;
    map[L"Numeric"] = EScalarType::Numeric;
    map[L"String"] = EScalarType::String;
    map[L"Boolean"] = EScalarType::Boolean;

    return move(map);
  }

  static map<EScalarType, wstring> VALUE_TO_STRING()
  {
    map<EScalarType, wstring> map;

    map[EScalarType::Nil] = L"Nil;";
    map[EScalarType::Numeric] = L"Numeric";
    map[EScalarType::String] = L"String";
    map[EScalarType::Boolean] = L"Boolean";

    return move(map);
  }

  ENUM_CLASS_IMPLEMENT(CScalarTypeEnum, EScalarType);
};
//***********************************************************************************************************************************************************************************//
//CScalar
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CScalar, C_SCALAR);
class LIBRARY_EXPORT CScalar : public CObject
{
public:
  CLASS_INHERITOR(CObject, CScalar);
  CScalar();
  CScalar(C_SCALAR& that);
  CScalar(C_SCALAR&& that);
  explicit CScalar(int64_t value);
  explicit CScalar(double value);
  explicit CScalar(char* value);
  explicit CScalar(MSTRING& value);
  explicit CScalar(const wchar_t* value);
  explicit CScalar(WSTRING& value);
  explicit CScalar(bool value);
  virtual ~CScalar();
  //{CObject
  virtual wstring ToString() const override;
  //}
  bool IsNil() const;
  //{
  CLASS_PROPERTY(EScalarType, _scalarType, ScalarType);
  CLASS_PROPERTY(double, _numericValue, NumericValue);
  CLASS_PROPERTY(wstring, _stringValue, StringValue);
  CLASS_PROPERTY(bool, _booleanValue, BooleanValue);
  //}
  //{
  C_SCALAR& operator=(C_SCALAR& that) throw();
  C_SCALAR& operator=(C_SCALAR&& that) throw();
  CScalar operator+(C_SCALAR& right) throw();
  CScalar operator-(C_SCALAR& right) throw();
  CScalar operator*(C_SCALAR& right) throw();
  CScalar operator/(C_SCALAR& right) throw();
  //}
private:
  EScalarType _scalarType;
  double _numericValue;
  wstring _stringValue;
  bool _booleanValue;
};

END_DOMINION_COMPILATION_SYNTAX
