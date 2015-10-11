//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Producer.h"
#include "Validators.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CProducer
//*******************************************************************************************************************//
CProducer::CProducer() :
  _context(SString::TO_LOWER<wstring>)
{
}

CProducer::CProducer(C_PRODUCER& that) :
  CObject(that),
  _context(that._context),
  _file(that._file)
{
}

CProducer::CProducer(C_PRODUCER&& that) :
  CObject(that),
  _context(move(that._context)),
  _file(move(that._file))
{
}

CProducer::CProducer(WSTRING& file) :
  _file(file)
{
}

CProducer::~CProducer()
{
}

CContext CProducer::Cast() const
{
  return _context;
}

wstring CProducer::GetError() const
{
  CWStringBuilder builder;

  for (auto each : _errorVector)
  {
    builder << each.ToString();
  }

  return builder.Output();
}
//Reference
CProductor CProducer::Scalar(C_SCALAR_SYNTAX& syntax)
{
  return Produce<CEssaySyntax>(syntax);
}

CProductor CProducer::Variable(C_VARIABLE_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CUndefinedReferenceValidator().Validate(syntax, _context)
  };

  return Produce<CVariableSyntax>(syntax, errors);
}

CProductor CProducer::Chain(C_CHAIN_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CNoneSyntaxValidator().Validate(syntax, _context)
  };

  return Produce<CChainSyntax>(syntax, errors);
}

CProductor CProducer::UnaryOperation(C_OPERATION_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CNullUnaryOperationValidator().Validate(syntax, _context)
  };

  return Produce<COperationSyntax>(syntax, errors);
}

CProductor CProducer::BinaryOperation(C_OPERATION_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CNullBinaryOperationValidator().Validate(syntax, _context)
  };

  return Produce<COperationSyntax>(syntax, errors);
}

CProductor CProducer::Block(C_BLOCK_SYNTAX& syntax)
{
  return Produce<CBlockSyntax>(syntax);
}

CProductor CProducer::DefineVariable(C_DEFINE_VARIABLE_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CDuplicationValidator().Validate(syntax, _context)
  };

  auto result = Produce<CDefineVariableSyntax>(syntax, errors);

  if (result.GetSuccessed())
  {
    _context.DefineVariable(syntax.GetLiveNamespace(), syntax.GetName(), syntax.GetInitialValueID());
  }

  return move(result);
}

CProductor CProducer::AssignVariable(C_ASSIGN_VARIABLE_SYNTAX& syntax)
{
  auto errors = vector<CError>
  {
    CNoneSyntaxValidator().Validate(syntax, _context)
  };

  return Produce<CAssignVariableSyntax>(syntax, errors);
}

shared_ptr<CEssaySyntax> CProducer::GetSyntax(int32_t syntaxID) const
{
  return _context.GetSyntax(syntaxID);
}

WSTRING& CProducer::GetFile() const
{
  return _file;
}

void CProducer::SetEntry(int32_t entryID)
{
  _context.SetEntryID(entryID);
}

void CProducer::PushNaming(WSTRING& naming)
{
  _namingStack.Push(naming);
}

void CProducer::PopNaming()
{
  _namingStack.Pop();
}

CNamespace CProducer::GetLiveNamespace() const
{
  return move(_namingStack.GetNamespace());
}

C_PRODUCER& CProducer::operator=(C_PRODUCER& that)
{
  CObject::operator=(that);

  _file = that._file;
  _context = that._context;
  _errorVector = that._errorVector;

  return *this;
}
