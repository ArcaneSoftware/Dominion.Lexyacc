//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/NamedReference.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//EVariableType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT EVariableType
{
  Atom,
  Object,
};
//***********************************************************************************************************************************************************************************//
//CVariableTypeEnum
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CVariableTypeEnum, C_VARIABLE_TYPE_ENUM);
class LIBRARY_EXPORT CVariableTypeEnum : public CEnum<EVariableType>
{
public:
  CLASS_INHERITOR(CEnum<EVariableType>, CVariableTypeEnum);

  static map<wstring, EVariableType> STRING_TO_VALUE()
  {
    map<wstring, EVariableType> map;

    map[L"Atom"] = EVariableType::Atom;
    map[L"Object"] = EVariableType::Object;

    return move(map);
  }

  static map<EVariableType, wstring> VALUE_TO_STRING()
  {
    map<EVariableType, wstring> map;

    map[EVariableType::Atom] = L"Atom";
    map[EVariableType::Object] = L"Object";

    return move(map);
  }

  ENUM_CLASS_IMPLEMENT(CVariableTypeEnum, EVariableType);
};
//***********************************************************************************************************************************************************************************//
//CRowVariable
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CRowVariable, C_ROW_VARIABLE);
class LIBRARY_EXPORT CRowVariable : public CNamedReference
{
public:
  CLASS_INHERITOR(CNamedReference, CRowVariable);

  CRowVariable();
  CRowVariable(C_ROW_VARIABLE& that);
  CRowVariable(C_ROW_VARIABLE&& that);
  CRowVariable(EAccessType access, C_IDENTIFIER& identifier, int32_t initialValueID = NONE_ID, int32_t realValueID = NONE_ID, bool isArgument = false);
  virtual ~CRowVariable();

  bool IsNilValue() const;
  int32_t GetSuitedValueIndex() const;

  CLASS_PROPERTY(int32_t, _initialValueID, InitialValueID);
  CLASS_PROPERTY(int32_t, _realValueID, RealValueID);
  CLASS_PROPERTY(bool, _isArgument, IsArgument);

  C_ROW_VARIABLE& operator=(C_ROW_VARIABLE& that);
  C_ROW_VARIABLE& operator=(C_ROW_VARIABLE&& that);

private:
  int32_t _initialValueID;
  int32_t _realValueID;
  bool _isArgument;
};

END_DOMINION_COMPILATION_SYNTAX
