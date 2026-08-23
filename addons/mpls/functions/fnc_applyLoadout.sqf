#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies Loadout read from missionNamespace.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: UID <STRING> (default: "", falls back to getPlayerUID _player)
 *
 * Return Value:
 * 0: Sucess <BOOL>
 *
 * Example:
 * [this] call ttt_mpls_fnc_applyLoadout
 *
 * Public: No
 */

params [
    "_player",
    ["_uid", "", [""]]
];

private _isZeus = !isNull (findDisplay 312);
if (!hasInterface || _isZeus) exitWith {false};

if (_uid isEqualTo "") then {
    _uid = getPlayerUID _player;
};

if ((GVAR(loadoutNamespace) getVariable [_uid, []]) isEqualTo []) exitWith {false};

private _oldLoadout = [_player] call CBA_fnc_getLoadout;

private _newLoadout = GVAR(loadoutNamespace) getVariable _uid;

[_player, _newLoadout] call CBA_fnc_setLoadout;

INFO_2("Saved Loadout found for player %1, applying %2",_player,_newLoadout);

[QGVAR(API_loadoutApplied), [_player, _newLoadout, _oldLoadout]] call CBA_fnc_localEvent;

true
