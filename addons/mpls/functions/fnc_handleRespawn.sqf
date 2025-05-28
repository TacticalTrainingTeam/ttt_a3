#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Handles loadout after respawn.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this] call ttt_mpls_fnc_handleRespawn
 *
 * Public: No
 */

params ["_unit", "_corpse"];
TRACE_1("fnc_handleRespawn",_this);

[_corpse] call FUNC(saveLoadout); //Loadout der Leiche speichern

[
    {
        params ["_player"];
        _player call FUNC(applyLoadout);
    },
    [_unit],
    5
] call CBA_fnc_waitAndExecute;
