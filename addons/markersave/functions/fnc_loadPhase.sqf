#include "..\script_component.hpp"
/*
 * Author: Andx
 * Loads a saved marker phase of the current map as player owned markers.
 * The markers are created a few per frame, a message is shown once all are there.
 *
 * Arguments:
 * 0: Phase name or 1-based position, -1 for the first phase not yet loaded <STRING, NUMBER> (default: -1)
 * 1: Channel name or ID, -1 for the default channel (falls back to the first channel allowing markers) <STRING, NUMBER> (default: -1)
 * 2: Only show the markers locally, do not broadcast them <BOOL> (default: false)
 *
 * Return Value:
 * Loading was started <BOOL>
 *
 * Example:
 * [] call ttt_markersave_fnc_loadPhase
 * ["Phase 2", "group"] call ttt_markersave_fnc_loadPhase
 *
 * Public: Yes
 */

params [
    ["_phase", -1, [0, ""]],
    ["_channel", -1, [0, ""]],
    ["_local", false, [true]]
];

private _phases = call FUNC(getPhases);

if (_phases isEqualTo []) exitWith {
    [LLSTRING(noPhases)] call ace_common_fnc_displayTextStructured;

    false
};

private _index = if (_phase isEqualTo -1) then {
    _phases findIf {([_x select 0] call FUNC(getLoadedIndex)) == -1}
} else {
    [_phase, _phases] call FUNC(resolvePhase)
};

if (_index == -1) exitWith {
    [([format [LLSTRING(notFound), _phase], LLSTRING(allLoaded)] select (_phase isEqualTo -1))] call ace_common_fnc_displayTextStructured;

    false
};

(_phases select _index) params ["_name", "", "_records"];

if (([_name] call FUNC(getLoadedIndex)) != -1) exitWith {
    [format [LLSTRING(alreadyLoaded), _name]] call ace_common_fnc_displayTextStructured;

    false
};

private _useDefault = _channel isEqualTo -1;

if (_channel isEqualType "") then {
    _channel = CHANNEL_NAMES find toLower _channel;
};

if (!_useDefault && {_channel < 0 || {_channel > 5}}) exitWith {
    ERROR_1("Invalid channel given! - %1",_channel);

    false
};

private _target = 0;

if (!_local) then {
    private _candidates = [[_channel], [DEFAULT_CHANNEL, 0, 1, 2, 3, 4, 5]] select _useDefault;
    // select 2 = mapMarkers (ab 2.20)
    private _found = _candidates findIf {(channelEnabled _x) select 2};

    _target = _candidates param [_found, -1];
};

if (_target == -1) exitWith {
    [LLSTRING(channelDisabled)] call ace_common_fnc_displayTextStructured;

    false
};

// select 3 = mapDrawing (ab 2.20), lokale Marker sind nicht an einen Kanal gebunden
private _canDraw = _local || {(channelEnabled _target) select 3};
private _skipped = 0;

if (!_canDraw) then {
    private _total = count _records;
    _records = _records select {(_x select 0) != "POLYLINE"};
    _skipped = _total - count _records;
};

private _names = [];
GVAR(loadedPhases) pushBack [toLower _name, _names, _name];

[{
    params ["_args", "_handle"];
    _args params ["_records", "_names", "_name", "_target", "_local", "_skipped", "_position"];

    // Phase wurde während des Ladens entladen
    if (([_name] call FUNC(getLoadedIndex)) == -1) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    {
        private _marker = [_x, _target, _local] call FUNC(restoreMarker);

        if (_marker isNotEqualTo "") then {
            _names pushBack _marker;
            GVAR(savedMarkers) set [_marker, true];
        };
    } forEach (_records select [_position, MARKERS_PER_FRAME]);

    _position = _position + MARKERS_PER_FRAME;
    _args set [6, _position];

    if (_position >= count _records) then {
        [_handle] call CBA_fnc_removePerFrameHandler;

        // Ein Hint ersetzt den vorherigen, deshalb beide Zeilen zusammen anzeigen
        private _lines = [format [LLSTRING(loaded), _name, count _names]];

        if (_skipped > 0) then {
            _lines pushBack format [LLSTRING(skippedDrawings), _skipped];
        };

        [_lines] call ace_common_fnc_displayTextStructured;
    };
}, 0, [_records, _names, _name, _target, _local, _skipped, 0]] call CBA_fnc_addPerFrameHandler;

true // return
