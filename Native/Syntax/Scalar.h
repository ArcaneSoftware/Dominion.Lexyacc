//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/Syntax/Dependence.h"

BEGIN_DOMINION_SYNTAX
//*****************************************************************************************************************//
//EScalarType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EScalarType
{
  Nil = 0,
  Numeric,
  String,
  Boolean
};
//*****************************************************************************************************************//
//CScalar
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CScalar, C_SCALAR);
class LIBRARY_EXPORT CScalar : public CObject
{
public:
  CLASS_INHERITOR(CObject, CScalar);
  CScalar();
  CScalar(C_SCALAR& that);
  CScalar(C_SCALAR&& that);
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

  CLASS_PROPERTY(EScalarType, _scalarType, ScalarType);
  CLASS_PROPERTY(double, _numericValue, NumericValue);
  CLASS_PROPERTY(wstring, _stringValue, StringValue);
  CLASS_PROPERTY(bool, _booleanValue, BooleanValue);

  C_SCALAR& operator=(C_SCALAR& that);

private:
  EScalarType _scalarType;
  double _numericValue;
  wstring _stringValue;
  bool _booleanValue;
};
END_DOMINION_SYNTAX
