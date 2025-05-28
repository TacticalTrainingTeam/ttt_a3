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

private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];

_loadoutDB set [getPlayerUID _player, getUnitLoadout _player];
INFO_1("Loadout Saved for player %1", _player);
