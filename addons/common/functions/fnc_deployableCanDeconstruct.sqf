#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic ACE interaction condition: can the caller deconstruct/stow the given
 * deployed facility object. Part of the TTT "deployable panel/tent" framework.
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

!(_target getVariable [(_config get "inUseVar"), false]) &&
{!((unitBackpack _caller) getVariable [(_config get "hasItemVar"), true])} &&
{(_config get "supportedBackpacks") find (backpack _caller) != -1}
