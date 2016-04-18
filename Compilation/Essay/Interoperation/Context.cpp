#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Context.h"
#include "SyntaxConvertor.h"

using namespace Dominion;
using namespace Dominion::Failure;
using namespace Dominion::Compilation::Essay;

Context::Context()
{
  _context = nullptr;
}

Context::Context(CContext* context)
{
  _context = context;
}

Context::~Context()
{
}

Context::!Context()
{
}

/*
Empty = 0,
//Reference
Scalar,
Variable,
Function,
//Composition
Chain,
Operation,
Parameter,
Argurment,
//Statement
Block,
Flow,
DefineVariable,
AssignVariable,
DefineFunction,
Return,
*/

AbstractSyntaxTree^ Context::Build(CAbstractSyntaxTree<ESyntaxType>* syntax)
{
  auto convertor = gcnew SyntaxConvertor();
  AbstractSyntaxTree^ result = nullptr;

  switch (syntax->GetSyntaxType())
  {
    case ESyntaxType::Scalar:
    {
      result = convertor->MakeScalar(syntax);
    }
    break;
    case ESyntaxType::Variable:
    {
      result = convertor->MakeVariable(syntax);
    }
    break;
    case ESyntaxType::Function:
    {
      result = convertor->MakeFunction(syntax);
    }
    break;
    case ESyntaxType::Chain:
    {
      result = convertor->MakeChain(syntax);
    }
    break;
    case ESyntaxType::Operation:
    {
      result = convertor->MakeOperation(syntax);
    }
    break;
    case ESyntaxType::Block:
    {
      result = convertor->MakeBlock(syntax);
    }
    break;
    case ESyntaxType::DefineVariable:
    {
      result = convertor->MakeDefineVariable(syntax);
    }
    break;
    case ESyntaxType::AssignVariable:
    {
      result = convertor->MakeAssignVariable(syntax);
    }
    break;
    case ESyntaxType::DefineFunction:
    {
      result = convertor->MakeDefineFunction(syntax);
    }
    break;
    case ESyntaxType::Return:
    {
      result = convertor->MakeReturn(syntax);
    }
    break;
  }

  return result;
}

int Context::SyntaxAmount::get()
{
  return _context->GetSyntaxes().size();
}

bool Context::ExistSyntax(int32_t index)
{
  return _context->ExistSyntax(index);
}

bool Context::HasDefinedIdentifier(String^ fullName, IdentifierTypeEnum identifierType)
{
  pin_ptr<const wchar_t> wcsFullName = PtrToStringChars(fullName);

  return _context->HasDefinedIdentifier(wcsFullName, (EIdentifierType)(int)identifierType);
}

bool Context::HasDefinedIdentifier(Namespace^ liveNamespace, String^ name, IdentifierTypeEnum identifierType)
{
  pin_ptr<const wchar_t> wcsName = PtrToStringChars(name);

  return _context->HasDefinedIdentifier(*liveNamespace->GetNative(), wcsName, (EIdentifierType)(int)identifierType);
}

AbstractSyntaxTree^ Context::GetSyntax(int32_t index)
{
  return Build(_context->GetSyntax(index).get());
}

Variable^ Context::GetVariable(String^ identifier)
{
  wchar_t wcsName[256] = { 0 };
  CLIString::CLIToNative(identifier, wcsName);

  auto nVariable = _context->GetVariable(wcsName);

  return Variable::CREATE(nVariable);
}

Variable^ Context::GetVariable(Identifier^ identifier)
{
  wchar_t wcsName[256] = { 0 };
  CLIString::CLIToNative(identifier->Name, wcsName);
  auto nVariable = _context->GetVariable(CIdentifier(*(identifier->LiveNamespace->GetNative()), wstring(wcsName)));

  return Variable::CREATE(nVariable);
}

bool Context::SetVariableValue(String^ identifier, int32_t valueID)
{
  wchar_t wcsName[256] = { 0 };
  CLIString::CLIToNative(identifier, wcsName);

  return _context->SetVariableValue(wcsName, valueID);
}

bool Context::SetVariableValue(Identifier^ identifier, int32_t valueID)
{
  return SetVariableValue(identifier->ToString(), valueID);
}

int32_t Context::EntryIndex::get()
{
  return _context->GetEntryID();
}
