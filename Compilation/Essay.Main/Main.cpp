#include "Dominion/Compilation/Essay/Engine/Engine.h"

using namespace Dominion;
using namespace Dominion::Compilation::Syntax;
using namespace Dominion::Compilation::Essay;

void F1()
{
  CEngine engine;

  engine.Run("CREATE PROCEDURE dbo.LoadESBCustomerPartyMasterSp(@DerBODID LongListType, @Name NameType) AS DECLARE @my INT");
}


void F2()
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

      for (int i = 0; i < context.GetSyntaxVector().size(); i++)
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

void F3()
{
  CIdentifier i(L"Business.Customer.a");

  auto s = i.GetName();
  auto ss = i.GetLiveNamespace().ToString();
}

void main()
{
  F2();
}