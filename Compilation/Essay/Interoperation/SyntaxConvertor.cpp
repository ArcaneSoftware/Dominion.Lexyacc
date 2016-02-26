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
  result->Value = gcnew Scalar();

  switch (syntax->GetScalarType())
  {
    case EScalarType::Integer:
    {
      result->Value->IntegerValue = syntax->GetValue().GetIntegerValue();
    }
    break;
    case EScalarType::Decimal:
    {
      result->Value->DecimalValue = syntax->GetValue().GetDecimalValue();
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
  auto typeString = CLIString::NativeToCLI(COperationTypeEnum(syntax->GetOperationType()).ToString().c_str());

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->OperationType = EnumHelper<OperationTypeEnum>::PARSE(typeString);
  result->LeftOperandID = syntax->GetLeftOperandID();
  result->RightOperandID = syntax->GetRightOperandID();

  return result;
}


BlockSyntax^ SyntaxConvertor::MakeBlock(CEssaySyntax* source)
{
  auto syntax = Cast<CBlockSyntax>(source);
  auto result = gcnew BlockSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->StatementID = syntax->GetStatementID();
  result->BlockID = syntax->GetBlockID();

  return result;
}

DefineVariableSyntax^ SyntaxConvertor::MakeDefineVariable(CEssaySyntax* source)
{
  auto syntax = Cast<CDefineVariableSyntax>(source);
  auto result = gcnew DefineVariableSyntax();
  auto accessType = CLIString::NativeToCLI(CAccessTypeEnum(syntax->GetAccessType()).ToString().c_str());
  auto variableType = CLIString::NativeToCLI(CVariableTypeEnum(syntax->GetVariableType()).ToString().c_str());

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->Name = CLIString::NativeToCLI(syntax->GetName().c_str());
  result->AccessType = EnumHelper<AccessTypeEnum>::PARSE(accessType);
  result->VariableType = EnumHelper<VariableTypeEnum>::PARSE(variableType);
  result->InitialValueID = syntax->GetInitialValueID();

  return result;
}
AssignVariableSyntax^ SyntaxConvertor::MakeAssignVariable(CEssaySyntax* source)
{
  auto syntax = Cast<CAssignVariableSyntax>(source);
  auto result = gcnew AssignVariableSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->VariableID = syntax->GetVariableID();
  result->ValueID = syntax->GetValueID();

  return result;
}

DefineFunctionSyntax^ SyntaxConvertor::MakeDefineFunction(CEssaySyntax* source)
{
  auto syntax = Cast<CDefineFunctionSyntax>(source);
  auto result = gcnew DefineFunctionSyntax();
  auto typeString = CLIString::NativeToCLI(CAccessTypeEnum(syntax->GetAccessType()).ToString().c_str());

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->Name = CLIString::NativeToCLI(syntax->GetName().c_str());
  result->AccessType = EnumHelper<AccessTypeEnum>::PARSE(typeString);
  result->ParameterChainID = syntax->GetParameterChainID();
  result->BlockID = syntax->GetBlockID();

  return result;
}

ReturnSyntax^ SyntaxConvertor::MakeReturn(CEssaySyntax* source)
{
  auto syntax = Cast<CReturnSyntax>(source);
  auto result = gcnew ReturnSyntax();

  result->LiveLine = syntax->GetLiveLine();
  result->LiveNamespace = gcnew Namespace(new CNamespace(syntax->GetLiveNamespace()));
  result->ExpressionID = syntax->GetExpressionID();

  return result;
}