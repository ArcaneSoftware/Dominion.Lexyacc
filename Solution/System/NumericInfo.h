//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "System/Atom.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CNumericInfo
//
//*****************************************************************************************************************//
template<typename TNumeric>
class LIBRARY_EXPORT CNumericInfo
{
  TYPEDEF(CNumericInfo<TNumeric>, Class, CLASS);

public:
  static const int32_t DIGITS10 = numeric_limits<TNumeric>::digits;

  static Class HEXADECIMAL()
  {
    return move(Class(ESystem::Hexadecimal, DIGITS10));
  }

  static Class OCTONARY()
  {
    return move(Class(ESystem::Octonary, DIGITS10));
  }

  static TNumeric MAX()
  {
    return numeric_limits<TNumeric>::max();
  }

  static TNumeric MIN()
  {
    return numeric_limits<TNumeric>::min();
  }

  template<typename TChar>
  static basic_string<TChar> TO_STRING(TNumeric numeric, ESystem base = ESystem::Decimal)
  {
    basic_stringstream<TChar> stream;

    switch (base)
    {
      case ESystem::Octonary:
        stream << showbase << oct << numeric;
        break;
      case ESystem::Decimal:
        stream << showbase << dec << numeric;
        break;
      case ESystem::Hexadecimal:
        stream << showbase << hex << numeric;
        break;
      default:
        stream.str(basic_string<TChar>());
    }

    return stream.str();
  }

  template<typename TChar>
  static basic_string<TChar> MAX_STRING(ESystem base = ESystem::Decimal)
  {
    return TO_STRING<TChar>(numeric_limits<TNumeric>::max(), base);
  }

  template<typename TChar>
  static basic_string<TChar> MIN_STRING(ESystem base = ESystem::Decimal)
  {
    return TO_STRING<TChar>(numeric_limits<TNumeric>::min(), base);
  }

public:
  CNumericInfo() :
    _precision(DIGITS10),
    _base(ESystem::Decimal)
  {
  }

  CNumericInfo(CLASS& that) :
    _base(that._base),
    _precision(that._precision)
  {
  }

  CNumericInfo(CLASS&& that) :
    _base(move(that._base)),
    _precision(move(that._precision))
  {
  }

  explicit CNumericInfo(ESystem base, int32_t precision = DIGITS10) :
    _base(base),
    _precision(precision)
  {
  }

  virtual ~CNumericInfo()
  {
  }

public:
  ESystem GetBase() const
  {
    return _base;
  }

  void SetBase(ESystem value)
  {
    _base = value;
  }

  int32_t GetPrecision() const
  {
    return _precision;
  }

  void SetPrecision(int32_t value)
  {
    _precision = value;
  }

public:
  CLASS& operator=(CLASS& that)
  {
    _base = that._base;
    _precision = that._precision;

    return *this;
  }

private:
  ESystem _base;
  int32_t _precision;
};

END_DOMINION