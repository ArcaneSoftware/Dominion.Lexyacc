//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Scene.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CCase
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CCase, C_CASE);
class LIBRARY_EXPORT CCase : public CObject
{
public:
  CLASS_INHERITOR(CObject, CCase);

  CCase();
  CCase(C_CASE& that);
  CCase(C_CASE&& that);
  CCase(C_SCENE& scene, WSTRING& message, WSTRING& arguments, WSTRING& notes);
  virtual ~CCase();
  //{CObject
  virtual wstring ToString() const override;
  //}
  CLASS_PROPERTY(CScene, _scene, Scene);
  CLASS_PROPERTY(wstring, _message, Message);
  CLASS_PROPERTY(wstring, _arguments, Arguments);
  CLASS_PROPERTY(wstring, _notes, Notes);

  C_CASE& operator=(C_CASE& that);

private:
  CScene _scene;
  wstring _message;
  //Comma-Separated
  wstring _arguments;
  //Semicolon-Separated
  wstring _notes;
};

END_DOMINION
