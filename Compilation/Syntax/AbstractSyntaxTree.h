//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Namespace.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//CAbstractSyntaxTree
//
//*****************************************************************************************************************//
template<typename TESyntaxType>
class LIBRARY_EXPORT CAbstractSyntaxTree : public CObject
{
public:
  TYPEDEF(CAbstractSyntaxTree<TESyntaxType>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);
  typedef const TESyntaxType TE_SYNTAX_TYPE;

  CAbstractSyntaxTree() :
    _liveLine(NONE_LINE)
  {
  }

  CAbstractSyntaxTree(CLASS& that) :
    CObject(that),
    _syntaxType(that._syntaxType),
    _liveLine(that._liveLine),
    _liveNamespace(that._liveNamespace)
  {
  }

  CAbstractSyntaxTree(CLASS&& that) :
    CObject(that),
    _syntaxType(move(that._syntaxType)),
    _liveLine(move(that._liveLine)),
    _liveNamespace(move(that._liveNamespace))
  {
  }

  explicit CAbstractSyntaxTree(TESyntaxType syntaxType,
                               int32_t liveLine = NONE_LINE,
                               C_NAMESPACE& liveNamespace = CNamespace()) :
    _syntaxType(syntaxType),
    _liveLine(liveLine),
    _liveNamespace(liveNamespace)
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
  CLASS_PROPERTY(TESyntaxType, _syntaxType, SyntaxType);
  CLASS_PROPERTY(int32_t, _liveLine, LiveLine);
  CLASS_PROPERTY(CNamespce, _liveNamespace, LiveNamespace);

  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _syntaxType = that._syntaxType;
    _liveLine = that._liveLine;
    _liveNamespace = that._liveNamespace;

    return *this;
  }

private:
  TESyntaxType _syntaxType;
  int32_t _liveLine;
  CNamespace _liveNamespace;
};

END_DOMINION_COMPILATION_SYNTAX

