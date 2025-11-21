#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Assigns last saved loadout again after respawn.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * <NONE>
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
    TIME_AFTER_RESPAWN
] call CBA_fnc_waitAndExecute;
