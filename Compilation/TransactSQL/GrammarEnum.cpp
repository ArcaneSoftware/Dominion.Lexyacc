//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "GrammarEnum.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CEFlowType
//*******************************************************************************************************************//
map<wstring, EFlowType> CEFlowType::STRING_TO_VALUE()
{
  map<wstring, EFlowType> map;

  map[L"If"] = EFlowType::If;
  map[L"While"] = EFlowType::While;

  return move(map);
}

map<EFlowType, wstring> CEFlowType::VALUE_TO_STRING()
{
  map<EFlowType, wstring> map;

  map[EFlowType::If] = L"If";
  map[EFlowType::While] = L"While";

  return move(map);
}

CEFlowType::CEFlowType()
{
}

CEFlowType::CEFlowType(C_FLOW_ENUM& that) :
  CEnum(that)
{
}

CEFlowType::CEFlowType(C_FLOW_ENUM&& that) :
  CEnum(that)
{
}

CEFlowType::CEFlowType(EFlowType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEFlowType::CEFlowType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEFlowType::~CEFlowType()
{
}

C_FLOW_ENUM& CEFlowType::operator=(C_FLOW_ENUM& that)
{
  CEnum<EFlowType>::operator=(that);

  return *this;
}
//*******************************************************************************************************************//
//CEOperationType
//*******************************************************************************************************************//
map<wstring, EOperationType> CEOperationType::STRING_TO_VALUE()
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
  map[L"Greater"] = EOperationType::Greater;
  map[L"GreaterEqual"] = EOperationType::GreaterEqual;
  map[L"NotGreater"] = EOperationType::NotGreater;
  map[L"Less"] = EOperationType::Less;
  map[L"LessEqual"] = EOperationType::LessEqual;
  map[L"NotLessThan"] = EOperationType::NotLessThan;

  map[L"AND"] = EOperationType::And;
  map[L"OR"] = EOperationType::Or;
  map[L"XOR"] = EOperationType::Xor;
  map[L"NOT"] = EOperationType::Not;
  map[L"LIKE"] = EOperationType::Like;
  map[L"NOT LIKE"] = EOperationType::NotLike;
  map[L"BETWEEN"] = EOperationType::Between;
  map[L"IS NULL"] = EOperationType::IsNull;
  map[L"IS NOT NULL"] = EOperationType::IsNotNull;

  return move(map);
}

map<EOperationType, wstring> CEOperationType::VALUE_TO_STRING()
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
  map[EOperationType::Greater] = L"Greater";
  map[EOperationType::GreaterEqual] = L"GreaterEqual";
  map[EOperationType::NotGreater] = L"NotGreater";//!>
  map[EOperationType::Less] = L"Less";
  map[EOperationType::LessEqual] = L"LessEqual";
  map[EOperationType::NotLessThan] = L"NotLessThan";//!<

  map[EOperationType::And] = L"AND";
  map[EOperationType::Or] = L"OR";
  map[EOperationType::Xor] = L"XOR";
  map[EOperationType::Not] = L"NOT";
  map[EOperationType::Like] = L"LIKE";
  map[EOperationType::NotLike] = L"NOT LIKE";
  map[EOperationType::Between] = L"BETWEEN";
  map[EOperationType::IsNull] = L"IS NULL";
  map[EOperationType::IsNotNull] = L"IS NOT NULL";

  return move(map);
}

CEOperationType::CEOperationType()
{
}

CEOperationType::CEOperationType(CE_OPERATION_TYPE& that) :
  CEnum(that)
{
}

CEOperationType::CEOperationType(CE_OPERATION_TYPE&& that) :
  CEnum(that)
{
}

CEOperationType::CEOperationType(EOperationType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOperationType::CEOperationType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOperationType::~CEOperationType()
{
}

CE_OPERATION_TYPE& CEOperationType::operator=(CE_OPERATION_TYPE& that)
{
  CEnum<EOperationType>::operator=(that);

  return *this;
}
//*******************************************************************************************************************//
//CEJoinType
//*******************************************************************************************************************//
map<wstring, EJoinType> CEJoinType::STRING_TO_VALUE()
{
  map<wstring, EJoinType> map;

  map[L"JoinEntity"] = EJoinType::JoinEntity;
  map[L"LeftJoin"] = EJoinType::LeftJoin;
  map[L"RightJoin"] = EJoinType::RightJoin;

  return move(map);
}

map<EJoinType, wstring> CEJoinType::VALUE_TO_STRING()
{
  map<EJoinType, wstring> map;

  map[EJoinType::JoinEntity] = L"JoinEntity";
  map[EJoinType::LeftJoin] = L"LeftJoin";
  map[EJoinType::RightJoin] = L"RightJoin";

  return move(map);
}

CEJoinType::CEJoinType()
{
}

CEJoinType::CEJoinType(CE_JOIN_TYPE& that) :
  CEnum(that)
{
}

CEJoinType::CEJoinType(CE_JOIN_TYPE&& that) :
  CEnum(that)
{
}

CEJoinType::CEJoinType(EJoinType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEJoinType::CEJoinType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEJoinType::~CEJoinType()
{
}

CE_JOIN_TYPE& CEJoinType::operator=(CE_JOIN_TYPE& that)
{
  CEnum<EJoinType>::operator=(that);

  return *this;
}
//*******************************************************************************************************************//
//CEOrderByType
//*******************************************************************************************************************//
map<wstring, EOrderByType> CEOrderByType::STRING_TO_VALUE()
{
  map<wstring, EOrderByType> map;

  map[L"Asc"] = EOrderByType::Asc;
  map[L"Desc"] = EOrderByType::Desc;

  return move(map);
}

map<EOrderByType, wstring> CEOrderByType::VALUE_TO_STRING()
{
  map<EOrderByType, wstring> map;

  map[EOrderByType::Asc] = L"Asc";
  map[EOrderByType::Desc] = L"Desc";

  return move(map);
}

CEOrderByType::CEOrderByType()
{
}

CEOrderByType::CEOrderByType(CE_ORDER_BY_TYPE& that) :
  CEnum(that)
{
}

CEOrderByType::CEOrderByType(CE_ORDER_BY_TYPE&& that) :
  CEnum(that)
{
}

CEOrderByType::CEOrderByType(EOrderByType value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOrderByType::CEOrderByType(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEOrderByType::~CEOrderByType()
{
}

CE_ORDER_BY_TYPE& CEOrderByType::operator=(CE_ORDER_BY_TYPE& that)
{
  CEnum<EOrderByType>::operator=(that);

  return *this;
}
