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
 * Public: No
 */

params ["_player"];
TRACE_1("fnc_saveLoadout",_this);

QGVAR(loadoutDB) set [getPlayerUID _player, [_player] call CBA_fnc_getLoadout];
INFO_1("Loadout Saved for player %1", _player);
