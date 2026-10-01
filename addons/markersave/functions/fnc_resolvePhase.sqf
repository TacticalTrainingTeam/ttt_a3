#include "..\script_component.hpp"
/*
 * Author: Andx
 * Finds a phase by name or by its 1-based position in the list.
 *
 * Arguments:
 * 0: Phase name or 1-based position (also accepted as numeric string) <STRING, NUMBER>
 * 1: Phases as returned by ttt_markersave_fnc_getPhases <ARRAY>
 *
 * Return Value:
 * Index into the given phases, -1 if there is no match <NUMBER>
 *
 * Example:
 * ["Phase 1", _phases] call ttt_markersave_fnc_resolvePhase
 *
 * Public: No
 */

params [
    ["_phase", -1, [0, ""]],
    ["_phases", [], [[]]]
];

private _index = -1;

if (_phase isEqualType "") then {
    // Name hat Vorrang, damit eine Phase "2" nicht von der Position verdeckt wird
    _index = _phases findIf {toLower (_x select 0) isEqualTo toLower _phase};

    if (_index == -1 && {_phase isEqualTo str parseNumber _phase}) then {
        _phase = parseNumber _phase;
    };
};

if (_index == -1 && {_phase isEqualType 0} && {_phase == floor _phase} && {_phase >= 1} && {_phase <= count _phases}) then {
    _index = _phase - 1;
};

_index // return
