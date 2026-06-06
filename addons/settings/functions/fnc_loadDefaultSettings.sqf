#include "script_component.hpp"
/*
 * Author: BlauBär
 * Loads the default framework settings.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */
#ifndef DEBUG_MODE_FULL
if (isNull (missionConfigFile >> "template_version")) exitWith {};
#endif

{
    private _settingsFile = preprocessFile format [QPATHTOF(settings\%1.sqf), _x];
    {
        _x params ["_setting", "_value", "_priority"];
        [_setting, _value, _priority, "server"] call CBA_settings_fnc_set;
    } forEach ([_settingsFile, VALIDATE_SETTINGS] call CBA_settings_fnc_parse);
} forEach [
    "advanced_ballistics",
    "captives",
    "clearBrush",
    "common",
    "deathandhit",
    "explosives",
    "finger",
    "fragmentation",
    "grad",
    "hearing",
    "iedd",
    "interaction",
    "map",
    "microdagr",
    "mk6mortar",
    "nametags",
    "nightvision",
    "overheating",
    "refuel",
    "repair",
    "respawn",
    "trenches",
    "tsp",
    "viewdistance",
    "weather",
    "winddeflection"
];
