#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic ACE interaction condition: can the caller construct their deployable
 * item. Part of the TTT "deployable panel/tent" framework.
 *
 * Arguments:
 * 0: Args passed in by ACE's interaction menu <ARRAY> - [target, caller, config]
 *
 * Return Value:
 * Can construct <BOOLEAN>
 *
 * Public: No
 */

(_this select 0) params ["_target", "", "_config"];

((_config get "supportedBackpacks") find (backpack _target) != -1) &&
{(unitBackpack _target) getVariable [(_config get "hasItemVar"), true]}
