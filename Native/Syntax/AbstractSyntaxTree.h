//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/Syntax/Dependence.h"

BEGIN_DOMINION_SYNTAX
//*****************************************************************************************************************//
//CAbstractSyntaxTree
//
//*****************************************************************************************************************//
template<typename TESyntax>
class LIBRARY_EXPORT CAbstractSyntaxTree : public CObject
{
public:
  TYPEDEF(CAbstractSyntaxTree<TESyntax>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);
  typedef const TESyntax T_SYNTAX_TYPE;

  CAbstractSyntaxTree() :
    _livingLine(NIL_LINE)
  {
  }

  CAbstractSyntaxTree(CLASS& that) :
    CObject(that),
    _syntaxType(that._syntaxType),
    _livingLine(that._livingLine)
  {
  }

  CAbstractSyntaxTree(CLASS&& that) :
    CObject(that),
    _syntaxType(move(that._syntaxType)),
    _livingLine(move(that._livingLine))
  {
  }

  explicit CAbstractSyntaxTree(TESyntax syntaxType, int32_t livingLine = NIL_LINE) :
    _syntaxType(syntaxType),
    _livingLine(livingLine)
  {
  }

  virtual ~CAbstractSyntaxTree()
  {
  }
  //{
  virtual wstring Naming() const
  {
    return NSTR;
  }
  //}
  CLASS_PROPERTY(TESyntax, _syntaxType, SyntaxType);
  CLASS_PROPERTY(int32_t, _livingLine, LivingLine);

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _syntaxType = that._syntaxType;
    _livingLine = that._livingLine;

    return *this;
  }

private:
  TESyntax _syntaxType;
  int32_t _livingLine;
};

END_DOMINION_SYNTAX

