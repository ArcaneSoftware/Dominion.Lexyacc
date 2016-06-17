//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Function.h"
#include "Compilation/Essay/Engine/Contextual.h"
#include "Compilation/Essay/Engine/ReducibleSyntax.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CFunctionInvoker
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CFunctionInvoker, C_FUNCTION_INVOKER);
class LIBRARY_EXPORT CFunctionInvoker : public CObject
{
public:
  CLASS_INHERITOR(CObject, CFunctionInvoker);

  CFunctionInvoker();
  CFunctionInvoker(C_FUNCTION_INVOKER& that);
  CFunctionInvoker(C_FUNCTION_INVOKER&& that);
  explicit CFunctionInvoker(C_FUNCTION& function);
  virtual ~CFunctionInvoker();
  //{
  CScalar Invoke(IContextual<ESyntaxType, CReducibleSyntax>* context, size_t count, ...) const;
  //}
  //{
  CLASS_PROPERTY(CFunction, _function, Function);
  //}
private:
  CFunction _function;
};

END_DOMINION_COMPILATION_ESSAY
