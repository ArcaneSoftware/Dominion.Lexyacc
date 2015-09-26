#include "stdafx.h"
#include "CppUnitTest.h"
#include "Core/Native/System/Scene.h"

using namespace Core;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestNativeSystem
{
TEST_CLASS(CSceneTester)
{
private:
  CScene _base;
  wstring _base_class;
  wstring _base_method;
  int32_t _base_line;
  wstring _base_to_string;
  wstring _base_permeation;

protected:
  void VerifyTesteeUsingBaseData(C_SCENE& actual)
  {
    Assert::AreEqual(_base_class, actual.GetClass());
    Assert::AreEqual(_base_method, actual.GetMethod());
    Assert::AreEqual(_base_line, actual.GetLineNumber());
    Assert::IsTrue(_base == actual);
    Assert::IsFalse(_base != actual);
  }

public:
  TEST_METHOD_INITIALIZE(Initialize)
  {
    _base_class = L"CSceneTester";
    _base_method = L"Test";
    _base_line = 89;
    _base_to_string = L"CSceneTester::Test()@89";
    _base_permeation = L"Class:[CSceneTester],Method:[Test],Line:[89]";

    _base.SetClass(_base_class);
    _base.SetMethod(_base_method);
    _base.SetLineNumber(_base_line);
  }

  TEST_METHOD(Scene_Constructed_By_Parameters)
  {
    CScene testee(_base_class, _base_method, _base_line);

    VerifyTesteeUsingBaseData(testee);
  }

  TEST_METHOD(Scene_Set_Properties)
  {
    CScene testee;

    testee.SetClass(_base_class);
    testee.SetMethod(_base_method);
    testee.SetLineNumber(_base_line);

    VerifyTesteeUsingBaseData(testee);
  }

  TEST_METHOD(Scene_Conver_To_String)
  {
    auto testee = _base.ToString();

    Assert::AreEqual(testee, _base_to_string);
  }

  TEST_METHOD(Scene_Permeate_Content)
  {
    auto testee = _base.Permeate();

    Assert::AreEqual(testee, _base_permeation);
  }

  TEST_METHOD(Scene_Clone)
  {
    CScene source(_base_class, _base_method, _base_line);
    CScene testee;

    testee.Clone(source);

    VerifyTesteeUsingBaseData(testee);
  }

  TEST_METHOD(Scene_Equal_To)
  {
    CScene base(_base_class, _base_method, _base_line);
    CScene testee1(_base_class, _base_method, _base_line);
    CScene testee2(_base_class, _base_method, 0);

    Assert::IsTrue(testee1 == base);
    Assert::IsFalse(testee1 != base);
    Assert::IsFalse(testee2 == base);
    Assert::IsTrue(testee2 != base);
  }
};
}
