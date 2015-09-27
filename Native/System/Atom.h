//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#ifndef DOMINION_NATIVE_SYSTEM_STANDARD_H
  #include "Dominion/Native/System/Standard.h"
#endif

BEGIN_DOMINION
static const wchar_t* NSTR = L"";
//*****************************************************************************************************************//
//Redefine
//
//*****************************************************************************************************************//
typedef uint8_t* pointer_t;
typedef int32_t enum_t;
typedef string mstring;
typedef const wstring WSTRING;
typedef const string MSTRING;
//*****************************************************************************************************************//
//SString
//
//*****************************************************************************************************************//
struct LIBRARY_EXPORT SString
{
  static const size_t BUFFER_SIZE = 255;

  inline static const wchar_t* EMPTY();
  inline static const wchar_t* TRUE_TEXT();
  inline static const wchar_t* FALSE_TEXT();
  inline static wstring TO_WSTRING(MSTRING& input, bool appended = false);
  inline static string TO_MSTRING(WSTRING& input, bool appended = false);
  inline static vector<wstring> SPLIT(WSTRING& input, wchar_t separator);

  template<typename TString>
  inline static TString TO_LOWER(const TString& input)
  {
    TString result = input;

    transform(result.begin(), result.end(), result.begin(), tolower);

    return move(result);
  }

  template<typename TString>
  inline static TString TO_UPPER(const TString& input)
  {
    TString result = input;

    transform(result.begin(), result.end(), result.begin(), toupper);

    return move(result);
  }

  inline static wstring SUBSTRING(WSTRING& input, size_t location, size_t length = -1);
  inline static wstring TRIM_LEFT(WSTRING& input, wchar_t scrap);
  inline static string TRIM_LEFT(MSTRING& input, char scrap);
  inline static wstring TRIM_LEFT_IN(WSTRING& input, WSTRING& scrap);
  inline static string TRIM_LEFT_IN(MSTRING& input, MSTRING& scrap);
  inline static wstring TRIM_RIGHT(WSTRING& input, wchar_t scrap);
  inline static string TRIM_RIGHT(MSTRING& input, char scrap);
  inline static wstring TRIM_RIGHT_IN(WSTRING& input, WSTRING& scrap);
  inline static string TRIM_RIGHT_IN(MSTRING& input, MSTRING& scrap);
  inline static wstring TRIM_IN(WSTRING& input, WSTRING& scraps);
  inline static string TRIM_IN(MSTRING& input, MSTRING& scraps);
  inline static wchar_t HEAD(WSTRING& input);
  inline static wchar_t TAIL(WSTRING& input);
};
#undef WSTR
#undef MSTR
#define WSTR(STRING) SString::TO_WSTRING(STRING)
#define MSTR(STRING) SString::TO_MSTRING(STRING)
//*****************************************************************************************************************//
//Constant and enum type according to c++ type
//*****************************************************************************************************************//
#ifdef INSTRUCTION_X86
  const static size_t MAX_THROUGHPUT_BITES = 64;
#endif
#ifdef INSTRUCTION_IA64
  const static size_t MAX_THROUGHPUT_BITES = 128;
#endif
#ifdef INSTRUCTION_X64
  const static size_t MAX_THROUGHPUT_BITES = 128;
#endif

const static size_t BYTE8_SIZE = sizeof(uint8_t);
const static size_t BYTE16_SIZE = sizeof(uint16_t);
const static size_t BYTE32_SIZE = sizeof(uint32_t);
const static size_t BYTE64_SIZE = sizeof(uint64_t);
const static size_t MAX_BINARY_LENGTH = 64 + 1;
const static size_t MAX_OCTONARY_LENGTH = 21 + 1;
const static size_t MAX_HEXADECIMAL_LENGTH = 18 + 1;
const static size_t MAX_DECIMAL_LENGTH = 20 + 1;
//*****************************************************************************************************************//
//ESystem
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT ESystem
{
  Binary = 2,
  Octonary = 8,
  Decimal = 10,
  Hexadecimal = 16
};
//*****************************************************************************************************************//
//ENull
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT ENull
{
  Pointer = 0,
  Functor
};

#define M_REDEFINE(SOURCE, TYPE, CONST_TYPE) \
  typedef SOURCE TYPE; \
  typedef const TYPE CONST_TYPE;

#define M_CAST_TO_SP(SP_TYPE, TYPE, SOURCE) \
  (SP_TYPE)dynamic_cast<TYPE*>(SOURCE)

END_DOMINION
