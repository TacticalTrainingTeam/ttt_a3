#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Saves the current players loadout to the missionNamespace.
 *
 * Arguments:
 * 0: PLAYER <OBJECT>
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
    ["_uid", "", [""]]];
TRACE_1("fnc_saveLoadout",_this);

if (_uid isNotEqualTo "") then {
    GVAR(loadoutNamespace) setVariable [_uid, [_player] call CBA_fnc_getLoadout, true];
} else {
    GVAR(loadoutNamespace) setVariable [getPlayerUID _player, [_player] call CBA_fnc_getLoadout, true];
};

GVAR(loadoutNamespace) setVariable [getPlayerUID _player, [_player] call CBA_fnc_getLoadout, true];
INFO_1("Loadout Saved for player %1",_player);

true
