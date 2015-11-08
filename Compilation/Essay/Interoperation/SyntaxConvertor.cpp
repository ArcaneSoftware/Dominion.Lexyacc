#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "SyntaxConvertor.h"

using namespace Dominion::Dotnet::System;
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

ChainSyntax^ SyntaxConvertor::MakeChain(CEssaySyntax* source)
{
  auto syntax = Cast<CChainSyntax>(source);
  auto result = gcnew ChainSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->CurrentID = syntax->GetCurrentID();
  result->NextID = syntax->GetNextID();

  return result;
}

OperationSyntax^ SyntaxConvertor::MakeOperation(CEssaySyntax* source)
{
  auto syntax = Cast<COperationSyntax>(source);
  auto result = gcnew OperationSyntax();
  auto typeString = CLIString::NativeToCLI(CEOperationType(syntax->GetOperationType()).ToString().c_str());

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->OperationType = EnumHelper<OperationTypeEnum>::PARSE(typeString);
  result->LeftOperandID = syntax->GetLeftOperandID();
  result->RightOperandID = syntax->GetRightOperandID();

  return result;
}
