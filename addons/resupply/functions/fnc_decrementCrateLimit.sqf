#include "..\script_component.hpp"

/*
 * Author: Andx
 * Consumes one unit of a crate type's remaining stock on a depot object,
 * seeding QGVAR(stock) from the depot's QGVAR(limits) config on first use.
 * No-op if the depot has no configured limit for this type (unlimited).
 * Server-only - called by spawnCrate after a crate has actually been spawned.
 *
 * Arguments:
 * 0: Depot object, or objNull for no limit <OBJECT>
 * 1: Crate type <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [myDepot, "ammo"] call ttt_resupply_fnc_decrementCrateLimit;
 *
 * Public: No
 */

params [["_container", objNull, [objNull]], ["_type", "", [""]]];

if (isNull _container) exitWith {};

private _limits = createHashMapFromArray (_container getVariable [QGVAR(limits), []]);
if !(_type in _limits) exitWith {};

private _stock = createHashMapFromArray (_container getVariable [QGVAR(stock), []]);
private _current = _stock getOrDefault [_type, _limits get _type];

_stock set [_type, (_current - 1) max 0];
_container setVariable [QGVAR(stock), _stock toArray false, true];
