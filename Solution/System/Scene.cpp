//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Scene.h"
#include "StringTemplate.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CScene
//***********************************************************************************************************************************************************************************//
CScene::CScene() :
  _lineNumber(0)
{
}

CScene::CScene(C_SCENE& that) :
  CObject(that),
  _class(that._class),
  _method(that._method),
  _lineNumber(that._lineNumber)
{
}

CScene::CScene(C_SCENE&& that) :
  CObject(that),
  _class(move(that._class)),
  _method(move(that._method)),
  _lineNumber(move(that._lineNumber))
{
}

CScene::CScene(WSTRING& a_class, WSTRING& method, int32_t lineNumber) :
  _class(a_class),
  _method(method),
  _lineNumber(lineNumber)
{
}

CScene::~CScene()
{
}

wstring CScene::ToString() const
{
  return move(CWStringTemplate(L"%x::%x()@%x").Format(_class, _method, _lineNumber));
}

C_SCENE& CScene::operator=(C_SCENE& that)
{
  CObject::operator=(that);

  _class = that._class;
  _method = that._method;
  _lineNumber = that._lineNumber;

  return *this;
}

C_SCENE & CScene::operator=(C_SCENE && that)
{
  CObject::operator=(that);

  _class = move(that._class);
  _method = move(that._method);
  _lineNumber = move(that._lineNumber);

  return *this;
}
