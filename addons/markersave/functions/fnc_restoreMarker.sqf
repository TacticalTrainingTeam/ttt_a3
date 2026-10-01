#include "..\script_component.hpp"
/*
 * Author: Andx
 * Creates a player owned map marker from a saved record.
 *
 * Arguments:
 * 0: Marker record as saved by ttt_markersave_fnc_savePhase <ARRAY>
 * 1: Channel to create the marker on, see Channel IDs <NUMBER>
 * 2: Keep the marker local, do not broadcast it <BOOL> (default: false)
 *
 * Return Value:
 * Marker ID, empty string if could not create <STRING>
 *
 * Example:
 * [_record, 1, false] call ttt_markersave_fnc_restoreMarker
 *
 * Public: No
 */

params [
    ["_record", [], [[]]],
    ["_channel", 0, [0]],
    ["_local", false, [true]]
];

_record params ["_shape", "_type", "_color", "_size", "_brush", "_dir", "_text", "_alpha", "_position", "_polyline"];

private _marker = [_position, _channel] call EFUNC(common,createPlayerMarker);

if (_marker isEqualTo "") exitWith {""};

_marker setMarkerShapeLocal _shape;

if (_shape == "POLYLINE") then {
    _marker setMarkerPolylineLocal _polyline;
} else {
    // Flächenmarker haben keinen Typ
    if (_type isNotEqualTo "") then {
        _marker setMarkerTypeLocal _type;
    };

    _marker setMarkerSizeLocal _size;
    _marker setMarkerBrushLocal _brush;
    _marker setMarkerDirLocal _dir;
    _marker setMarkerTextLocal _text;
};

_marker setMarkerColorLocal _color;

// Der globale Befehl zuletzt sendet den Marker nur einmal komplett ans Netzwerk
if (_local) then {
    _marker setMarkerAlphaLocal _alpha;
} else {
    _marker setMarkerAlpha _alpha;
};

_marker // return
