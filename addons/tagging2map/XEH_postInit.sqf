#include "script_component.hpp"

if (hasInterface) then {
    ["ace_tagCreated", {
        params ["", "_texture", "_object", "_unit"];
        if (!GVAR(enabled)) exitWith {};

        // Check if tag created on building by local player
        if (!(_object isKindOf "Building") || {_unit isNotEqualTo player}) exitWith {};

        private _colorIndex = TEXTURE_COLORS findIf {toLower _texture find _x != -1};

        // no matching color, do not create marker
        if (_colorIndex == -1) exitWith {
            WARNING_1("Unsupported tag color %1",_texture);
        };
        //Blue is reserved for medical use and should not create a marker to avoid spam
        if (_colorIndex == 2) exitWith {};

        private _marker = [_object, "side", _unit] call EFUNC(common,createPlayerMarker);
        _marker setMarkerShapeLocal "ICON";
        _marker setMarkerTypeLocal "hd_dot";
        _marker setMarkerColor (MARKER_COLORS select _colorIndex);

    }] call CBA_fnc_addEventHandler;

    ["ace_marker_flags_placed", {
        params ["_unit", "_flag", "_item"];
        if (!GVAR(enabled)) exitWith {};

        if (_unit isNotEqualTo player) exitWith {};

        if (_item isEqualTo "ace_marker_flags_orange") then {
            private _marker = [_flag, "side", _unit] call EFUNC(common,createPlayerMarker);
            _marker setMarkerShapeLocal "ICON";
            _marker setMarkerTypeLocal "hd_dot";
            _marker setMarkerColor ("colorOrange");
        };


    }] call CBA_fnc_addEventHandler;
};
