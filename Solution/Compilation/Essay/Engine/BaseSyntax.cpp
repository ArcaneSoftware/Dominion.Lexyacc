//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "BaseSyntax.h"

using namespace Dominion::Compilation::Essay;
using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CFunctionSyntax
//*******************************************************************************************************************//
CBaseSyntax::CBaseSyntax() :
  CAbstractSyntaxTree<ESyntaxType>()
{
}

CBaseSyntax::CBaseSyntax(C_BASE_SYNTAX& that) :
  CAbstractSyntaxTree<ESyntaxType>(that)
{
}

CBaseSyntax::CBaseSyntax(C_BASE_SYNTAX&& that) :
  CAbstractSyntaxTree<ESyntaxType>(that)
{
}

CBaseSyntax::CBaseSyntax(ESyntaxType syntaxType, int32_t liveLine, C_NAMESPACE& liveNamespace) :
  CAbstractSyntaxTree<ESyntaxType>(syntaxType, liveLine, liveNamespace)
{

}

CBaseSyntax::~CBaseSyntax()
{
}

CScalar CBaseSyntax::Reduce(IContextual<ESyntaxType>& context) const
{
  return CScalar();
}

C_BASE_SYNTAX& CBaseSyntax::operator=(C_BASE_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  return *this;
}
