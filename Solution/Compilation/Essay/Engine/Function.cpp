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
  _parameterIDs(that._parameterIDs),
  _argumentIDs(that._argumentIDs)
{
}

CFunction::CFunction(C_FUNCTION&& that) :
  CRowFunction(that),
  _parameterIDs(move(that._parameterIDs)),
  _argumentIDs(move(that._argumentIDs))
{
}

CFunction::CFunction(EAccessType access, C_IDENTIFIER& identifier, int32_t parameterChainID, int32_t blockID) :
  CRowFunction(access, identifier, parameterChainID, blockID)
{
}

CFunction::~CFunction()
{
}

void CFunction::AppendParameterID(int32_t parameterID)
{
  _parameterIDs.push_back(parameterID);
}

void CFunction::AppendParameter(WSTRING& parameter)
{
  _parameters.push_back(parameter);
}

int32_t CFunction::AppendArgumentID(int32_t argumentID)
{
  _argumentIDs.push_back(argumentID);

  return _parameterIDs[_argumentIDs.size() - 1];
}

int32_t CFunction::GetParameterCount() const
{
  return _parameterIDs.size();
}

C_FUNCTION& CFunction::operator=(C_FUNCTION& that)
{
  CRowFunction::operator=(that);

  _parameterIDs = that._parameterIDs;
  _argumentIDs = that._argumentIDs;

  return *this;
}

C_FUNCTION & CFunction::operator=(C_FUNCTION && that)
{
  CRowFunction::operator=(that);

  _parameterIDs = move(that._parameterIDs);
  _argumentIDs = move(that._argumentIDs);

  return *this;
}
