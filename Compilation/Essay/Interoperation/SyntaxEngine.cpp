#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "SyntaxEngine.h"
//#include "NoneIndexException.h"
//#include "NonexistentSyntaxException.h"
//#include "Const.h"

using namespace Runtime::InteropServices;
using namespace Dominion;
using namespace Dominion::Failure;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//SyntaxEngine
//********************************************************************************************************************//
SyntaxEngine::SyntaxEngine() :
  _engine(new CEngine()),
  _context(nullptr),
  _state(EngineStateEnum::Stoped)
{
}

SyntaxEngine::~SyntaxEngine()
{
  delete _engine;

  if (_context != nullptr)
  {
    delete _context;
  }
}

SyntaxEngine::!SyntaxEngine()
{
  delete _engine;

  if (_context != nullptr)
  {
    delete _context;
  }
}

Context^ SyntaxEngine::Start(String^ source, bool output)
{
  NullValueException::CHECK(source);

  Context^ context = nullptr;

  if (_state == EngineStateEnum::Stoped)
  {
    pin_ptr<const wchar_t> chars = PtrToStringChars(source);
    auto successed = _engine->Run(wstring(chars), output);

    if (successed)
    {
      _source = source;

      context = gcnew Context(new CContext(_engine->GetContext()));
    }

    State = successed ?
            EngineStateEnum::Started :
            _state = EngineStateEnum::Breakdown;
  }

  return context;
}

Context^ SyntaxEngine::Start(FileInfo^ file, bool output)
{
  auto reader = gcnew StreamReader(file->FullName);
  auto source = reader->ReadToEnd();

  reader->Close();

  return Start(source, output);
}

void SyntaxEngine::Stop()
{
  State = EngineStateEnum::Stoped;
}

String^ SyntaxEngine::Source::get()
{
  return _source;
}

EngineStateEnum SyntaxEngine::State::get()
{
  return _state;
}

void SyntaxEngine::State::set(EngineStateEnum value)
{
  _state = value;
}

String^ SyntaxEngine::Error::get()
{
  return Marshal::PtrToStringAnsi((IntPtr)(wchar_t*)_engine->GetErrorText().c_str());
}
