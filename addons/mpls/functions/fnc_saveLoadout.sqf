#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Saves the current players loadout to the missionNamespace.
 *
 * Arguments:
 * 0: PLAYER <OBJECT>
 * 1: UID <STRING> (default: "")
 * 2: Update Diary <BOOL> (default: true; set false for saves that shouldn't overwrite the
 *    player-visible "saved loadout" diary entry, e.g. a curator-triggered snapshot save)
 *
 * Return Value:
 * Success <BOOL>
 *
 * Example:
 * [this] call ttt_mpls_fnc_saveLoadout
 *
 * Public: Yes
 */

params [
    "_player",
    ["_uid", "", [""]],
    ["_updateDiary", true, [true]]
    ];
private _isZeus = !isNull (findDisplay 312);

private _playersInSpectator = call ace_spectator_fnc_players;

if (!hasInterface || _isZeus || _player in _playersInSpectator) exitWith {false};

if (_uid isEqualTo "") then {
    _uid = getPlayerUID _player;
};

private _loadout = [_player] call CBA_fnc_getLoadout;

GVAR(loadoutNamespace) setVariable [_uid, _loadout, true];

if (_updateDiary) then {
    [_loadout] call FUNC(updateDiary);
};

INFO_2("Loadout Saved for player %1 is %2",_player,_loadout);

[QGVAR(API_loadoutSaved), [_player, _loadout]] call CBA_fnc_localEvent;

true
