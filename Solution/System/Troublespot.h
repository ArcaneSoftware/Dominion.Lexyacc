//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Scene.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CTroublespot
//Just face to user who throw the exception, which specify parameters
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CTroublespot, C_TROUBLESPOT);
class LIBRARY_EXPORT CTroublespot : public CObject
{
public:
  CLASS_INHERITOR(CObject, CTroublespot);

  CTroublespot();
  CTroublespot(C_TROUBLESPOT& that);
  CTroublespot(C_TROUBLESPOT&& that);
  CTroublespot(C_SCENE& scene, WSTRING& arguments, WSTRING& notes, WSTRING& userMessage);
  virtual ~CTroublespot();

  C_TROUBLESPOT& AppendNote(WSTRING& note);

  CLASS_PROPERTY(CScene, _scene, Scene);
  CLASS_PROPERTY(wstring, _arguments, Arguments);
  CLASS_PROPERTY(wstring, _notes, Notes);
  CLASS_PROPERTY(wstring, _userMessage, UserMessage);

  C_TROUBLESPOT& operator=(C_TROUBLESPOT& that);

private:
  CScene  _scene;
  wstring _arguments;
  wstring _notes;
  wstring _userMessage;
};

END_DOMINION
