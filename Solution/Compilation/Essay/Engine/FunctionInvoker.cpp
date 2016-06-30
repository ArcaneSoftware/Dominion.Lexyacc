//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "FunctionInvoker.h"
#include "ScalarSyntax.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CFunctionInvoker
//***********************************************************************************************************************************************************************************//
CFunctionInvoker::CFunctionInvoker()
{
}

CFunctionInvoker::CFunctionInvoker(C_FUNCTION_INVOKER& that) :
  CObject(that),
  _defineFunctionID(that._defineFunctionID)
{
}

CFunctionInvoker::CFunctionInvoker(C_FUNCTION_INVOKER&& that) :
  CObject(that),
  _defineFunctionID(move(that._defineFunctionID))
{
}

CFunctionInvoker::CFunctionInvoker(int32_t defineSyntaxID, IContextual<ESyntaxType, CReducibleSyntax>* context) :
  _defineFunctionID(defineSyntaxID),
  _context(context)
{
}

CFunctionInvoker::~CFunctionInvoker()
{
}

void CFunctionInvoker::AssignArgumentID(WSTRING & parameter, int32_t argumentID)
{
  auto defineFunctionSyntex = _context->GetSyntax(_defineFunctionID);

  _context->AssignFunctionArgumentID(defineFunctionSyntex->GetIdentifier().ToString(), parameter, argumentID);
}

CScalar CFunctionInvoker::Invoke()
{
  auto defineSyntex = _context->GetSyntax(_defineFunctionID);

  return defineSyntex->Reduce(*_context);
}
