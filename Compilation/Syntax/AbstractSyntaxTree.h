//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
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
    _liveLine(NONE_LINE)
  {
  }

  CAbstractSyntaxTree(CLASS& that) :
    CObject(that),
    _syntaxType(that._syntaxType),
    _liveLine(that._liveLine)
  {
  }

  CAbstractSyntaxTree(CLASS&& that) :
    CObject(that),
    _syntaxType(move(that._syntaxType)),
    _liveLine(move(that._liveLine))
  {
  }

  explicit CAbstractSyntaxTree(TESyntax syntaxType, int32_t liveLine = NONE_LINE) :
    _syntaxType(syntaxType),
    _liveLine(liveLine)
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
  CLASS_PROPERTY(int32_t, _liveLine, LiveLine);

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _syntaxType = that._syntaxType;
    _liveLine = that._liveLine;

    return *this;
  }

private:
  TESyntax _syntaxType;
  int32_t _liveLine;
};

END_DOMINION_COMPILATION_SYNTAX

