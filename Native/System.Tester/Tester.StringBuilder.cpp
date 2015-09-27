#include "stdafx.h"
#include "CppUnitTest.h"
#include "Dominion/Native/System/StringBuilder.h"

using namespace Dominion;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestEcotopeNative
{
TEST_CLASS(CStringBuilderTester)
{
protected:
  template<typename TNumeric>
  TNumeric MakeRandomNumeric()
  {
    srand((unsigned)time(0));

    return rand() % numeric_limits<TNumeric>::max();
  }

  template<typename TNumeric>
  void TestLimit(ESystem base)
  {
    CWStringBuilder builder;
    //{
    builder.Input(CNumericInfo<TNumeric>::MAX(), CNumericInfo<TNumeric>(base));

    Assert::AreEqual(CNumericInfo<TNumeric>::MAX_STRING<wchar_t>(base).c_str(), builder.Output().c_str());
    //}
    builder.Clear();
    //{
    builder.Input(CNumericInfo<TNumeric>::MIN(), CNumericInfo<TNumeric>(base));

    Assert::AreEqual(CNumericInfo<TNumeric>::MIN_STRING<wchar_t>(base).c_str(), builder.Output().c_str());
    //}
    builder.Clear();
  }

public:
  TEST_METHOD(StringBuilder_Build_String)
  {
    CWStringBuilder builder;
    wstring input_string(L"BuiltString");

    builder.Input(input_string);
    auto output_string = builder.Output();

    Assert::AreEqual(input_string, output_string);
  }

  TEST_METHOD(StringBuilder_Build_Int8)
  {
    TestLimit<int8_t>(ESystem::Decimal);
    TestLimit<uint8_t>(ESystem::Decimal);
    TestLimit<int8_t>(ESystem::Hexadecimal);
    TestLimit<uint8_t>(ESystem::Hexadecimal);
  }

  TEST_METHOD(StringBuilder_Build_Int16)
  {
    TestLimit<int16_t>(ESystem::Decimal);
    TestLimit<uint16_t>(ESystem::Decimal);
    TestLimit<int16_t>(ESystem::Hexadecimal);
    TestLimit<uint16_t>(ESystem::Hexadecimal);
  }

  TEST_METHOD(StringBuilder_Build_Int32)
  {
    TestLimit<int32_t>(ESystem::Decimal);
    TestLimit<uint32_t>(ESystem::Decimal);
    TestLimit<int32_t>(ESystem::Hexadecimal);
    TestLimit<uint32_t>(ESystem::Hexadecimal);
  }

  TEST_METHOD(StringBuilder_Build_Int64)
  {
    TestLimit<int64_t>(ESystem::Decimal);
    TestLimit<uint64_t>(ESystem::Decimal);
    TestLimit<int64_t>(ESystem::Hexadecimal);
    TestLimit<uint64_t>(ESystem::Hexadecimal);
  }
};
}
