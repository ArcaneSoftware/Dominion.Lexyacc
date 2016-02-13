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
  CAbstractSyntaxTree(that),
  _liveNamespace(that._liveNamespace)
{
}

CEssaySyntax::CEssaySyntax(C_ESSAY_SYNTAX&& that) :
  CAbstractSyntaxTree(that),
  _liveNamespace(move(that._liveNamespace))
{
}

CEssaySyntax::CEssaySyntax(ESyntaxType syntaxType, int32_t liveLine, C_NAMESPACE& liveNamespace) :
  CAbstractSyntaxTree(syntaxType, liveLine),
  _liveNamespace(liveNamespace)
{
}

CEssaySyntax::~CEssaySyntax()
{
}

C_ESSAY_SYNTAX& CEssaySyntax::operator=(C_ESSAY_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  _liveNamespace = that._liveNamespace;

  return *this;
}
