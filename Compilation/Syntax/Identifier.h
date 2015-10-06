//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Namespace.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
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
  explicit CIdentifier(C_NAMESPACE& _namespace_, WSTRING& name);
  virtual ~CIdentifier();
  //{CObject
  virtual wstring ToString() const override;
  //}
  CLASS_PROPERTY(CNamespace, _namespace, Namespace);
  CLASS_PROPERTY(wstring, _name, Name);

  C_IDENTIFIER& operator=(C_IDENTIFIER& that);

private:
  CNamespace _namespace;
  wstring _name;
};

END_DOMINION_COMPILATION_SYNTAX
