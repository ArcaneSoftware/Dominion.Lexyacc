#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "RawSyntax.h"

using namespace Dominion;
using namespace Dominion::Failure;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//RawSyntax
//********************************************************************************************************************//
RawSyntax::RawSyntax()
{
}

RawSyntax::RawSyntax(SyntaxTypeEnum syntaxType, int32_t livingLine) :
  _syntaxType(syntaxType),
  _liveLine(livingLine)
{
}

RawSyntax::~RawSyntax()
{
}

RawSyntax::!RawSyntax()
{
}

SyntaxTypeEnum RawSyntax::SyntaxType::get()
{
  return _syntaxType;
}

void RawSyntax::SyntaxType::set(SyntaxTypeEnum value)
{
  _syntaxType = value;
}

int32_t RawSyntax::LiveLine::get()
{
  return _liveLine;
}

void RawSyntax::LiveLine::set(int32_t value)
{
  _liveLine = value;
}

Namespace^ RawSyntax::LiveNamespace::get()
{
  return _liveNamespace;
}

void RawSyntax::LiveNamespace::set(Namespace^ value)
{
  _liveNamespace = value;
}
