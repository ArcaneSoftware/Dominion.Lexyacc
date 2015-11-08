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

ScalarSyntax^ SyntaxConvertor::MakeScalar(CEssaySyntax* source)
{
  auto syntax = Cast<CScalarSyntax>(source);
  auto result = gcnew ScalarSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));

  switch (syntax->GetScalarType())
  {
    case EScalarType::Numeric:
    {
      result->Value->NumericValue = syntax->GetValue().GetNumericValue();
    }
    break;
    case EScalarType::String:
    {
      result->Value->StringValue = CLIString::NativeToCLI(syntax->GetValue().GetStringValue().c_str());
    }
    break;
    case EScalarType::Boolean:
    {
      result->Value->BooleanValue = syntax->GetValue().GetBooleanValue();
    }
    break;
  }

  return result;
}

VariableSyntax^ SyntaxConvertor::MakeVariable(CEssaySyntax* source)
{
  auto syntax = Cast<CVariableSyntax>(source);
  auto result = gcnew VariableSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->Name = CLIString::NativeToCLI(syntax->GetName().c_str());

  return result;
}

FunctionSyntax^ SyntaxConvertor::MakeFunction(CEssaySyntax* source)
{
  auto syntax = Cast<CFunctionSyntax>(source);
  auto result = gcnew FunctionSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));

  result->Name = CLIString::NativeToCLI(syntax->GetName().c_str());
  result->ArgumentChainID = syntax->GetArgumentChainID();

  return result;
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
