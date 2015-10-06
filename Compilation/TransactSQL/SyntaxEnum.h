//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Dependence.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//ESyntaxType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT ESyntaxType
{
  Empty = 0,
  //Reference
  Constant,
  Variable,
  Function,
  //Components
  Chain,
  Operation,
  Case,
  When,
  VariableDefinition,
  Argument,
  FieldAlias,
  AssignedField,
  SelectedField,
  OrderedField,
  JoinEntity,
  Top,
  //Statement
  Flow,
  AssignVariable,
  DeclareVariables,
  CreateProcedure,
  ExecProcedure,
  SelectEntity,
  Block,
};
//*****************************************************************************************************************//
//CASTTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CASTTypeEnum, C_AST_TYPE_ENUM);
class LIBRARY_EXPORT CASTTypeEnum : public CEnum<ESyntaxType>
{
public:
  CLASS_INHERITOR(CEnum<ESyntaxType>, CASTTypeEnum);

  static map<wstring, ESyntaxType> STRING_TO_VALUE();
  static map<ESyntaxType, wstring> VALUE_TO_STRING();

  CASTTypeEnum();
  CASTTypeEnum(C_AST_TYPE_ENUM& that);
  CASTTypeEnum(C_AST_TYPE_ENUM&& that);
  explicit CASTTypeEnum(ESyntaxType value);
  explicit CASTTypeEnum(WSTRING& valueString);
  virtual ~CASTTypeEnum();

  C_AST_TYPE_ENUM& operator=(C_AST_TYPE_ENUM& that);
};

END_DOMINION_COMPILATION_TRANSACTSQL
