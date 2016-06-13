//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/SyntaxType.h"
#include "Compilation/Essay/Engine/Contextual.h"

BEGIN_DOMINION_COMPILATION_ESSAY
typedef function<wstring(WSTRING&)> FToContextKey;
//*****************************************************************************************************************//
//CBaseSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CBaseSyntax, C_BASE_SYNTAX);
class LIBRARY_EXPORT CBaseSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CBaseSyntax);

protected:
  CBaseSyntax();
  CBaseSyntax(C_BASE_SYNTAX& that);
  CBaseSyntax(C_BASE_SYNTAX&& that);
  explicit CBaseSyntax(ESyntaxType syntaxType, int32_t liveLine = NONE_LINE, C_NAMESPACE& liveNamespace = CNamespace());
public:
  virtual ~CBaseSyntax();

public:
  virtual CScalar Reduce(IContextual<ESyntaxType>& context) const;

public:
  C_BASE_SYNTAX& operator=(C_BASE_SYNTAX& that);

private:
};

END_DOMINION_COMPILATION_ESSAY
