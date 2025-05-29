#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Saves the current players loadout to the missionNamespace.
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
 * Public: Yes
 */

params ["_player"];
TRACE_1("fnc_saveLoadout",_this);

GVAR(loadoutDB) set [getPlayerUID _player, [_player] call CBA_fnc_getLoadout];
INFO_1("Loadout Saved for player %1",_player);

//Save Loadout every ten minutes
[
    {
        params ["_player"];
        _player call FUNC(saveLoadout);
    },
    [_player],
    600
] call CBA_fnc_waitAndExecute;

true;
