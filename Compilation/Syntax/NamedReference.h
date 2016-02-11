//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Identifier.h"
#include "Dominion/Compilation/Syntax/AccessType.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//****************************************************************************************************************//
//CNamedReference
//
//****************************************************************************************************************//
CLASS_DECLARATION(CNamedReference, C_NAMED_REFERENCE);
class LIBRARY_EXPORT CNamedReference : public CObject
{
public:
  CLASS_INHERITOR(CObject, CNamedReference);

  CNamedReference();
  CNamedReference(C_NAMED_REFERENCE& that);
  CNamedReference(C_NAMED_REFERENCE&& that);
  explicit CNamedReference(EAccessType access, C_IDENTIFIER& identifier);
  virtual ~CNamedReference();

  CLASS_PROPERTY(EAccessType, _access, Access);
  CLASS_PROPERTY(CIdentifier, _identifier, Identifier);

  C_NAMED_REFERENCE& operator=(C_NAMED_REFERENCE& that);

private:
  EAccessType _access;
  CIdentifier _identifier;
};

END_DOMINION_COMPILATION_SYNTAX
