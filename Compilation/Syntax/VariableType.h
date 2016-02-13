//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//EVariableType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EVariableType
{
  Atom,
  Object,
};
//*****************************************************************************************************************//
//CVariableTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CVariableTypeEnum, C_VARIABLE_TYPE_ENUM);
class LIBRARY_EXPORT CVariableTypeEnum : public CEnum<EVariableType>
{
public:
  CLASS_INHERITOR(CEnum<EVariableType>, CVariableTypeEnum);

  static map<wstring, EVariableType> STRING_TO_VALUE();
  static map<EVariableType, wstring> VALUE_TO_STRING();

  CVariableTypeEnum();
  CVariableTypeEnum(C_VARIABLE_TYPE_ENUM& that);
  CVariableTypeEnum(C_VARIABLE_TYPE_ENUM&& that);
  explicit CVariableTypeEnum(EVariableType value);
  explicit CVariableTypeEnum(WSTRING& valueString);
  virtual ~CVariableTypeEnum();

  C_VARIABLE_TYPE_ENUM& operator=(C_VARIABLE_TYPE_ENUM& that);
};
END_DOMINION_COMPILATION_SYNTAX
