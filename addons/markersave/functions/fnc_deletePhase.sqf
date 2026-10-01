#include "..\script_component.hpp"
/*
 * Author: Andx
 * Deletes a saved phase from the player's profile. Markers of the phase that are loaded stay on the map.
 *
 * Arguments:
 * 0: Phase name or 1-based position <STRING, NUMBER>
 *
 * Return Value:
 * Phase was deleted <BOOL>
 *
 * Example:
 * ["Phase 1"] call ttt_markersave_fnc_deletePhase
 *
 * Public: Yes
 */

params [["_phase", "", [0, ""]]];

private _phases = call FUNC(getPhases);
private _index = [_phase, _phases] call FUNC(resolvePhase);

if (_index == -1) exitWith {
    [format [LLSTRING(notFound), _phase]] call ace_common_fnc_displayTextStructured;

    false
};

private _name = (_phases deleteAt _index) select 0;

[_phases] call FUNC(setPhases);

[format [LLSTRING(deleted), _name]] call ace_common_fnc_displayTextStructured;

true // return
