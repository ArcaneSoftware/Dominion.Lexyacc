#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Context.h"
#include "SyntaxBuilder.h"

using namespace Dominion;
using namespace Dominion::Failure;
using namespace Dominion::Compiling::SQLServer;

Context::Context()
{
  _context = nullptr;
}

Context::Context(CContext* context, IBaseReducerFactory<RawSyntax^>^ reducerFactory)
{
  _context = context;
  _reducerFactory = reducerFactory;
}

Context::~Context()
{
}

Context::!Context()
{
}

RawSyntax^ Context::Build(CConcreteSyntax* syntax)
{

  auto builder = gcnew SyntaxBuilder(_reducerFactory);

  auto type = syntax->GetSyntaxType();

  switch (syntax->GetSyntaxType())
  {
    case ESyntaxType::Constant:
      return builder->Constant(syntax);
    case ESyntaxType::Variable:
      return builder->Variable(syntax);
    case ESyntaxType::Function:
      return builder->Function(syntax);
    case ESyntaxType::Chain:
      return builder->Chain(syntax);
    case ESyntaxType::Operation:
      return builder->Operation(syntax);
    case ESyntaxType::Case:
      return builder->Case(syntax);
    case ESyntaxType::When:
      return builder->When(syntax);
    case ESyntaxType::VariableDefinition:
      return builder->VariableDefinition(syntax);
    case ESyntaxType::Argument:
      return builder->Argument(syntax);
    case ESyntaxType::FieldAlias:
      return builder->FieldAlias(syntax);
    case ESyntaxType::AssignedField:
      return builder->AssignedField(syntax);
    case ESyntaxType::SelectedField:
      return builder->SelectedField(syntax);
    case ESyntaxType::OrderedField:
      return builder->OrderedField(syntax);
    case ESyntaxType::JoinEntity:
      return builder->JoinEntity(syntax);
    case ESyntaxType::Top:
      return builder->Top(syntax);
    case ESyntaxType::Flow:
      return builder->Flow(syntax);
    case ESyntaxType::AssignVariable:
      return builder->AssignVariable(syntax);
    case ESyntaxType::DeclareVariables:
      return builder->DeclareVariables(syntax);
    case ESyntaxType::CreateProcedure:
      return builder->CreateProcedure(syntax);
    case ESyntaxType::ExecProcedure:
      return builder->ExecProcedure(syntax);
    case ESyntaxType::SelectEntity:
      return builder->SelectEntity(syntax);
    case ESyntaxType::Block:
      return builder->Block(syntax);;
    default:
      break;
  }

  return nullptr;
}

bool Context::ExistSyntax(int32_t index)
{
  return _context->ExistSyntax(index);
}

bool Context::DefinedLocalVariable(String^ name)
{
  pin_ptr<const wchar_t> chars = PtrToStringChars(name);

  return _context->DefinedLocalVariable(wstring(chars));
}

RawSyntax^ Context::GetSyntax(int32_t index)
{
  return Build(_context->GetSyntax(index).get());
}

int32_t Context::EntryIndex::get()
{
  return _context->GetEntryIndex();
}
