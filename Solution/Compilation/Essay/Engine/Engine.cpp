//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Engine.h"
#include "Producer.h"
#include "Scanner.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CEngine
//***********************************************************************************************************************************************************************************//
CEngine::CEngine()
{
}

CEngine::~CEngine()
{
}

CEngine::CEngine(C_ENGINE& that) :
  CObject(that),
  _outputFile(that._outputFile),
  _context(that._context),
  _errorText(that._errorText)
{
}

CEngine::CEngine(C_ENGINE&& that) :
  CObject(that),
  _outputFile(move(that._outputFile)),
  _context(move(that._context)),
  _errorText(move(that._errorText))
{
}

CEngine::CEngine(const wstring& outputFile) :
  _outputFile(outputFile)
{
}

bool CEngine::Run(istream& inStream, bool output)
{
  try
  {
    CScanner scanner(&inStream);
    CProducer producer;
    CParser parser(scanner, producer);

    if (parser.parse() != 0)
    {
      _errorText = producer.GetError();

      return false;
    }
    else
    {
      _context = producer.Cast();

      return true;
    }
  }
  catch (CException& e)
  {
    CCaughtException::THROW(THIS_SCENE(L"Run"), e);
  }
}

bool CEngine::Run(WSTRING& source, bool output) throw()
{
  return Run(SString::TO_MSTRING(source), output);
}

bool CEngine::Run(MSTRING& source, bool output)
{
  istringstream stream(source);

  return Run(stream, output);
}

C_ENGINE& CEngine::operator=(C_ENGINE& that)
{
  CObject::operator=(that);

  _outputFile = that._outputFile;
  _errorText = that._errorText;
  _context = that._context;

  return *this;
}
