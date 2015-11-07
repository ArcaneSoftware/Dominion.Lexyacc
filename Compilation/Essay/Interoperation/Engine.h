//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Interoperation/Dependence.h"
#include "Dominion/Compilation/Essay/Interoperation/Context.h"

using namespace System;
using namespace System::IO;

BEGIN_DOMINION_COMPILATION_ESSAY

public enum class EngineStateEnum
{
  Started,
  Breakdown,
  Stoped
};
//****************************************************************************************************//
//SyntaxEngine
//
//****************************************************************************************************//
public ref class Engine
{
public:
  Engine();
  ~Engine();
protected:
  !Engine();

public:
  Context^ Start(String^ source, bool output);

  Context^ Start(FileInfo^ file, bool output);

  void Stop();

  property String^ Source
  {
    String^ get();
  }

  property EngineStateEnum State
  {
    EngineStateEnum get();
    void set(EngineStateEnum value);
  }

  property String^ Error
  {
    String^ get();
  }

protected:
  EngineStateEnum _state;
  CCompiler* _compiler;
  CContext* _context;
  String^ _source;
  IBaseReducerFactory<RawSyntax^>^ _reducerFactory;
};

END_DOMINION_COMPILING_SQLSERVER
