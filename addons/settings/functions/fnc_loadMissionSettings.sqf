#include "../script_component.hpp"
/*
 * Author: BlauBär edit by Andx
 * Loads the mission's medical settings.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */

params [
    [ "_chat_origin", false, [true] ],
    [ "_chat_index", 0, [0] ]
];

private _medSys_index = if (_chat_origin) then {
    _chat_index
} else {
    ["medical_system", 99] call BIS_fnc_getParamValue
};
private _medicalSystem = "standard";

if (_medSys_index in [0, 1, 2]) then {
    _medicalSystem = ["standard", "einfach", "training"] select _medSys_index;
} else {
    if ( _medSys_index == 99 ) then {
        INFO_1("Unbekanntes ACE Medical Preset mit Index ""%1"" gefunden. Falle auf Standard zurück",_medSys_index);
    };
};

private _settingsFile = preprocessFile format [QPATHTOF(settings\medical_%1.inc.sqf), _medicalSystem];
{
    _x params ["_setting", "_value"];
    [_setting, _value, 2, "server"] call CBA_settings_fnc_set;
} forEach ([_settingsFile, false] call CBA_settings_fnc_parse);

INFO_1("ACE Medical Preset %1 geladen.",toUpper _medicalSystem);
