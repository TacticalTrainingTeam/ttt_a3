#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Handles the loadout save if a player respawns manually.
 *
 * Arguments:
 * 0: Unit that got killed <OBJECT>
 * 1: Object that Killed Unit <OBJECT>
 * 2: Unit that pulled the trigger <OBJECT>
 *
 * Return Value:
 * <NONE>
 *
 * Example:
 * [player, killer, instigator] call ttt_mpls_fnc_handleKilled
 *
 * Public: No
 */

params ["_unit", "_killer", "_instigator", ""];

if (_unit == _killer || _unit == _instigator) then {
    [_unit, getPlayerUID _unit] call FUNC(saveLoadout);
};
