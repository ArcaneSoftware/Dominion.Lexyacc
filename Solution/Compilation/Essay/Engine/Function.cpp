//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Function.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CFunction
//***********************************************************************************************************************************************************************************//
CFunction::CFunction()
{
}

CFunction::CFunction(C_FUNCTION& that) :
  CRowFunction(that),
  _parameters(that._parameters)
{
}

CFunction::CFunction(C_FUNCTION&& that) :
  CRowFunction(that),
  _parameters(move(that._parameters))
{
}

CFunction::CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID, int32_t blockID) :
  CRowFunction(access, identifier, parameterChainID, blockID)
{
}

CFunction::~CFunction()
{
}

void CFunction::AppendParameter(WSTRING& parameter)
{
  _parameters.push_back(parameter);
}

int32_t CFunction::GetParameterCount() const
{
  return _parameters.size();
}

C_FUNCTION& CFunction::operator=(C_FUNCTION& that)
{
  CRowFunction::operator=(that);

  _parameters = that._parameters;

  return *this;
}

C_FUNCTION & CFunction::operator=(C_FUNCTION && that)
{
  CRowFunction::operator=(that);

  _parameters = move(that._parameters);

  return *this;
}
