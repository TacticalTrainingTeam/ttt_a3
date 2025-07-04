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

if (_uid isEqualTo "") then {
    _uid = getPlayerUID _player;
};

GVAR(loadoutNamespace) setVariable [_uid, [_player] call CBA_fnc_getLoadout, true];

INFO_1("Loadout Saved for player %1",_player);

true
