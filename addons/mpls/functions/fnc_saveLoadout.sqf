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

if (!hasInterface) exitWith {};

if (_uid isEqualTo "") then {
    _uid = getPlayerUID _player;
};

private _loadout = [_player] call CBA_fnc_getLoadout;

GVAR(loadoutNamespace) setVariable [_uid, _loadout, true];

INFO_2("Loadout Saved for player %1 is %2",_player,_loaodout);

true
