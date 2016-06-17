//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "FunctionInvoker.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CFunctionInvoker
//***********************************************************************************************************************************************************************************//
CFunctionInvoker::CFunctionInvoker()
{
}

CFunctionInvoker::CFunctionInvoker(C_FUNCTION_INVOKER& that) :
  CObject(that),
  _function(that._function)
{
}

CFunctionInvoker::CFunctionInvoker(C_FUNCTION_INVOKER&& that) :
  CObject(that),
  _function(move(that._function))
{
}

CFunctionInvoker::CFunctionInvoker(C_FUNCTION& function) :
  _function(function)
{
}

CFunctionInvoker::~CFunctionInvoker()
{
}

CScalar CFunctionInvoker::Invoke(IContextual<ESyntaxType, CReducibleSyntax>* context, size_t count, ...) const
{
  va_list argument;
  va_start(argument, count);

  do
  {
    auto o = va_arg(argument, CScalar);
  }
  while (argument != 0);

  va_end(argument);

  return CScalar();
}
