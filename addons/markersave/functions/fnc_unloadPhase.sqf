#include "..\script_component.hpp"
/*
 * Author: Andx
 * Removes the markers of a loaded phase.
 *
 * Arguments:
 * 0: Phase name or 1-based position, -1 for the most recently loaded phase <STRING, NUMBER> (default: -1)
 *
 * Return Value:
 * A phase was unloaded <BOOL>
 *
 * Example:
 * [] call ttt_markersave_fnc_unloadPhase
 *
 * Public: Yes
 */

params [["_phase", -1, [0, ""]]];

private _loadedIndex = -1;

if (_phase isEqualTo -1) then {
    _loadedIndex = count GVAR(loadedPhases) - 1;
} else {
    private _phases = call FUNC(getPhases);
    private _index = [_phase, _phases] call FUNC(resolvePhase);

    if (_index != -1) then {
        _loadedIndex = [(_phases select _index) select 0] call FUNC(getLoadedIndex);
    };
};

if (_loadedIndex == -1) exitWith {
    [([format [LLSTRING(notLoaded), _phase], LLSTRING(nothingLoaded)] select (_phase isEqualTo -1))] call ace_common_fnc_displayTextStructured;

    false
};

(GVAR(loadedPhases) deleteAt _loadedIndex) params ["", "_names", "_name"];

{
    deleteMarker _x;
} forEach _names;

[format [LLSTRING(unloaded), _name, count _names]] call ace_common_fnc_displayTextStructured;

true // return
