//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "MissSyntaxException.h"

using namespace Dominion::Compilation::TransactSQL;
//*******************************************************************************************************************//
//CMissSyntaxException
//*******************************************************************************************************************//
wstring CMissSyntaxException::MAKE_NOTE(int32_t syntax)
{
  return CWStringTemplate(L"Miss syntax index:[%x];").Format(syntax);
}

void CMissSyntaxException::CHECK(size_t syntax, C_CONTEXT& context, C_TROUBLESPOT& troublespot)
{
  if (!context.ExistSyntax(syntax))
  {
    throw CExceedMemoryException(CTroublespot(troublespot).AppendNote(MAKE_NOTE(syntax)));
  }
}

CMissSyntaxException::CMissSyntaxException()
{
}

CMissSyntaxException::CMissSyntaxException(C_MISS_SYNTAX_EXCEPTION& that) :
  CException(that)
{
}

CMissSyntaxException::CMissSyntaxException(C_MISS_SYNTAX_EXCEPTION&& that) :
  CException(that)
{
}

CMissSyntaxException::CMissSyntaxException(C_TROUBLESPOT& troublespot) :
  CException(troublespot)
{
}

CMissSyntaxException::~CMissSyntaxException()
{
}

C_MISS_SYNTAX_EXCEPTION& CMissSyntaxException::operator=(C_MISS_SYNTAX_EXCEPTION& that)
{
  CException::operator=(that);

  return *this;
}
