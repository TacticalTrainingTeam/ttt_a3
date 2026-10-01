#include "..\script_component.hpp"
/*
 * Author: Andx
 * Prints the saved phases of the current map to the system chat.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * There is at least one saved phase <BOOL>
 *
 * Example:
 * [] call ttt_markersave_fnc_listPhases
 *
 * Public: Yes
 */

private _phases = call FUNC(getPhases);

if (_phases isEqualTo []) exitWith {
    [LLSTRING(noPhases)] call ace_common_fnc_displayTextStructured;

    false
};

private _lines = [];

{
    _x params ["_name", "", "_records"];

    private _state = ["", format [" [%1]", LLSTRING(loadedTag)]] select (([_name] call FUNC(getLoadedIndex)) != -1);

    _lines pushBack format [LLSTRING(listEntry), _forEachIndex + 1, _name, count _records, _state];
} forEach _phases;

[_lines] call ace_common_fnc_displayTextStructured;

true // return
