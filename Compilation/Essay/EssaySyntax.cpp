//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "EssaySyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CEssaySyntax
//*******************************************************************************************************************//
CEssaySyntax::CEssaySyntax()
{
}

CEssaySyntax::CEssaySyntax(C_ESSAY_SYNTAX& that) :
  CAbstractSyntaxTree(that)
{
}

CEssaySyntax::CEssaySyntax(C_ESSAY_SYNTAX&& that) :
  CAbstractSyntaxTree(that)
{
}

CEssaySyntax::CEssaySyntax(ESyntaxType syntaxType, int32_t livingLine) :
  CAbstractSyntaxTree(syntaxType, livingLine)
{
}

CEssaySyntax::~CEssaySyntax()
{
}

C_ESSAY_SYNTAX& CEssaySyntax::operator=(C_ESSAY_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  return *this;
}
