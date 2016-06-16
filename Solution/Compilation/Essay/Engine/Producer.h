//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "Compilation/Essay/Engine/ASTs.h"
#include "Compilation/Essay/Engine/NamingStack.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//***********************************************************************************************************************************************************************************//
//CProducer
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CProducer, C_PRODUCER);
class LIBRARY_EXPORT CProducer : public CObject
{
public:
  CLASS_INHERITOR(CObject, CProducer);

  CProducer();
  CProducer(C_PRODUCER& that);
  CProducer(C_PRODUCER&& that);
  explicit CProducer(WSTRING& file);
  virtual ~CProducer();

protected:
  template<typename TSyntax>
  CProductor Produce(const TSyntax& syntax)
  {
    int32_t index = _context.AppendSyntax(new TSyntax(syntax));

    return CProductor(true, index);
  }

  template<typename TSyntax>
  CProductor Produce(const TSyntax& syntax, const vector<CError>& errorVector)
  {
    int32_t index = NONE_ID;
    auto successed = true;

    for (auto each : errorVector)
    {
      if (!each.Successed())
      {
        successed = false;
        _errorVector.push_back(each);
      }
    }

    if (successed)
    {
      index = _context.AppendSyntax(new TSyntax(syntax));
    }

    return CProductor(successed, index);
  }

public:
  CContext Cast() const;
  wstring GetError() const;
  //Reference
  CProductor MakeScalar(C_SCALAR_SYNTAX& syntax);
  CProductor MakeVariable(C_VARIABLE_SYNTAX& syntax);
  CProductor MakeFunction(C_FUNCTION_SYNTAX& syntax);
  //Composition
  CProductor MakeChain(C_CHAIN_SYNTAX& syntax);
  CProductor MakeUnaryOperation(C_OPERATION_SYNTAX& syntax);
  CProductor MakeBinaryOperation(C_OPERATION_SYNTAX& syntax);
  //Statement
  CProductor MakeBlock(C_BLOCK_SYNTAX& syntax);
  CProductor MakeDefineVariable(C_DEFINE_VARIABLE_SYNTAX& syntax);
  CProductor MakeAssignVariable(C_ASSIGN_VARIABLE_SYNTAX& syntax);
  CProductor MakeDefineFunction(C_DEFINE_FUNCTION_SYNTAX& syntax);
  CProductor MakeReturn(C_RETURN_SYNTAX& syntax);

  shared_ptr<CAbstractSyntaxTree<ESyntaxType>> GetSyntax(int32_t syntaxID) const;
  WSTRING& GetFile() const;
  void SetEntry(int32_t entryID);
  void PushNaming(WSTRING& naming);
  void PopNaming();
  CNamespace GetLiveNamespace() const;

  C_PRODUCER& operator=(C_PRODUCER& that);

private:
  wstring _file;
  CContext _context;
  vector<CError> _errorVector;
  CNamingStack _namingStack;
};

END_DOMINION_COMPILATION_ESSAY
