#include "..\script_component.hpp"
/*
 * Author: TTT
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
private _settingsProfile = ["ttt_main_settingsProfile", 0] call BIS_fnc_getParamValue;

// Determine which settings file to load
private _settingsFile = switch (_settingsProfile) do {
    case 0: {"\z\ttt\addons\settings_loader\cba_settings_a.sqf"};
    case 1: {"\z\ttt\addons\settings_loader\cba_settings_b.sqf"};
    default {"\z\ttt\addons\settings_loader\cba_settings_a.sqf"};
};

// Log which profile is being loaded
INFO_2("Loading CBA settings profile %1 from %2", _settingsProfile, _settingsFile);

// Load the settings file if it exists
if (fileExists _settingsFile) then {
    call compile preprocessFileLineNumbers _settingsFile;
    INFO_1("Successfully loaded CBA settings from %1", _settingsFile);
} else {
    WARNING_1("Settings file not found: %1", _settingsFile);
};
