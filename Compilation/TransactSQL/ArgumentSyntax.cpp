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
  _valueIndex(NONE_INDEX),
  _output(false)
{
}

CArgumentSyntax::CArgumentSyntax(C_ARGUMENT_SYNTAX& that) :
  CTransactSQLSyntax(that),
  _parameterName(that._parameterName),
  _valueIndex(that._valueIndex),
  _output(that._output)
{
}

CArgumentSyntax::CArgumentSyntax(C_ARGUMENT_SYNTAX&& that) :
  CTransactSQLSyntax(that),
  _parameterName(move(that._parameterName)),
  _valueIndex(move(that._valueIndex)),
  _output(move(that._output))
{
}

CArgumentSyntax::CArgumentSyntax(int32_t livingLine, WSTRING& parameterName, int32_t valueIndex, bool output) :
  CTransactSQLSyntax(ESyntaxType::Argument, livingLine),
  _parameterName(parameterName),
  _valueIndex(valueIndex),
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
  _valueIndex = that._valueIndex;
  _output = that._output;

  return *this;
}
