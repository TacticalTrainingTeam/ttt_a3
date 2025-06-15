#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Handles the loadout save if a player is killed.
 *
 * Arguments:
 * 0: Unit that got killed <OBJECT>
 *
 * Return Value:
 * <NONE>
 *
 * Example:
 * [player] call ttt_mpls_fnc_handleKilled
 *
 * Public: No
 */

params ["_unit", "", "", ""];

if (hasInterface) then {
    _unit call FUNC(saveLoadout);
};


