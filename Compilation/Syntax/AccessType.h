//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//EAccessType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EAccessType
{
  Private = 0,
  Public = 1,
};
//*****************************************************************************************************************//
//CAccessTypeEnum
//
//*****************************************************************************************************************//
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
END_DOMINION_COMPILATION_SYNTAX
