//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/ASTs.h"
#include "Dominion/Compilation/Essay/SpaceStack.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//*****************************************************************************************************************//
//CProducer
//
//*****************************************************************************************************************//
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
  CProductor Scalar(C_SCALAR_SYNTAX& syntax);
  //Composition
  CProductor Chain(C_CHAIN_SYNTAX& syntax);
  CProductor UnaryOperation(C_OPERATION_SYNTAX& syntax);
  CProductor BinaryOperation(C_OPERATION_SYNTAX& syntax);
  //Statement
  CProductor DefineVariable(C_DEFINE_VARIABLE_SYNTAX& syntax);

  shared_ptr<CEssaySyntax> GetSyntax(int32_t syntaxID) const;
  WSTRING& GetFile() const;
  void SetEntry(int32_t entryID);

  void PushSpace(WSTRING& space);

  C_PRODUCER& operator=(C_PRODUCER& that);

private:
  wstring _file;
  CContext _context;
  vector<CError> _errorVector;
  CSpaceStack _spaceStack;
};

END_DOMINION_COMPILATION_ESSAY
