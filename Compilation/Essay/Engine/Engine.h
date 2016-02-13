//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Essay/Engine/Elementary.h"

BEGIN_DOMINION_COMPILATION_ESSAY
//****************************************************************************************************//
//CEngine
//
//****************************************************************************************************//
CLASS_DECLARATION(CEngine, C_ENGINE);
class LIBRARY_EXPORT CEngine : public CObject
{
public:
  CLASS_INHERITOR(CObject, CEngine);

  CEngine();
  CEngine(C_ENGINE& that);
  CEngine(C_ENGINE&& that);
  CEngine(const wstring& outputFile);
  virtual ~CEngine();

  bool Run(istream& inStream, bool output = false) throw();
  bool Run(WSTRING& source, bool output = false) throw();
  bool Run(MSTRING& source, bool output = false) throw();

  CLASS_PROPERTY(wstring, _outputFile, OutputFile);
  CLASS_GET_PROPERTY(wstring, _errorText, ErrorText);
  CLASS_GET_PROPERTY(CContext, _context, Context);

  C_ENGINE& operator=(C_ENGINE& that);

private:
  wstring _outputFile;
  wstring _errorText;
  CContext _context;
};

END_DOMINION_COMPILATION_ESSAY
