//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Dependence.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
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
  Greater,
  GreaterEqual,
  NotGreater,
  Less,
  LessEqual,
  NotLessThan,

  And,
  Or,
  Xor,
  Not,
  Like,
  NotLike,
  Between,
  IsNull,
  IsNotNull
};
//*****************************************************************************************************************//
//CEOperationType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEOperationType, CE_OPERATION_TYPE);
class LIBRARY_EXPORT CEOperationType : public CEnum<EOperationType>
{
public:
  CLASS_INHERITOR(CEnum<EOperationType>, CEOperationType);

  static map<wstring, EOperationType> STRING_TO_VALUE();
  static map<EOperationType, wstring> VALUE_TO_STRING();

  CEOperationType();
  CEOperationType(CE_OPERATION_TYPE& that);
  CEOperationType(CE_OPERATION_TYPE&& that);
  explicit CEOperationType(EOperationType value);
  explicit CEOperationType(WSTRING& valueString);
  virtual ~CEOperationType();

  CE_OPERATION_TYPE& operator=(CE_OPERATION_TYPE& that);
};
//*****************************************************************************************************************//
//EJoinType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EJoinType
{
  JoinEntity = 0,
  LeftJoin,
  RightJoin
};
//*****************************************************************************************************************//
//CEJoinType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEJoinType, CE_JOIN_TYPE);
class LIBRARY_EXPORT CEJoinType : public CEnum<EJoinType>
{
public:
  CLASS_INHERITOR(CEnum<EJoinType>, CEJoinType);

  static map<wstring, EJoinType> STRING_TO_VALUE();
  static map<EJoinType, wstring> VALUE_TO_STRING();

  CEJoinType();
  CEJoinType(CE_JOIN_TYPE& that);
  CEJoinType(CE_JOIN_TYPE&& that);
  explicit CEJoinType(EJoinType value);
  explicit CEJoinType(WSTRING& valueString);
  virtual ~CEJoinType();

  CE_JOIN_TYPE& operator=(CE_JOIN_TYPE& that);
};
//*****************************************************************************************************************//
//EOrderByType
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EOrderByType
{
  Asc = 0,
  Desc
};
//*****************************************************************************************************************//
//CEOrderByType
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEOrderByType, CE_ORDER_BY_TYPE);
class LIBRARY_EXPORT CEOrderByType : public CEnum<EOrderByType>
{
public:
  CLASS_INHERITOR(CEnum<EOrderByType>, CEOrderByType);

  static map<wstring, EOrderByType> STRING_TO_VALUE();
  static map<EOrderByType, wstring> VALUE_TO_STRING();

  CEOrderByType();
  CEOrderByType(CE_ORDER_BY_TYPE& that);
  CEOrderByType(CE_ORDER_BY_TYPE&& that);
  explicit CEOrderByType(EOrderByType value);
  explicit CEOrderByType(WSTRING& valueString);
  virtual ~CEOrderByType();

  CE_ORDER_BY_TYPE& operator=(CE_ORDER_BY_TYPE& that);
};

END_DOMINION_COMPILATION_TRANSACTSQL
