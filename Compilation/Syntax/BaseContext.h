//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/AbstractSyntaxTree.h"
#include "Dominion/Compilation/Syntax/Variable.h"


BEGIN_DOMINION_COMPILATION_SYNTAX
typedef function<wstring(WSTRING&)> FToContextKey;
//*****************************************************************************************************************//
//CBaseContext
//
//*****************************************************************************************************************//
template<typename TESyntaxType>
class LIBRARY_EXPORT CBaseContext : public CObject
{
public:
  static wstring DEFAULT_TO_KEY(WSTRING& input)
  {
    return input;
  }

public:
  TYPEDEF(CBaseContext<TESyntaxType>, Class, CLASS);
  CLASS_INHERITOR(CObject, Class);

protected:
  CBaseContext() :
    _ToKey(DEFAULT_TO_KEY),
    _entryID(NONE_ID)
  {
  }

  CBaseContext(CLASS& that) :
    CObject(that),
    _ToKey(that._ToKey),
    _entryID(that._entryID)
  {
  }

  CBaseContext(CLASS&& that) :
    CObject(that),
    _ToKey(move(that._ToKey)),
    _entryID(move(that._entryID))
  {
  }

  CBaseContext(FToContextKey ToKey) :
    _ToKey(ToKey),
    _entryID(NONE_ID)
  {
  }

public:
  virtual ~CBaseContext()
  {
  }

public:
  CLASS_PROPERTY(int32_t, _entryID, EntryID);

  FToContextKey ToKey()
  {
    return _ToKey;
  }

public:
  virtual void DefineVariable(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t initialValueID)
  {
    throw CAbstractMethodException(THIS_SCENE(L"DefineVariable"));
  }

  virtual void DefineFunction(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t parameterChainID,
                              int32_t blockID)
  {
    throw CAbstractMethodException(THIS_SCENE(L"DefineFunction"));
  }

  virtual bool HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"HasDefinedIdentifier"));

    return false;
  }

  virtual bool HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"HasDefinedIdentifier"));

    return false;
  }

  virtual bool ExistSyntax(int32_t syntaxID) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"ExistSyntax"));

    return false;
  }

  virtual shared_ptr<CAbstractSyntaxTree<TESyntaxType>> GetSyntax(int32_t id) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"GetSyntax"));

    return shared_ptr<CAbstractSyntaxTree<TESyntaxType>>(nullptr);
  }

  virtual int32_t AppendSyntax(CAbstractSyntaxTree<TESyntaxType>* syntax)
  {
    throw CAbstractMethodException(THIS_SCENE(L"AppendSyntax"));

    return NONE_ID;
  }

  virtual CVariable GetVariable(WSTRING& identifier) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"GetVariable"));

    return CVariable();
  }

  virtual CVariable GetVariable(C_IDENTIFIER& identifier) const
  {
    throw CAbstractMethodException(THIS_SCENE(L"GetVariable"));

    return CVariable();
  }

  virtual void SetVariableValue(WSTRING& identifier, int valueID)
  {
    throw CAbstractMethodException(THIS_SCENE(L"SetVariableValue"));
  }

  virtual void SetVariableValue(C_IDENTIFIER& identifier, int valueID)
  {
    throw CAbstractMethodException(THIS_SCENE(L"SetVariableValue"));
  }

public:
  CLASS& operator=(CLASS& that)
  {
    CObject::operator=(that);

    _ToKey = that._ToKey;
    _entryID = that._entryID;

    return *this;
  }

protected:
  FToContextKey _ToKey;
  int32_t _entryID;
};

END_DOMINION_COMPILATION_SYNTAX
