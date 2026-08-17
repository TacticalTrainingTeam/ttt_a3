#include "../script_component.hpp"
/*
 * Author: Andx
 * Applies this addon's forced value for one setting, but only if that
 * setting has actually been registered yet - CBA_settings_fnc_set's own
 * type-check silently fails on an unregistered setting. Called both for
 * the initial preInit pass over settings that are already registered, and
 * from fnc_onSettingRegistered.sqf for the ones that register later - so
 * an override always lands as early as possible, regardless of preInit
 * ordering between addons.
 *
 * Arguments:
 * 0: Setting name, lowercased <STRING>
 *
 * Return Value:
 * None
 */

params ["_settingLower"];

if !(_settingLower in GVAR(overrideValues)) exitWith {};
if (isNil "CBA_settings_default") exitWith {};

(GVAR(overrideValues) get _settingLower) params ["_setting", "_value", "_priority"];

if (isNil {CBA_settings_default getVariable _setting}) exitWith {};

GVAR(overrideValues) deleteAt _settingLower;
[_setting, _value, _priority, "server"] call CBA_settings_fnc_set;
