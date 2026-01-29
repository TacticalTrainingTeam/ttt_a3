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
 * call ttt_settings_fnc_loadMedicalSettings;
 *
 * Public: No
 */

// Get the mission parameter value (default to 0 if not set)
private _medicalSettings = ["ttt_main_medicalSettings", 0] call BIS_fnc_getParamValue;

// Validate parameter
if !(_medicalSettings in [0, 1, 2]) then {
    WARNING_1("Invalid medical settings parameter: %1, defaulting to 0",_medicalSettings);
    _medicalSettings = 0;
};

// Determine which settings file to load
private _settingsFile = switch (_medicalSettings) do {
    case 0: {QPATHTOF(settings\medic_preset_default.inc)};
    case 1: {QPATHTOF(settings\medic_preset_easy.inc)};
    case 2: {QPATHTOF(settings\medic_preset_training.inc)};
    default {QPATHTOF(settings\medic_preset_default.inc)};
};

private _settingsFileContent = preprocessFile _settingsFile;

if (_settingsFileContent == "") then {
    ERROR_2("Failed to load settings file: %1 for parameter: %2",_settingsFile,_medicalSettings);
    // Fallback to default
    _settingsFileContent = preprocessFile QPATHTOF(settings\medic_preset_default.inc);
};

{
    _x params ["_setting", "_value", "_prio"];
    [_setting, _value, _prio, "server"] call CBA_settings_fnc_set;
} forEach ([_settingsFileContent, false] call CBA_settings_fnc_parse);

// Log which profile is being loaded
INFO_2("Loading CBA settings profile %1 from %2",_medicalSettings,_settingsFile);
