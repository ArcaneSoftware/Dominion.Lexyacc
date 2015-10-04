//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "SQLVariable.h"

using namespace Dominion::Compilation::TransactSQL;
//********************************************************************************************************************//
//CSQLVariable
//********************************************************************************************************************//
bool CSQLVariable::IS_GLOBAL(WSTRING& name)
{
  return L'@' == name[0] && L'@' == name[1];
}

CSQLVariable::CSQLVariable()
{
}

CSQLVariable::CSQLVariable(C_SQL_VARIABLE& that) :
  CVariable(that)
{
}

CSQLVariable::CSQLVariable(C_SQL_VARIABLE&& that) :
  CVariable(that)
{
}

CSQLVariable::CSQLVariable(WSTRING& name, int32_t initialValue, int32_t realValue, bool isArgument) :
  CVariable(name, initialValue, realValue, isArgument)
{
}

CSQLVariable::~CSQLVariable()
{
}

bool CSQLVariable::IsGlobal() const
{
  return IS_GLOBAL(GetName());
}

C_SQL_VARIABLE& CSQLVariable::operator=(C_SQL_VARIABLE& that)
{
  CVariable::operator=(that);

  return *this;
}