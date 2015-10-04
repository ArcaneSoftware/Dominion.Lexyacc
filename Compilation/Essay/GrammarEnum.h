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
//CEFlowType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEFlowType, C_FLOW_ENUM);
class LIBRARY_EXPORT CEFlowType : public CEnum<EFlowType>
{
public:
  CLASS_INHERITOR(CEnum<EFlowType>, CEFlowType);

  static map<wstring, EFlowType> STRING_TO_VALUE();
  static map<EFlowType, wstring> VALUE_TO_STRING();

  CEFlowType();
  CEFlowType(C_FLOW_ENUM& that);
  CEFlowType(C_FLOW_ENUM&& that);
  explicit CEFlowType(EFlowType value);
  explicit CEFlowType(WSTRING& valueString);
  virtual ~CEFlowType();

  C_FLOW_ENUM& operator=(C_FLOW_ENUM& that);
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
//CEOperationType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEOperationType, C_OPERATION_ENUM);
class LIBRARY_EXPORT CEOperationType : public CEnum<EOperationType>
{
public:
  CLASS_INHERITOR(CEnum<EOperationType>, CEOperationType);

  static map<wstring, EOperationType> STRING_TO_VALUE();
  static map<EOperationType, wstring> VALUE_TO_STRING();

  CEOperationType();
  CEOperationType(C_OPERATION_ENUM& that);
  CEOperationType(C_OPERATION_ENUM&& that);
  explicit CEOperationType(EOperationType value);
  explicit CEOperationType(WSTRING& valueString);
  virtual ~CEOperationType();

  C_OPERATION_ENUM& operator=(C_OPERATION_ENUM& that);
};

END_DOMINION_COMPILATION_ESSAY
