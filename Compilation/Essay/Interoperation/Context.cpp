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

RawSyntax^ Context::Build(CEssaySyntax* syntax)
{
  auto convertor = gcnew SyntaxConvertor();
  auto type = syntax->GetSyntaxType();

  switch (syntax->GetSyntaxType())
  {
    case ESyntaxType::Scalar:
      return convertor->MakeScalar(syntax);
    case ESyntaxType::Variable:
      return convertor->MakeVariable(syntax);
    case ESyntaxType::Function:
      return convertor->MakeFunction(syntax);
    case ESyntaxType::Chain:
      return convertor->MakeChain(syntax);
    case ESyntaxType::Operation:
      return convertor->MakeOperation(syntax);
    default:
      break;
  }

  return nullptr;
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

RawSyntax^ Context::GetSyntax(int32_t index)
{
  return Build(_context->GetSyntax(index).get());
}

int32_t Context::EntryIndex::get()
{
  return _context->GetEntryID();
}
