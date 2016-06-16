//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Object.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CScene
//It warps location information to indicate specific source code.
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CScene, C_SCENE);
class LIBRARY_EXPORT CScene : public CObject
{
public:
  CLASS_INHERITOR(CObject, CScene);
  CScene();
  CScene(C_SCENE& that);
  CScene(C_SCENE&& that);
  CScene(WSTRING& a_class, WSTRING& method, int32_t lineNumber);
  virtual ~CScene();
  //{
  virtual wstring ToString() const override;
  //}
  CLASS_PROPERTY(wstring, _class, Class);
  CLASS_PROPERTY(wstring, _method, Method);
  CLASS_PROPERTY(int32_t, _lineNumber, LineNumber);
  C_SCENE& operator=(C_SCENE& that);

private:
  wstring _class;
  wstring _method;
  int32_t _lineNumber;
};

END_DOMINION

#undef  THIS_SCENE
#define THIS_SCENE(METHOD) CScene(ThisName(), METHOD, __LINE__)
