//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/SyntaxEnum.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CEssaySyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEssaySyntax, C_ESSAY_SYNTAX);
class LIBRARY_EXPORT CEssaySyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntax<ESyntaxType>, CEssaySyntax);

  CEssaySyntax();
  CEssaySyntax(C_ESSAY_SYNTAX& that);
  CEssaySyntax(C_ESSAY_SYNTAX&& that);
  explicit CEssaySyntax(ESyntaxType syntaxType,
                        int32_t liveLine = NONE_LINE,
                        C_NAMESPACE& liveNamespace = CNamespace());
  virtual ~CEssaySyntax();

  CLASS_PROPERTY(CNamespace, _liveNamespace, LiveNamespace);

  C_ESSAY_SYNTAX& operator=(C_ESSAY_SYNTAX& that);

private:
  CNamespace _liveNamespace;
};

END_DOMINION_COMPILATION_ESSAY
