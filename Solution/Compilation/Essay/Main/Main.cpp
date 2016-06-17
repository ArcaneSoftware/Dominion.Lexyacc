#include "Compilation/Essay/Engine/Engine.h"
#include "Compilation/Essay/Engine/FunctionInvoker.h"


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
      auto entryID = context.GetEntryID();
      auto entrySyntax = context.GetSyntax(entryID);
      auto function = context.GetFunction(entrySyntax->GetIdentifier().ToString());

      auto invoker = CFunctionInvoker(function);
      CScalar x1((double)2);
      CScalar y1((double)2);
      invoker.Invoke(&context, 2,x1, y1);
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