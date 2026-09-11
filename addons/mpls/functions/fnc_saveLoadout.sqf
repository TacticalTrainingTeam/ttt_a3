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
 * 3: Is Retry <BOOL> (default: false; internal use only, see loadoutNamespace guard below)
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
    ["_updateDiary", true, [true]],
    ["_isRetry", false, [false]]
    ];
private _isZeus = !isNull (findDisplay 312);

private _playersInSpectator = call ace_spectator_fnc_players;

if (!hasInterface || _isZeus || _player in _playersInSpectator) exitWith {false};

// loadoutNamespace is created and broadcast once by the server at mission start; on the (rare)
// chance this runs before a client has received it, retry once instead of hitting
// "Reserved variable in expression" (setVariable on a nil namespace) and silently losing the save
if (isNil QGVAR(loadoutNamespace) && {_isRetry}) exitWith {
    ERROR_1("loadoutNamespace unavailable, could not save loadout for %1",_player);
    false
};

if (isNil QGVAR(loadoutNamespace)) exitWith {
    [FUNC(saveLoadout), [_player, _uid, _updateDiary, true], 2] call CBA_fnc_waitAndExecute;
    false
};

if (_uid isEqualTo "") then {
    _uid = getPlayerUID _player;
};

private _loadout = [_player] call CBA_fnc_getLoadout;

GVAR(loadoutNamespace) setVariable [_uid, _loadout, true];

if (_updateDiary) then {
    [_loadout] call FUNC(updateDiary);
};

INFO_2("Loadout Saved for player %1 is %2",_player,_loadout);

// spawned so event handlers can suspend (e.g. sleep/waitUntil) even though saveLoadout
// itself often runs from an unscheduled context (CBA_fnc_waitAndExecute, disconnect EH, ...)
[QGVAR(API_loadoutSaved), [_player, _loadout]] spawn {
    _this call CBA_fnc_localEvent;
};

true
