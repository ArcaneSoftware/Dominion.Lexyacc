//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/SyntaxType.h"
#include "Compilation/Essay/Engine/Contextual.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToContextKey;
//***********************************************************************************************************************************************************************************//
//CReducibleSyntax
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CReducibleSyntax, C_BASE_SYNTAX);
class LIBRARY_EXPORT CReducibleSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CReducibleSyntax);

protected:
  CReducibleSyntax();
  CReducibleSyntax(C_BASE_SYNTAX& that);
  CReducibleSyntax(C_BASE_SYNTAX&& that);
  explicit CReducibleSyntax(ESyntaxType syntaxType, int32_t liveLine = NONE_LINE, C_NAMESPACE& liveNamespace = CNamespace());
public:
  virtual ~CReducibleSyntax();
  //{
  virtual CScalar Reduce(IContextual<ESyntaxType, CReducibleSyntax>& context) const throw();
  //}
  //{
  C_BASE_SYNTAX& operator=(C_BASE_SYNTAX& that);
  //}
};

END_DOMINION_COMPILATION_ESSAY
