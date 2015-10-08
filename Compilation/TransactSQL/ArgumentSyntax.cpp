//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "ArgumentSyntax.h"

using namespace Dominion::Compilation::TransactSQL;;
//*******************************************************************************************************************//
//CArgumentSyntax
//*******************************************************************************************************************//
CArgumentSyntax::CArgumentSyntax() :
  CTransactSQLSyntax(ESyntaxType::Argument),
  _valueID(NONE_ID),
  _output(false)
{
}

CArgumentSyntax::CArgumentSyntax(C_ARGUMENT_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _parameterName(that._parameterName),
  _valueID(that._valueID),
  _output(that._output)
{
}

CArgumentSyntax::CArgumentSyntax(C_ARGUMENT_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _parameterName(move(that._parameterName)),
  _valueID(move(that._valueID)),
  _output(move(that._output))
{
}

CArgumentSyntax::CArgumentSyntax(int32_t livingLine, WSTRING& parameterName, int32_t valueID, bool output) :
  CTransactSQLSyntax(ESyntaxType::Argument, livingLine),
  _parameterName(parameterName),
  _valueID(valueID),
  _output(output)
{
}

CArgumentSyntax::~CArgumentSyntax()
{
}

C_ARGUMENT_SYNTAX& CArgumentSyntax::operator=(C_ARGUMENT_SYNTAX& that)
{
  CTransactSQLSyntax::operator=(that);

  _parameterName = that._parameterName;
  _valueID = that._valueID;
  _output = that._output;

  return *this;
}
