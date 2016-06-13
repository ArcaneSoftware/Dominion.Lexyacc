#include "Compilation/Essay/Engine/Engine.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
using namespace Dominion::Compilation::Essay;

void F1()
{
  wstring input_path = L"./Scripts/1.essay";
  ifstream ifs(input_path);

  try
  {
    CEngine engine;

    if (ifs.good())
    {
      auto c = engine.Run(ifs);
      auto context = engine.GetContext();

      auto a = context.GetVariable(L"Business.a").IsAvailable();

      for (int i = 0; i < context.GetSyntaxes().size(); i++)
      {
        auto syntax = context.GetSyntax(i);
      }
    }
  }
  catch (CException& e)
  {
    auto r = e.ToString();
  }
}

void main()
{
  F1();
}