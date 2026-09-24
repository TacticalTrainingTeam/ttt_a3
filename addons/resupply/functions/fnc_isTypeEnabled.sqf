#include "..\script_component.hpp"

/*
 * Author: Andx
 * Checks whether a crate type is enabled at a depot. Only the gated
 * pre-filled types (see GVAR(prefilledTypes)) need to be enabled explicitly,
 * by listing them in the depot's QGVAR(enabledTypes) variable. All other types
 * are always enabled. Without a depot (script/Zeus spawns) nothing is gated,
 * since those calls are already an explicit decision by the mission maker.
 * Read-only. Used both client-side (ACE action condition) and server-side
 * (spawnCrate's authoritative guard).
 *
 * Arguments:
 * 0: Depot object to check, or objNull for no gating <OBJECT>
 * 1: Crate type <STRING>
 *
 * Return Value:
 * Enabled <BOOLEAN>
 *
 * Example:
 * [myDepot, "uav"] call ttt_resupply_fnc_isTypeEnabled;
 *
 * Public: No
 */

params [["_container", objNull, [objNull]], ["_type", "", [""]]];

private _prefilled = GVAR(prefilled) getOrDefault [_type, []];

if (_prefilled isEqualTo [] || {isNull _container}) exitWith { true };

_prefilled params ["", "", "", "", "", "_gated"];

!_gated || {_type in (_container getVariable [QGVAR(enabledTypes), []])}
