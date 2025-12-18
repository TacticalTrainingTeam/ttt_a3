#include "..\script_component.hpp"
/*
 * Author: Andx
 * Loads the appropriate CBA settings file based on the mission parameter.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ttt_settings_loader_fnc_loadSettings;
 *
 * Public: No
 */

// Get the mission parameter value (default to 0 if not set)
private _medicalSettings = ["ttt_main_medicalSettings", 0] call BIS_fnc_getParamValue;

// Determine which settings file to load
private _settingsFile = switch (_medicalSettings) do {
    case 0: {QPATHTOF(settings\cba_settings_a.sqf)};
    case 1: {QPATHTOF(settings\cba_settings_b.sqf)};
    case 2: {QPATHTOF(settings\cba_settings_c.sqf)};
    default {QPATHTOF(settings\cba_settings_a.sqf)};
};

private _settingsFileContent = preprocessFile _settingsFile;

{
    _x params ["_setting", "_value", "_prio"];
    [_setting, _value, _prio, "server"] call CBA_settings_fnc_set;
} forEach ([_settingsFileContent, false] call CBA_settings_fnc_parse);

// Log which profile is being loaded
INFO_2("Loading CBA settings profile %1 from %2",_medicalSettings,_settingsFile);
