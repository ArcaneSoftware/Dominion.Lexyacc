//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//ESyntaxType
//
//***********************************************************************************************************************************************************************************//
enum class LIBRARY_EXPORT ESyntaxType
{
  Empty = 0,
  //Reference
  Scalar,
  Variable,
  Function,
  //Composition
  Chain,
  Operation,
  Parameter,
  Argurment,
  //Statement
  Block,
  Flow,
  DefineVariable,
  AssignVariable,
  DefineFunction,
  Return,
};
//***********************************************************************************************************************************************************************************//
//CSyntaxTypeEnum
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CSyntaxTypeEnum, CE_SYNTAX_TYPE);
class LIBRARY_EXPORT CSyntaxTypeEnum : public CEnum<ESyntaxType>
{
public:
  CLASS_INHERITOR(CEnum<ESyntaxType>, CSyntaxTypeEnum);

  static map<wstring, ESyntaxType> STRING_TO_VALUE()
  {
    map<wstring, ESyntaxType> map;

    map[NSTR] = ESyntaxType::Empty;
    map[L"Scalar"] = ESyntaxType::Scalar;
    map[L"Variable"] = ESyntaxType::Variable;
    map[L"Function"] = ESyntaxType::Function;
    map[L"Chain"] = ESyntaxType::Chain;
    map[L"Operation"] = ESyntaxType::Operation;
    map[L"Parameter"] = ESyntaxType::Parameter;
    map[L"Argurment"] = ESyntaxType::Argurment;
    map[L"Block"] = ESyntaxType::Block;
    map[L"Flow"] = ESyntaxType::Flow;
    map[L"DefineVariable"] = ESyntaxType::DefineVariable;
    map[L"AssignVariable"] = ESyntaxType::AssignVariable;
    map[L"DefineFunction"] = ESyntaxType::DefineFunction;
    map[L"Return"] = ESyntaxType::Return;

    return move(map);
  }

  static map<ESyntaxType, wstring> VALUE_TO_STRING()
  {
    map<ESyntaxType, wstring> map;

    map[ESyntaxType::Empty] = NSTR;
    map[ESyntaxType::Scalar] = L"Scalar";
    map[ESyntaxType::Variable] = L"Variable";
    map[ESyntaxType::Function] = L"Function";
    map[ESyntaxType::Chain] = L"Chain";
    map[ESyntaxType::Operation] = L"Operation";
    map[ESyntaxType::Parameter] = L"Parameter";
    map[ESyntaxType::Argurment] = L"Argurment";
    map[ESyntaxType::Block] = L"Block";
    map[ESyntaxType::Flow] = L"Flow";
    map[ESyntaxType::DefineVariable] = L"DefineVariable";
    map[ESyntaxType::AssignVariable] = L"AssignVariable";
    map[ESyntaxType::DefineFunction] = L"DefineFunction";
    map[ESyntaxType::Return] = L"Return";

    return move(map);
  }

  ENUM_CLASS_IMPLEMENT(CSyntaxTypeEnum, ESyntaxType);
};



END_DOMINION_COMPILATION_ESSAY
