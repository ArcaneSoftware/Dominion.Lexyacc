//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Ecotope/Native/Object.h"
#include "Dominion/Ecotope/Native/Comparable.h"
#include "Dominion/Ecotope/Native/StringBuilder.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CInteger
//
//*****************************************************************************************************************//
template <typename TNumeric>
class LIBRARY_EXPORT CInteger : public CObject, public IComparable<CInteger<TNumeric>>, public IComparable<TNumeric>
{
public:
  TYPEDEF(CInteger<TNumeric>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);

  CInteger() :
    _value(0)
  {
  }


  CInteger(CLASS& that) :
    CObject(that),
    _value(that._value)
  {
  }

  CInteger(CLASS&& that) :
    CObject(that),
    _value(move(that._value))
  {
  }

  explicit CInteger(TNumeric numeric) :
    _value(numeric)
  {
  }

  virtual ~CInteger()
  {
  }

  //{CObject
  virtual wstring ToString() const override
  {
    return ToDecimalString();
  }

  //}
  //{IComparable<CInteger<TNumeric>>
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
  //{IComparable<TNumeric>
  virtual bool operator>(const TNumeric& that) const override
  {
    return _value > that;
  }

  virtual bool operator<(const TNumeric& that) const override
  {
    return _value < that;
  }

  virtual bool operator>=(const TNumeric& that) const override
  {
    return _value >= that;
  }

  virtual bool operator<=(const TNumeric& that) const override
  {
    return _value <= that;
  }

  //}
  wstring ToDecimalString() const
  {
    CWStringBuilder builder;

    builder << _value;

    return builder.Output();
  }

  wstring ToHexadecimalString() const
  {
    CWStringBuilder builder;

    builder.Input <TNumeric>(_value, CNumericInfo<TNumeric>::HEXADECIMAL());

    return builder.Output();
  }

  CLASS_PROPERTY(TNumeric, _value, Value);

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _value = that._value;

    return *this;
  }

  CLASS& operator=(TNumeric that)
  {
    _value = that;

    return *this;
  }

  bool operator==(CLASS& that) const
  {
    return _value == that._value;
  }

  bool operator==(TNumeric that) const
  {
    return _value == that;
  }

private:
  TNumeric _value;
};

typedef CInteger<int8_t> CInt8;
typedef CInteger<int16_t> CInt16;
typedef CInteger<int32_t> CInt32;
typedef CInteger<int64_t> CInt64;
typedef CInteger<uint8_t> CUInt8;
typedef CInteger<uint16_t> CUInt16;
typedef CInteger<uint32_t> CUInt32;
typedef CInteger<uint64_t> CUInt64;
typedef CInteger<size_t> CSize;

END_DOMINION

