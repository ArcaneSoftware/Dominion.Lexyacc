//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/TransactSQL/Elementary.h"

BEGIN_DOMINION_COMPILATION_TRANSACTSQL
//*****************************************************************************************************************//
//CMissSyntaxException
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CMissSyntaxException, C_MISS_SYNTAX_EXCEPTION);
class LIBRARY_EXPORT CMissSyntaxException : public CException
{
public:
  CLASS_INHERITOR(CException, CMissSyntaxException);

  inline static wstring MAKE_NOTE(int32_t syntax);
  inline static void CHECK(size_t syntax, C_CONTEXT& context, C_TROUBLESPOT& troublespot) throw();

protected:
  CMissSyntaxException();
public:
  CMissSyntaxException(C_MISS_SYNTAX_EXCEPTION& that);
  CMissSyntaxException(C_MISS_SYNTAX_EXCEPTION&& that);
  explicit CMissSyntaxException(C_TROUBLESPOT& troublespot);
  virtual ~CMissSyntaxException();

  C_MISS_SYNTAX_EXCEPTION& operator=(C_MISS_SYNTAX_EXCEPTION& that);
};

END_DOMINION_COMPILATION_TRANSACTSQL
