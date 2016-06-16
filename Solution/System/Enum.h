//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Object.h"
#include "System/Comparable.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CEnum
//
//***********************************************************************************************************************************************************************************//
template<typename TEnum>
class LIBRARY_EXPORT CEnum : public CObject, public IComparable<CEnum<TEnum>>, public IComparable<TEnum>
{
public:
  TYPEDEF(CEnum<TEnum>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);
  typedef function<map<wstring, TEnum>(void)> FStringToValue;
  typedef function<map<TEnum, wstring>(void)> FValueToString;

protected:
  CEnum()
  {
  }
public:
  CEnum(CLASS& that) :
    CObject(that),
    _value(that._value),
    _stringValueMap(that._stringValueMap),
    _valueStringMap(that._valueStringMap)
  {
  }

  CEnum(CLASS&& that) :
    CObject(that),
    _value(move(that._value)),
    _stringValueMap(move(that._stringValueMap)),
    _valueStringMap(move(that._valueStringMap))
  {
  }

  explicit CEnum(TEnum value, FStringToValue _StringToValue_ = nullptr, FValueToString _ValueToString_ = nullptr) :
    _value(value)
  {
    if (_StringToValue_ != nullptr)
    {
      _stringValueMap = _StringToValue_();
    }
    if (_ValueToString_ != nullptr)
    {
      _valueStringMap = _ValueToString_();
    }
  }

  explicit CEnum(WSTRING& string, FStringToValue _StringToValue_ = nullptr, FValueToString _ValueToString_ = nullptr)
  {
    if (_StringToValue_ != nullptr)
    {
      _stringValueMap = _StringToValue_();
    }
    if (_ValueToString_ != nullptr)
    {
      _valueStringMap = _ValueToString_();
    }

    _value = _stringValueMap[string];
  }

  virtual ~CEnum()
  {
  }

  //{CObject
  virtual wstring ToString() const override
  {
    return _valueStringMap.find(_value)->second;
  }
  //}
  //{IComparable<CEnum<TEnum>>
  virtual bool operator>(CLASS& that) const override
  {
    return _value > that._value;
  }

  virtual bool operator<(CLASS& that) const override
  {
    return _value < that._value;
  }

  virtual bool operator>=(CLASS& that) const override
  {
    return _value >= that._value;
  }

  virtual bool operator<=(CLASS& that) const override
  {
    return _value <= that._value;
  }
  //}
  //{IComparable<TEnum>
  virtual bool operator>(const TEnum& that) const override
  {
    return _value > that;
  }

  virtual bool operator<(const TEnum& that) const override
  {
    return _value < that;
  }

  virtual bool operator>=(const TEnum& that) const override
  {
    return _value >= that;
  }

  virtual bool operator<=(const TEnum& that) const override
  {
    return _value <= that;
  }
  //}
  int32_t ToNumeric() const
  {
    return (int32_t)_value;
  }

  CLASS_PROPERTY(TEnum, _value, Value);

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _value = that._value;
    _stringValueMap = that._stringValueMap;
    _valueStringMap = that._valueStringMap;

    return *this;
  }

  CLASS& operator=(TEnum that)
  {
    _value = that;

    return *this;
  }

  bool operator==(CLASS& that)
  {
    return _value == that._value;
  }

  bool operator==(TEnum that)
  {
    return _value == that;
  }

  bool operator!=(CLASS& that)
  {
    return !operator==(that);
  }

  bool operator!=(TEnum that)
  {
    return !operator==(that);
  }

protected:
  TEnum _value;
  map<wstring, TEnum> _stringValueMap;
  map<TEnum, wstring> _valueStringMap;
};

END_DOMINION

#undef ENUM_CLASS_IMPLEMENT
#define ENUM_CLASS_IMPLEMENT(CLASS_NAME, ENUM_TYPE) \
  CLASS_NAME(){} \
  CLASS_NAME(const CLASS_NAME& that) : CEnum(that) {} \
  CLASS_NAME(const CLASS_NAME&& that) : CEnum(that) {} \
  explicit CLASS_NAME(ENUM_TYPE value) : CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING) {} \
  explicit CLASS_NAME(WSTRING& valueString) : CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING) {} \
  virtual ~CLASS_NAME() {} \
  const CLASS_NAME& operator=(const CLASS_NAME& that) {CEnum<ENUM_TYPE>::operator=(that); return *this;}
