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
  explicit CNamedReference(EAccessType accessType, C_IDENTIFIER& identifier);
  virtual ~CNamedReference();

  bool IsAvailable() const;

  CLASS_PROPERTY(EAccessType, _accessType, AccessType);
  CLASS_PROPERTY(CIdentifier, _identifier, Identifier);

  C_NAMED_REFERENCE& operator=(C_NAMED_REFERENCE& that);

private:
  EAccessType _accessType;
  CIdentifier _identifier;
};

END_DOMINION_COMPILATION_SYNTAX
