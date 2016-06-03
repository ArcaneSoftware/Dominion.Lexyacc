//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Namespace.h"

BEGIN_DOMINION_COMPILATION_SYNTAX

//*****************************************************************************************************************//
//EIdentifierType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EIdentifierType
{
  Variable,
  Function,
};
//*****************************************************************************************************************//
//CIdentifier
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CIdentifier, C_IDENTIFIER);
class LIBRARY_EXPORT CIdentifier : public CObject
{
public:
  CLASS_INHERITOR(CObject, CIdentifier);

  CIdentifier();
  CIdentifier(C_IDENTIFIER& that);
  CIdentifier(C_IDENTIFIER&& that);
  explicit CIdentifier(WSTRING& fullName);
  explicit CIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name);
  virtual ~CIdentifier();

protected:
  void Construct(WSTRING& fullName);

public:
  //{CObject
  virtual wstring ToString() const override;
  //}

  bool HasNamespace() const;

  CLASS_PROPERTY(CNamespace, _liveNamespace, LiveNamespace);
  CLASS_PROPERTY(wstring, _name, Name);

  C_IDENTIFIER& operator=(C_IDENTIFIER& that);

private:
  CNamespace _liveNamespace;
  wstring _name;
};

END_DOMINION_COMPILATION_SYNTAX
