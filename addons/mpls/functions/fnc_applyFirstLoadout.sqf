#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies the very first saved loadout (from spawn) to a player. Used by the ZEN
 * revert-loadout action to reset a player back to their initial gear.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Success <BOOL>
 *
 * Example:
 * [_player] call ttt_mpls_fnc_applyFirstLoadout
 *
 * Public: No
 */

params ["_player"];

INFO_1("applyFirstLoadout called for %1",_player);

private _isZeus = !isNull (findDisplay 312);
if (!hasInterface || _isZeus) exitWith {
    INFO_2("applyFirstLoadout exiting early, hasInterface=%1 isZeus=%2",hasInterface,_isZeus);
    false
};

private _uid = [getPlayerUID _player, "_first"] joinString "";
private _firstLoadout = GVAR(loadoutNamespace) getVariable [_uid, []];

if (_firstLoadout isEqualTo []) exitWith {
    INFO_1("applyFirstLoadout: no first loadout saved for key %1",_uid);
    false
};

private _oldLoadout = [_player] call CBA_fnc_getLoadout;

[_player, _firstLoadout] call CBA_fnc_setLoadout;

hint LLSTRING(zenLoadoutReverted);

INFO_2("First Loadout applied for player %1, applying %2",_player,_firstLoadout);

[QGVAR(API_loadoutApplied), [_player, _firstLoadout, _oldLoadout]] call CBA_fnc_localEvent;

true
