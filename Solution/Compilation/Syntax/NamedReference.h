//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Identifier.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//EAccessType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT EAccessType
{
  Private = 0,
  Public = 1,
};
//***********************************************************************************************************************************************************************************//
//CAccessTypeEnum
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CAccessTypeEnum, C_ACCESS_TYPE_ENUM);
class LIBRARY_EXPORT CAccessTypeEnum : public CEnum<EAccessType>
{
public:
  CLASS_INHERITOR(CEnum<EAccessType>, CAccessTypeEnum);

  static map<wstring, EAccessType> STRING_TO_VALUE();
  static map<EAccessType, wstring> VALUE_TO_STRING();

  CAccessTypeEnum();
  CAccessTypeEnum(C_ACCESS_TYPE_ENUM& that);
  CAccessTypeEnum(C_ACCESS_TYPE_ENUM&& that);
  explicit CAccessTypeEnum(EAccessType value);
  explicit CAccessTypeEnum(WSTRING& valueString);
  virtual ~CAccessTypeEnum();

  C_ACCESS_TYPE_ENUM& operator=(C_ACCESS_TYPE_ENUM& that);
};
//***********************************************************************************************************************************************************************************//
//CNamedReference
//
//***********************************************************************************************************************************************************************************//
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
