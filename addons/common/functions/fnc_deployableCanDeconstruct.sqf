#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic ACE interaction condition: can the caller deconstruct/stow the given
 * deployed facility object. Part of the TTT "deployable tarp" framework.
 *
 * Arguments:
 * 0: Args passed in by ACE's interaction menu <ARRAY> - [target, caller, config]
 *
 * Return Value:
 * Can deconstruct <BOOLEAN>
 *
 * Public: No
 */

(_this select 0) params ["_target", "_caller", "_config"];

private _itemClassname = _target getVariable [QGVAR(sourceItem), ""];
private _configTarpItems = (_config get "tarpItems") apply {_x select 0};

(_itemClassname in _configTarpItems) &&
{!(_target getVariable [(_config get "inUseVar"), false])} &&
{_caller canAdd [_itemClassname, 1]}
