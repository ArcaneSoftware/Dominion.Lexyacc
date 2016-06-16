//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//EFlowType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT EFlowType
{
  If = 0,
  While
};
//***********************************************************************************************************************************************************************************//
//CFlowTypeEnum
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CFlowTypeEnum, C_FLOW_TYPE_ENUM);
class LIBRARY_EXPORT CFlowTypeEnum : public CEnum<EFlowType>
{
public:
  CLASS_INHERITOR(CEnum<EFlowType>, CFlowTypeEnum);

  static map<wstring, EFlowType> STRING_TO_VALUE()
  {
    map<wstring, EFlowType> map;

    map[L"If"] = EFlowType::If;
    map[L"While"] = EFlowType::While;

    return move(map);
  }

  static map<EFlowType, wstring> VALUE_TO_STRING()
  {
    map<EFlowType, wstring> map;

    map[EFlowType::If] = L"If";
    map[EFlowType::While] = L"While";

    return move(map);
  }

  ENUM_CLASS_IMPLEMENT(CFlowTypeEnum, EFlowType);
};

END_DOMINION_COMPILATION_ESSAY
