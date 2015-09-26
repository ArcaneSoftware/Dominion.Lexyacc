//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Case.h"

using namespace Dominion;
//*******************************************************************************************************************//
//CCase
//*******************************************************************************************************************//
CCase::CCase()
{
}

CCase::CCase(C_CASE& that) :
  CObject(that),
  _scene(that._scene),
  _message(that._message),
  _arguments(that._arguments),
  _notes(that._notes)
{
}

CCase::CCase(C_CASE&& that) :
  CObject(that),
  _scene(move(that._scene)),
  _message(move(that._message)),
  _arguments(move(that._arguments)),
  _notes(move(that._notes))
{
}

CCase::CCase(C_SCENE& scene, WSTRING& message, WSTRING& arguments, WSTRING& notes) :
  _scene(scene),
  _message(message),
  _arguments(arguments),
  _notes(notes)
{
}

CCase::~CCase()
{
}

wstring CCase::ToString() const
{
  wstring string(_scene.ToString());

  string.append(L"|");
  string.append(_message);

  if (!_notes.empty())
  {
    string.append(L"|");
    string.append(_notes);
  }

  if (!_arguments.empty())
  {
    string.append(L"|");
    string.append(_arguments);
  }

  return move(string);
}

C_CASE& CCase::operator=(C_CASE& that)
{
  CObject::operator=(that);

  _scene = that._scene;
  _message = that._message;
  _arguments = that._arguments;
  _notes = that._notes;

  return *this;
}
