//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CFunctionSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFunctionSyntax, C_FUNCTION_SYNTAX);
class LIBRARY_EXPORT CFunctionSyntax : public CEssaySyntax
{
public:
  CLASS_INHERITOR(CEssaySyntax, CFunctionSyntax);

  CFunctionSyntax();
  CFunctionSyntax(C_FUNCTION_SYNTAX& that);
  CFunctionSyntax(C_FUNCTION_SYNTAX&& that);
  CFunctionSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t argumentID);
  virtual ~CFunctionSyntax();

  CLASS_PROPERTY(wstring, _name, Name);
  CLASS_PROPERTY(int32_t, _argumentChainID, ArgumentChainID);

  C_FUNCTION_SYNTAX& operator=(C_FUNCTION_SYNTAX& that);

private:
  wstring _name;
  int32_t _argumentChainID;
};

END_DOMINION_COMPILATION_ESSAY
