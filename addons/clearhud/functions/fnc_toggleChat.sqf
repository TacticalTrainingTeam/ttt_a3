#include "..\script_component.hpp"
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

/*
 * Authors: Soldia, Andx
 * Hides Chat
 *
 * Arguments:
 * 0: display <STRING>
 * 1: dikcode <STRING>
 * 2: shift <STRING>
 * 3: ctrl <STRING>
 * 4: alt <STRING>
 *
 * Return Value:
 * True <BOOLEAN>
 *
 * Example:
 * [] call ttt_clearhud_fnc_suppressChat
 *
 * Public: No
 */

TRACE_1("fnc_suppressChat",_this);

private ["_status", "_key", "_keybind", "_activated"];

PARAMS_5(_display,_dikCode,_shift,_ctrl,_alt);

//read the current status of chat deactivation (true = deactivated)
_status = GVAR(activated);

//local copy of the DIK Code to String Table and transform it to a hash
_diktable = uiNamespace getVariable QUOTE(CBA_keybinding_dikDecToStringTable);
_hash = [_diktable,0] call CBA_fnc_hashCreate;
_key = [_hash, format ["%1", _dikCode]] call CBA_fnc_hashGet;//seems to return wrong key: 0 instead of ,

//create several strings for the current variables
if (_status) then {
	_activated = parseText "<t color='#00ff00'>enabled</t>";
	[GVAR(handle)] call CBA_fnc_removePerFrameHandler;
	_status = false;
} else {
	_activated = parseText "<t color='#ff0000'>disabled</t>";
	GVAR(handle) = [{clearRadio;}, 0, []] call CBA_fnc_addPerFrameHandler;
	_status = true;
};

if (_shift) then {
	_shift = "SHIFT + ";
} else {
	_shift = "";
};

if (_ctrl) then {
	_ctrl = "CTRL + ";
} else {
	_ctrl = "";
};

if (_alt) then {
	_alt = "ALT + ";
} else {
	_alt = "";
};

_keybind = parseText format ["<t color='#FFA54F'>%1%2%3%4</t>",_shift,_ctrl,_alt,_key];

hint formatText ["The Chat is now %1.%2This can be changed by pressing %3", _activated, parseText "<br/>", _keybind]; //toDo stringtable

GVAR(activated) = _status;

true
