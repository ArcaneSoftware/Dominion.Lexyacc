#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "AbstractSyntaxTree.h"

using namespace Dominion;
using namespace Dominion::Failure;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//AbstractSyntaxTree
//********************************************************************************************************************//
AbstractSyntaxTree::AbstractSyntaxTree()
{
}

AbstractSyntaxTree::AbstractSyntaxTree(SyntaxTypeEnum syntaxType, int32_t livingLine) :
  _syntaxType(syntaxType),
  _liveLine(livingLine)
{
}

AbstractSyntaxTree::~AbstractSyntaxTree()
{
}

AbstractSyntaxTree::!AbstractSyntaxTree()
{
}

SyntaxTypeEnum AbstractSyntaxTree::SyntaxType::get()
{
  return _syntaxType;
}

void AbstractSyntaxTree::SyntaxType::set(SyntaxTypeEnum value)
{
  _syntaxType = value;
}

int32_t AbstractSyntaxTree::LiveLine::get()
{
  return _liveLine;
}

void AbstractSyntaxTree::LiveLine::set(int32_t value)
{
  _liveLine = value;
}

Namespace^ AbstractSyntaxTree::LiveNamespace::get()
{
  return _liveNamespace;
}

void AbstractSyntaxTree::LiveNamespace::set(Namespace^ value)
{
  _liveNamespace = value;
}
