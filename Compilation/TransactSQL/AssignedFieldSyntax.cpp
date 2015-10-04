//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "AssignedFieldSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CAssignedFieldSyntax
//*******************************************************************************************************************//
CAssignedFieldSyntax::CAssignedFieldSyntax() :
  CTransactSQLSyntax(ESyntaxType::AssignedField)
{
}

CAssignedFieldSyntax::CAssignedFieldSyntax(C_ASSIGNED_FIELD_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _variableName(that._variableName),
  _fieldName(that._fieldName)
{
}

CAssignedFieldSyntax::CAssignedFieldSyntax(C_ASSIGNED_FIELD_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _variableName(move(that._variableName)),
  _fieldName(move(that._fieldName))
{
}

CAssignedFieldSyntax::CAssignedFieldSyntax(int32_t livingLine, WSTRING& variableName, WSTRING& fieldName) :
  CTransactSQLSyntax(ESyntaxType::AssignedField, livingLine),
  _variableName(variableName),
  _fieldName(fieldName)
{
}

CAssignedFieldSyntax::~CAssignedFieldSyntax()
{
}

C_ASSIGNED_FIELD_SYNTAX& CAssignedFieldSyntax::operator=(C_ASSIGNED_FIELD_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);
  _variableName = that._variableName;
  _fieldName = that._fieldName;
  return *this;
}
