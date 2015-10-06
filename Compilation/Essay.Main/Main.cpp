#include "Dominion/Compilation/Essay/Engine.h"

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
      auto s = engine.GetErrorText();
    }
  }
  catch (CException& e)
  {
    auto r = e.ToString();
  }
}

void F3()
{
  CNamespace ns(L"Dominion");

  auto pns = ns.GetParent();
  auto s = pns.ToString();
}

void main()
{
  F3();
}