//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Troublespot.h"

using namespace Dominion;
//***********************************************************************************************************************************************************************************//
//CTroublespot
//***********************************************************************************************************************************************************************************//
CTroublespot::CTroublespot()
{
}

CTroublespot::CTroublespot(C_TROUBLESPOT& that) :
  CObject(that),
  _scene(that._scene),
  _arguments(that._arguments),
  _notes(that._notes),
  _userMessage(that._userMessage)
{
}

CTroublespot::CTroublespot(C_TROUBLESPOT&& that) :
  CObject(that),
  _scene(move(that._scene)),
  _arguments(move(that._arguments)),
  _notes(move(that._notes)),
  _userMessage(move(that._userMessage))
{
}

CTroublespot::CTroublespot(C_SCENE& scene, WSTRING& arguments, WSTRING& notes, WSTRING& userMessage) :
  _scene(scene),
  _arguments(arguments),
  _notes(notes),
  _userMessage(userMessage)
{
}

CTroublespot::~CTroublespot()
{
}

C_TROUBLESPOT& CTroublespot::AppendNote(WSTRING& note)
{
  _notes.append(note);

  return *this;
}

C_TROUBLESPOT& CTroublespot::operator=(C_TROUBLESPOT& that)
{
  CObject::operator=(that);

  _scene = that._scene;
  _arguments = that._arguments;
  _notes = that._notes;

  return *this;
}
