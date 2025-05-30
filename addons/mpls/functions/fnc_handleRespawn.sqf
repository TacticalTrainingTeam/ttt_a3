#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Assigns last saved loadout again after respawn.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * True
 *
 * Example:
 * [player] call ttt_mpls_fnc_handleRespawn
 *
 * Public: No
 */

params ["_unit", ""];

[
    {
        params ["_unit"];
        _unit call FUNC(applyLoadout);
    },
    [ _unit],
    5
] call CBA_fnc_waitAndExecute;
