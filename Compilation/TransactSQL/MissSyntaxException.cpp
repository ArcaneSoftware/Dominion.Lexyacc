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
wstring CMissSyntaxException::MAKE_NOTE(int32_t ast)
{
  return CWStringTemplate(L"Miss ast ID:[%x];").Format(ast);
}

void CMissSyntaxException::CHECK(size_t ast, C_CONTEXT& context, C_TROUBLESPOT& troublespot)
{
  if (!context.ExistSyntax(ast))
  {
    throw CExceedMemoryException(CTroublespot(troublespot).AppendNote(MAKE_NOTE(ast)));
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
