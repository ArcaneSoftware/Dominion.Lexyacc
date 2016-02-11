//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Dependence.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//EFlowType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EFlowType
{
  If = 0,
  While
};
//*****************************************************************************************************************//
//CFlowTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CFlowTypeEnum, C_FLOW_TYPE_ENUM);
class LIBRARY_EXPORT CFlowTypeEnum : public CEnum<EFlowType>
{
public:
  CLASS_INHERITOR(CEnum<EFlowType>, CFlowTypeEnum);

  static map<wstring, EFlowType> STRING_TO_VALUE();
  static map<EFlowType, wstring> VALUE_TO_STRING();

  CFlowTypeEnum();
  CFlowTypeEnum(C_FLOW_TYPE_ENUM& that);
  CFlowTypeEnum(C_FLOW_TYPE_ENUM&& that);
  explicit CFlowTypeEnum(EFlowType value);
  explicit CFlowTypeEnum(WSTRING& valueString);
  virtual ~CFlowTypeEnum();

  C_FLOW_TYPE_ENUM& operator=(C_FLOW_TYPE_ENUM& that);
};
//*****************************************************************************************************************//
//EOperationType
//
//*****************************************************************************************************************//
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
//*****************************************************************************************************************//
//COperationTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(COperationTypeEnum, C_OPERATION_TYPE_ENUM);
class LIBRARY_EXPORT COperationTypeEnum : public CEnum<EOperationType>
{
public:
  CLASS_INHERITOR(CEnum<EOperationType>, COperationTypeEnum);

  static map<wstring, EOperationType> STRING_TO_VALUE();
  static map<EOperationType, wstring> VALUE_TO_STRING();

  COperationTypeEnum();
  COperationTypeEnum(C_OPERATION_TYPE_ENUM& that);
  COperationTypeEnum(C_OPERATION_TYPE_ENUM&& that);
  explicit COperationTypeEnum(EOperationType value);
  explicit COperationTypeEnum(WSTRING& valueString);
  virtual ~COperationTypeEnum();

  C_OPERATION_TYPE_ENUM& operator=(C_OPERATION_TYPE_ENUM& that);
};
//*****************************************************************************************************************//
//EVariableType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EVariableType
{
  Atom,
  Object,
};

END_DOMINION_COMPILATION_ESSAY
