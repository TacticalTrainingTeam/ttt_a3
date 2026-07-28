#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Removes the deployed object and restores the caller's backpack state. Part
 * of the TTT "deployable panel/tent" framework.
 *
 * Arguments:
 * 0: Facility <OBJECT>
 * 1: Player <OBJECT>
 * 2: Config <HASHMAP> - supported keys:
 *    "hasItemVar"      <STRING> - backpack variable flipped back once stowed
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

deleteVehicle _target;

[(_config get "hintLoaded")] call ace_common_fnc_displayText;

_caller switchMove "";
(unitBackpack _caller) setVariable [(_config get "hasItemVar"), true, true];
