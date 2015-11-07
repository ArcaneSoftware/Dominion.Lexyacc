#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "SyntaxConvertor.h"

using namespace Dominion::Compilation::Essay;
using namespace Dominion::Failure;

SyntaxConvertor::SyntaxConvertor()
{
}

SyntaxConvertor::~SyntaxConvertor()
{
}

SyntaxConvertor::!SyntaxConvertor()
{
}

ChainSyntax^ SyntaxConvertor::Chain(CEssaySyntax* source)
{
  auto syntax = Cast<CChainSyntax>(source);
  auto result = gcnew ChainSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->CurrentID = syntax->GetCurrentID();
  result->NextID = syntax->GetNextID();

  return result;
}
