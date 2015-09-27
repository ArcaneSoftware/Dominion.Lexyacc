//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Object.h"
#include "Dominion/Native/System/NumericInfo.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CStringBuilder
//
//*****************************************************************************************************************//
template<typename TChar>
class LIBRARY_EXPORT CStringBuilder : public CObject
{
public:
  TYPEDEF(CStringBuilder<TChar>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);

  CStringBuilder()
  {
    _defaultPrecision = _stream.precision();
  }

  explicit CStringBuilder(int32_t defaultPrecision) :
    _defaultPrecision(defaultPrecision)
  {
  }

  virtual ~CStringBuilder()
  {
  }

protected:
  void InputNumericBase(ESystem base)
  {
    switch (base)
    {
      case ESystem::Decimal:
      {
        _stream << showbase << dec;
      }
      break;
      case ESystem::Hexadecimal:
      {
        _stream << showbase << hex;
      }
      break;
      case ESystem::Octonary:
      {
        _stream << showbase << oct;
      }
      break;
    }
  }

  template<typename TNumeric>
  Class& InputNumeric(TNumeric numeric, const CNumericInfo<TNumeric>& numericInfo)
  {
    _stream.precision(numericInfo.GetPrecision());

    InputNumericBase(numericInfo.GetBase());

    _stream << numeric;
    _stream.precision(_defaultPrecision);

    return *this;
  }

  template<typename TNumeric>
  Class& InputUInt8(uint8_t numeric, const CNumericInfo<TNumeric>& numericInfo)
  {
    _stream.precision(numericInfo.GetPrecision());

    InputNumericBase(numericInfo.GetBase());

    _stream << (uint32_t)numeric;
    _stream.precision(_defaultPrecision);

    return *this;
  }

public:
  void Clear()
  {
    _stream.str(basic_string<TChar>());
    _stream.clear();
  }

  CLASS_PROPERTY(int32_t, _defaultPrecision, DefaultPrecision);

  Class& Input(const basic_string<TChar>& input)
  {
    _stream << input;

    return *this;
  }

  Class& Input(TChar input)
  {
    _stream << input;

    return *this;
  }

  Class& Input(int8_t input, const CNumericInfo<int8_t>& numericInfo = CNumericInfo<int8_t>())
  {
    return InputNumeric<int8_t>(input, numericInfo);
  }

  Class& Input(uint8_t input, const CNumericInfo<uint8_t>& numericInfo = CNumericInfo<uint8_t>())
  {
    return InputUInt8(input, numericInfo);
  }

  Class& Input(int16_t input, const CNumericInfo<int16_t>& numericInfo = CNumericInfo<int16_t>())
  {
    return InputNumeric<int16_t>(input, numericInfo);
  }

  Class& Input(uint16_t input, const CNumericInfo<uint16_t>& numericInfo = CNumericInfo<uint16_t>())
  {
    return InputNumeric<uint16_t>(input, numericInfo);
  }

  Class& Input(int32_t input, const CNumericInfo<int32_t>& numericInfo = CNumericInfo<int32_t>())
  {
    return InputNumeric<int32_t>(input, numericInfo);
  }

  Class& Input(uint32_t input, const CNumericInfo<uint32_t>& numericInfo = CNumericInfo<uint32_t>())
  {
    return InputNumeric<uint32_t>(input, numericInfo);
  }

  Class& Input(int64_t input, const CNumericInfo<int64_t>& numericInfo = CNumericInfo<int64_t>())
  {
    return InputNumeric<int64_t>(input, numericInfo);
  }

  Class& Input(uint64_t input, const CNumericInfo<uint64_t>& numericInfo = CNumericInfo<uint64_t>())
  {
    return InputNumeric<uint64_t>(input, numericInfo);
  }

  Class& Input(float input, const CNumericInfo<float>& numericInfo = CNumericInfo<float>())
  {
    return InputNumeric<float>(input, numericInfo);
  }

  Class& Input(double input, const CNumericInfo<double>& numericInfo = CNumericInfo<double>())
  {
    return InputNumeric<double>(input, numericInfo);
  }

  basic_string<TChar> Output() const
  {
    basic_string<TChar> string;

    string = _stream.str();

    return move(string);
  }

  Class& operator<<(const basic_string<TChar>& input)
  {
    return Input(input);
  }

  Class& operator<<(TChar input)
  {
    return Input(input);
  }

  Class& operator<<(int8_t input)
  {
    return Input(input);
  }

  Class& operator<<(uint8_t input)
  {
    return Input(input);
  }

  Class& operator<<(int16_t input)
  {
    return Input(input);
  }

  Class& operator<<(uint16_t input)
  {
    return Input(input);
  }

  Class& operator<<(int32_t input)
  {
    return Input(input);
  }

  Class& operator<<(uint32_t input)
  {
    return Input(input);
  }

  Class& operator<<(int64_t input)
  {
    return Input(input);
  }

  Class& operator<<(uint64_t input)
  {
    return Input(input);
  }

  Class& operator<<(float input)
  {
    return Input(input);
  }

  Class& operator<<(double input)
  {
    return Input(input);
  }

  Class& operator>>(wstring& output)
  {
    output = Output();

    return *this;
  }

  CLASS& operator=(CLASS& that)
  {
    CObject(that);

    return *this;
  }

private:
  int32_t _defaultPrecision;
  basic_stringstream<TChar> _stream;
};
typedef CStringBuilder<char> CMStringBuilder;
typedef CStringBuilder<wchar_t> CWStringBuilder;

END_DOMINION