#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Saves the current players loadout to the missionNamespace.
 *
 * Arguments:
 * 0: PLAYER <OBJECT>
 * 1: UID <STRING> (default: "")
 *
 * Return Value:
 * True
 *
 * Example:
 * [this] call ttt_mpls_fnc_saveLoadout
 *
 * Public: Yes
 */

params [
    "_player",
    ["_uid", "", [""]]
    ];


GVAR(loadoutNamespace) setVariable [_uid, [_player] call CBA_fnc_getLoadout, true];

INFO_1("Loadout Saved for player %1",_player);

true
