#include "..\script_component.hpp"

/*
 * Author: Andx
 * Returns the remaining amount of a crate type available at a depot object,
 * as configured via its QGVAR(limits) variable and tracked via QGVAR(stock).
 * Read-only - does not consume any stock. Used both client-side (ACE action
 * condition) and server-side (spawnCrate's authoritative guard).
 *
 * Arguments:
 * 0: Depot object to check, or objNull for no limit <OBJECT>
 * 1: Crate type <STRING>
 *
 * Return Value:
 * Remaining amount, or -1 if unlimited (no container, or the type has no
 * configured limit) <NUMBER>
 *
 * Example:
 * [myDepot, "ammo"] call ttt_resupply_fnc_getCrateLimit;
 *
 * Public: No
 */

params [["_container", objNull, [objNull]], ["_type", "", [""]]];

if (isNull _container) exitWith { -1 };

private _stock = createHashMapFromArray (_container getVariable [QGVAR(stock), []]);
if (_type in _stock) exitWith { _stock get _type };

private _limits = createHashMapFromArray (_container getVariable [QGVAR(limits), []]);
_limits getOrDefault [_type, -1]
