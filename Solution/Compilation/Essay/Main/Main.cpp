#include "Compilation/Essay/Engine/Engine.h"
#include "Compilation/Essay/Engine/FunctionInvoker.h"
#include "Compilation/Essay/Engine/ScalarSyntax.h"


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

      auto invoker = CFunctionInvoker(entryID, &context);
      CScalar x1((double)2);
      CScalar y1((double)4);

      int32_t xid = context.AppendSyntax(new CScalarSyntax(-1, CNamespace(), x1));
      int32_t yid = context.AppendSyntax(new CScalarSyntax(-1, CNamespace(), y1));
      
      invoker.AssignArgumentID(L"Business.Main.x", xid);
      invoker.AssignArgumentID(L"Business.Main.y", yid);

      auto result = invoker.Invoke();
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