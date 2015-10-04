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
//CESyntaxType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CESyntaxType, CE_SYNTAX_TYPE);
class LIBRARY_EXPORT CESyntaxType : public CEnum<ESyntaxType>
{
public:
  CLASS_INHERITOR(CEnum<ESyntaxType>, CESyntaxType);

  static map<wstring, ESyntaxType> STRING_TO_VALUE();
  static map<ESyntaxType, wstring> VALUE_TO_STRING();

  CESyntaxType();
  CESyntaxType(CE_SYNTAX_TYPE& that);
  CESyntaxType(CE_SYNTAX_TYPE&& that);
  explicit CESyntaxType(ESyntaxType value);
  explicit CESyntaxType(WSTRING& valueString);
  virtual ~CESyntaxType();

  CE_SYNTAX_TYPE& operator=(CE_SYNTAX_TYPE& that);
};

END_DOMINION_COMPILATION_TRANSACTSQL
