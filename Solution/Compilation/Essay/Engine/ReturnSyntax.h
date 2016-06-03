//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CReturnSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CReturnSyntax, C_RETURN_SYNTAX);
class LIBRARY_EXPORT CReturnSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CReturnSyntax);

  CReturnSyntax();
  CReturnSyntax(C_RETURN_SYNTAX& that);
  CReturnSyntax(C_RETURN_SYNTAX&& that);
  CReturnSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t expressionID);
  virtual ~CReturnSyntax();

  CLASS_PROPERTY(int32_t, _expressionID, ExpressionID);

  C_RETURN_SYNTAX& operator=(C_RETURN_SYNTAX& that);

private:
  int32_t _expressionID;
};

END_DOMINION_COMPILATION_ESSAY
