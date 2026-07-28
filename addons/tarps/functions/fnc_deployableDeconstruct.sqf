#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Removes the deployed object and gives the matching tarp item back to the
 * caller. Part of the TTT "deployable tarp" framework.
 *
 * Arguments:
 * 0: Facility <OBJECT>
 * 1: Player <OBJECT>
 * 2: Config <HASHMAP> - supported keys:
 *    "hintLoaded"      <STRING> - localized text shown once stowed
 *    "onDeconstruct"   <CODE> (optional) - called as [_target, _caller, _config] before deletion, for addon specific cleanup
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target", "_caller", "_config"];

private _onDeconstruct = _config getOrDefault ["onDeconstruct", {}];
[_target, _caller, _config] call _onDeconstruct;

private _itemClassname = _target getVariable [QGVAR(sourceItem), ""];

[QGVAR(tarpDeconstructed), [_target, _caller, _itemClassname, _config], _caller] call CBA_fnc_localEvent;

deleteVehicle _target;

[(_config get "hintLoaded")] call ace_common_fnc_displayText;

_caller switchMove "";
_caller addItemToBackpack _itemClassname;
