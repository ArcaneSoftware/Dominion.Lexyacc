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
  explicit CFunctionInvoker(int32_t defineFunctionID, IContextual<ESyntaxType, CReducibleSyntax>* context);
  virtual ~CFunctionInvoker();
  //{
  void AppendArgumentID(int32_t argumentID);
  void AssignArgumentID(WSTRING& variable, int32_t argumentID);
  CScalar Invoke();
  //}
  //{
  CLASS_PROPERTY(int32_t, _defineFunctionID, DefineFunctionID);
  //}
private:
  int32_t _defineFunctionID;
  IContextual<ESyntaxType, CReducibleSyntax>* _context;
};

END_DOMINION_COMPILATION_ESSAY
