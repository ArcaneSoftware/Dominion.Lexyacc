//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#ifndef DOMINION_SYNTAX_COMMON_INEXISTENTSYNTAXEXCEPTION_H
#define DOMINION_SYNTAX_COMMON_INEXISTENTSYNTAXEXCEPTION_H

#ifndef DOMINION_SYNTAX_COMMON_SYNTAXEXCEPTION_H
#include "Dominion/Syntax/Common/SyntaxException.h"
#endif

namespace DOMINION_SYNTAX
{
  //*****************************************************************************************************************//
  //CInexistentSyntaxException
  //
  //*****************************************************************************************************************//
  CLASS_DECLARATION(CInexistentSyntaxException, C_INEXISTENT_ESSE_EXCEPTION);
  class LIBRARY_EXPORT CInexistentSyntaxException :
    public CSyntaxException
  {
    OBJECT_INHERITOR(CSyntaxException, CInexistentSyntaxException);

  public:
    static wstring MAKE_NOTE(int32_t index);

  protected:
    CInexistentSyntaxException();
  public:
    CInexistentSyntaxException(C_INEXISTENT_ESSE_EXCEPTION& that);
    CInexistentSyntaxException(C_INEXISTENT_ESSE_EXCEPTION&& that);
    explicit CInexistentSyntaxException(C_SYNTAX_TROUBLESPOT& troublespot);
    virtual ~CInexistentSyntaxException();

  public:
    virtual CCase MakeCase(C_TROUBLESPOT& troublespot) const override;
  };
}}
#endif
