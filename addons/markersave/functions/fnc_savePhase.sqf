#include "..\script_component.hpp"
/*
 * Author: Andx
 * Saves the user placed map markers as a phase of the current map to the player's profile.
 * Only possible in singleplayer and the Eden multiplayer preview.
 *
 * Arguments:
 * 0: Phase name, defaults to "Phase N". An existing phase with the same name is overwritten. <STRING> (default: "")
 * 1: Only save markers not yet saved or loaded this session <BOOL> (default: true)
 *
 * Return Value:
 * Phase was saved <BOOL>
 *
 * Example:
 * ["Phase 1"] call ttt_markersave_fnc_savePhase
 *
 * Public: Yes
 */

params [
    ["_name", "", [""]],
    ["_onlyNew", true, [true]]
];

if (isMultiplayer && {!is3DENMultiplayer}) exitWith {
    [LLSTRING(saveNotAllowed)] call ace_common_fnc_displayTextStructured;

    false
};

private _markers = allMapMarkers select {(_x select [0, count USER_MARKER_PREFIX]) isEqualTo USER_MARKER_PREFIX};

if (_onlyNew) then {
    _markers = _markers select {!(_x in GVAR(savedMarkers))};
};

if (_markers isEqualTo []) exitWith {
    [LLSTRING(noMarkers)] call ace_common_fnc_displayTextStructured;

    false
};

if (count _markers > MAX_MARKERS_PER_PHASE) exitWith {
    [format [LLSTRING(tooManyMarkers), count _markers, MAX_MARKERS_PER_PHASE]] call ace_common_fnc_displayTextStructured;

    false
};

private _records = _markers apply {
    private _shape = markerShape _x;

    [
        _shape,
        markerType _x,
        markerColor _x,
        markerSize _x,
        markerBrush _x,
        markerDir _x,
        markerText _x,
        markerAlpha _x,
        markerPos [_x, true],
        if (_shape == "POLYLINE") then {markerPolyline _x} else {[]}
    ]
};

private _phases = call FUNC(getPhases);

_name = trim _name;

if (_name isEqualTo "") then {
    // Nach Löschungen kann "Phase N" schon vergeben sein, deshalb bis zum ersten freien Namen weiterzählen
    private _number = count _phases + 1;
    _name = format [LLSTRING(defaultName), _number];

    while {_phases findIf {toLower (_x select 0) isEqualTo toLower _name} != -1} do {
        _number = _number + 1;
        _name = format [LLSTRING(defaultName), _number];
    };
};

private _phase = [_name, systemTime, _records];
private _index = _phases findIf {toLower (_x select 0) isEqualTo toLower _name};

if (_index == -1) then {
    _phases pushBack _phase;
} else {
    _phases set [_index, _phase];
};

[_phases] call FUNC(setPhases);

{
    GVAR(savedMarkers) set [_x, true];
} forEach _markers;

[format [LLSTRING(saved), _name, count _records]] call ace_common_fnc_displayTextStructured;

[_name, count _records] call FUNC(addDiaryRecord);

true // return
