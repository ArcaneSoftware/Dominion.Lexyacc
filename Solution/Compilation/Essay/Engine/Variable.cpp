//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Variable.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CVariable
//***********************************************************************************************************************************************************************************//
CVariable::CVariable()
{
}

CVariable::CVariable(C_VARIABLE& that) :
  CRowVariable(that)
{
}

CVariable::CVariable(C_VARIABLE&& that) :
  CRowVariable(that)
{
}

CVariable::CVariable(EAccessType access, C_IDENTIFIER& identifier, int32_t initialValueID, int32_t realValueID, bool isArgument) :
  CRowVariable(access, identifier, initialValueID, realValueID, isArgument)
{
}

CVariable::~CVariable()
{
}

C_VARIABLE& CVariable::operator=(C_VARIABLE& that)
{
  CRowVariable::operator=(that);

  return *this;
}
