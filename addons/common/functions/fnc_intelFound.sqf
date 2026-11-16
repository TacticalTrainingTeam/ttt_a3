#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Runs on every machine when an intel object was picked up (event handler of ttt_common_intelFound, raised by ttt_common_fnc_addIntel).
* Adds the diary record and hint locally, removes the local pickup action and hides the object on the server.
*
* Arguments:
* 0: Intelobject <OBJECT>
* 1: Object ausblenden <BOOL>
* 2: Intelinhalt <ARRAY> format [Titel <STRING>, Inhalt <STRING>]
* 3: Name des Finders <STRING>
*
* Return Value:
* None
*
* Public: No
*/

params ["_object", "_delete", "_textInfo", "_finderName"];

// hideObjectGlobal only works on the server
if (_delete && {isServer}) then {
    _object hideObjectGlobal true;
};

if (!hasInterface) exitWith {};

private _actionId = _object getVariable [QGVAR(intelActionId), -1];
if (_actionId != -1) then {
    _object removeAction _actionId;
    _object setVariable [QGVAR(intelActionId), nil];
};

if !(player diarySubjectExists "ttt_intel") then {
    player createDiarySubject ["ttt_intel", "Intel"];
};
player createDiaryRecord ["ttt_intel", _textInfo];

hint format [LLSTRING(intelAdded), _finderName, _textInfo select 0];
