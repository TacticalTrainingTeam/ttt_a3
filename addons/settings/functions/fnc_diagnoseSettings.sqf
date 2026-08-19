#include "../script_component.hpp"
/*
 * Author: Andx
 * Runs a sanity check once every addon's postInit has completed
 * (CBA_settingsInitialized): reports any forced setting that never got
 * applied at all (fnc_applyOverride.sqf never saw it register - most
 * likely a typo'd setting name or the owning mod isn't actually loaded),
 * and cross-references the applied overrides against CBA's own "needs
 * mission restart" list purely for visibility - fnc_onSettingRegistered.sqf
 * already applies those the moment they register, so they are no longer at
 * risk from the postInit timing issue, but a maintainer may still want to
 * know which settings are considered restart-sensitive by CBA itself.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */

private _unapplied = keys GVAR(overrideValues);

if (_unapplied isNotEqualTo []) then {
    WARNING_1("%1 overridden setting(s) were never applied - the owning mod may not be loaded, or the setting name is wrong:",count _unapplied);
    {
        WARNING_1("  - %1",_x);
    } forEach _unapplied;
};

private _needRestart = missionNamespace getVariable ["CBA_settings_needRestart", []];
private _affected = GVAR(overriddenSettings) select {toLower _x in _needRestart};

if (_affected isEqualTo []) exitWith {
    INFO("No overridden settings are flagged needRestart by CBA.");
};

INFO_1("%1 overridden setting(s) are flagged 'needRestart' by CBA - already applied as soon as they registered, so this is informational only:",count _affected);
{
    INFO_1("  - %1",_x);
} forEach _affected;
