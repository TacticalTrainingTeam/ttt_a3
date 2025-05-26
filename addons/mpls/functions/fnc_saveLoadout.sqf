#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Saves the current players loadout to the missionProfileNamespace.
 *
 * Arguments:
 * 0: PLAYER <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this] call ttt_mpls_fnc_saveLoadout
 *
 * Public: No
 */

params ["_player"];
TRACE_1("fnc_saveLoadout",_this);

GVAR(loaodutDB) set [getPlayerUID _player, getUnitLoadout _player];


[ // recall function after 10 minutes
    {
        [_player] call FUNC(saveLoaodut);
    },
    [],
    600
] call CBA_fnc_waitAndExecute;
