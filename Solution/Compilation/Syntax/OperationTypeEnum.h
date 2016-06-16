//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//***********************************************************************************************************************************************************************************//
//EOperationType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT EOperationType
{
  Empty = 0,
  Add,
  Subtract,
  Multiply,
  Divide,
  Modulo,
  Equal,
  NotEqual,
  Match,
  NotMatch,
  Greater,
  GreaterEqual,
  Less,
  LessEqual,
  And,
  Or,
  Xor,
  Not,
};
//***********************************************************************************************************************************************************************************//
//COperationTypeEnum
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(COperationTypeEnum, C_OPERATION_TYPE_ENUM);
class LIBRARY_EXPORT COperationTypeEnum : public CEnum<EOperationType>
{
public:
  CLASS_INHERITOR(CEnum<EOperationType>, COperationTypeEnum);

  static map<wstring, EOperationType> STRING_TO_VALUE()
  {
    map<wstring, EOperationType> map;

    map[NSTR] = EOperationType::Empty;
    map[L"Add"] = EOperationType::Add;
    map[L"Subtract"] = EOperationType::Subtract;
    map[L"Multiply"] = EOperationType::Multiply;
    map[L"Divide"] = EOperationType::Divide;
    map[L"Modulo"] = EOperationType::Modulo;
    map[L"Equal"] = EOperationType::Equal;
    map[L"NotEqual"] = EOperationType::NotEqual;
    map[L"Match"] = EOperationType::Match;
    map[L"NotMatch"] = EOperationType::NotMatch;
    map[L"Greater"] = EOperationType::Greater;
    map[L"GreaterEqual"] = EOperationType::GreaterEqual;
    map[L"Less"] = EOperationType::Less;
    map[L"LessEqual"] = EOperationType::LessEqual;
    map[L"And"] = EOperationType::And;
    map[L"Or"] = EOperationType::Or;
    map[L"Xor"] = EOperationType::Xor;
    map[L"Not"] = EOperationType::Not;

    return move(map);
  }

  static map<EOperationType, wstring> VALUE_TO_STRING()
  {
    map<EOperationType, wstring> map;

    map[EOperationType::Empty] = NSTR;
    map[EOperationType::Add] = L"Add";
    map[EOperationType::Subtract] = L"Subtract";
    map[EOperationType::Multiply] = L"Multiply";
    map[EOperationType::Divide] = L"Divide";
    map[EOperationType::Modulo] = L"Modulo";
    map[EOperationType::Equal] = L"Equal";
    map[EOperationType::NotEqual] = L"NotEqual";
    map[EOperationType::Match] = L"Match";
    map[EOperationType::NotMatch] = L"NotMatch";
    map[EOperationType::Greater] = L"Greater";
    map[EOperationType::GreaterEqual] = L"GreaterEqual";
    map[EOperationType::Less] = L"Less";
    map[EOperationType::LessEqual] = L"LessEqual";
    map[EOperationType::And] = L"And";
    map[EOperationType::Or] = L"Or";
    map[EOperationType::Xor] = L"Xor";
    map[EOperationType::Not] = L"Not";

    return move(map);
  }

  ENUM_CLASS_IMPLEMENT(COperationTypeEnum, EOperationType);
};

END_DOMINION_COMPILATION_SYNTAX
