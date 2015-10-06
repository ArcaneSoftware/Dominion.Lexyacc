//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ASTEnum.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CASTTypeEnum
//*******************************************************************************************************************//
map<wstring, ESyntaxType> CASTTypeEnum::STRING_TO_VALUE()
{
  map<wstring, ESyntaxType> map;

  map[NSTR] = ESyntaxType::Empty;
  map[L"Constant"] = ESyntaxType::Constant;
  map[L"Variable"] = ESyntaxType::Variable;
  map[L"Function"] = ESyntaxType::Function;
  map[L"Chain"] = ESyntaxType::Chain;
  map[L"Operation"] = ESyntaxType::Operation;
  map[L"Case"] = ESyntaxType::Case;
  map[L"When"] = ESyntaxType::When;
  map[L"VariableDefinition"] = ESyntaxType::VariableDefinition;
  map[L"Argument"] = ESyntaxType::Argument;
  map[L"FieldAlias"] = ESyntaxType::FieldAlias;
  map[L"AssignedField"] = ESyntaxType::AssignedField;
  map[L"SelectedField"] = ESyntaxType::SelectedField;
  map[L"OrderedField"] = ESyntaxType::OrderedField;
  map[L"JoinEntity"] = ESyntaxType::JoinEntity;
  map[L"Flow"] = ESyntaxType::Flow;
  map[L"Top"] = ESyntaxType::Top;
  map[L"AssignVariable"] = ESyntaxType::AssignVariable;
  map[L"DeclareVariables"] = ESyntaxType::DeclareVariables;
  map[L"CreateProcedure"] = ESyntaxType::CreateProcedure;
  map[L"Exec"] = ESyntaxType::ExecProcedure;
  map[L"Select"] = ESyntaxType::SelectEntity;
  map[L"Block"] = ESyntaxType::Block;

  return move(map);
}

map<ESyntaxType, wstring> CASTTypeEnum::VALUE_TO_STRING()
{
  map<ESyntaxType, wstring> map;

  map[ESyntaxType::Empty] = NSTR;
  map[ESyntaxType::Constant] = L"Constant";
  map[ESyntaxType::Variable] = L"Variable";
  map[ESyntaxType::Function] = L"Function";
  map[ESyntaxType::Chain] = L"Chain";
  map[ESyntaxType::Operation] = L"Operation";
  map[ESyntaxType::Case] = L"Case";
  map[ESyntaxType::When] = L"When";
  map[ESyntaxType::VariableDefinition] = L"VariableDefinition";
  map[ESyntaxType::Argument] = L"Argument";
  map[ESyntaxType::FieldAlias] = L"FieldAlias";
  map[ESyntaxType::AssignedField] = L"AssignedField";
  map[ESyntaxType::SelectedField] = L"SelectedField";
  map[ESyntaxType::OrderedField] = L"OrderedField";
  map[ESyntaxType::JoinEntity] = L"JoinEntity";
  map[ESyntaxType::Top] = L"Top";
  map[ESyntaxType::Flow] = L"Flow";
  map[ESyntaxType::AssignVariable] = L"AssignVariable";
  map[ESyntaxType::DeclareVariables] = L"DeclareVariables";
  map[ESyntaxType::CreateProcedure] = L"CreateProcedure";
  map[ESyntaxType::ExecProcedure] = L"ExecProcedure";
  map[ESyntaxType::SelectEntity] = L"SelectEntity";
  map[ESyntaxType::Block] = L"Block";

  return move(map);
}

CASTTypeEnum::CASTTypeEnum()
{
}

CASTTypeEnum::CASTTypeEnum(C_AST_TYPE_ENUM& that) :
  CEnum(that)
{
}

CASTTypeEnum::CASTTypeEnum(C_AST_TYPE_ENUM&& that) :
  CEnum(that)
{
}

CASTTypeEnum::CASTTypeEnum(ESyntaxType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CASTTypeEnum::CASTTypeEnum(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CASTTypeEnum::~CASTTypeEnum()
{
}

C_AST_TYPE_ENUM& CASTTypeEnum::operator=(C_AST_TYPE_ENUM& that)
{
  CEnum<ESyntaxType>::operator=(that);

  return *this;
}
