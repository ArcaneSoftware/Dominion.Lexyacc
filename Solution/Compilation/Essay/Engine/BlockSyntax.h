//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CBlockSyntax
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CBlockSyntax, C_BLOCK_SYNTAX);
class LIBRARY_EXPORT CBlockSyntax : public CAbstractSyntaxTree<ESyntaxType>
{
public:
  CLASS_INHERITOR(CAbstractSyntaxTree<ESyntaxType>, CBlockSyntax);

  CBlockSyntax();
  CBlockSyntax(C_BLOCK_SYNTAX& that);
  CBlockSyntax(C_BLOCK_SYNTAX&& that);
  CBlockSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, int32_t statementID, int32_t blockID);
  virtual ~CBlockSyntax();

  CLASS_PROPERTY(int32_t, _statementID, StatementID);
  CLASS_PROPERTY(int32_t, _blockID, BlockID);

  C_BLOCK_SYNTAX& operator=(C_BLOCK_SYNTAX& that);

private:
  int32_t _statementID;
  int32_t _blockID;
};

END_DOMINION_COMPILATION_ESSAY
