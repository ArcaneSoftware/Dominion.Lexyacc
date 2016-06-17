//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "ReducibleSyntax.h"

using namespace Dominion::Compilation::Essay;
using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CFunctionSyntax
//***********************************************************************************************************************************************************************************//
CReducibleSyntax::CReducibleSyntax() :
  CAbstractSyntaxTree<ESyntaxType>()
{
}

CReducibleSyntax::CReducibleSyntax(C_REDUCIBLE_SYNTAX& that) :
  CAbstractSyntaxTree<ESyntaxType>(that)
{
}

CReducibleSyntax::CReducibleSyntax(C_REDUCIBLE_SYNTAX&& that) :
  CAbstractSyntaxTree<ESyntaxType>(that)
{
}

CReducibleSyntax::CReducibleSyntax(ESyntaxType syntaxType, int32_t liveLine, C_NAMESPACE& liveNamespace) :
  CAbstractSyntaxTree<ESyntaxType>(syntaxType, liveLine, liveNamespace)
{

}

CReducibleSyntax::~CReducibleSyntax()
{
}

CScalar CReducibleSyntax::Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw()
{
  return CScalar();
}

vector<int> CReducibleSyntax::Pick(IContextual<ESyntaxType, CReducibleSyntax>* context) const throw()
{
  return vector<int>();
}

C_REDUCIBLE_SYNTAX& CReducibleSyntax::operator=(C_REDUCIBLE_SYNTAX& that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  return *this;
}

C_REDUCIBLE_SYNTAX & CReducibleSyntax::operator=(C_REDUCIBLE_SYNTAX && that)
{
  CAbstractSyntaxTree<ESyntaxType>::operator=(that);

  return *this;
}
