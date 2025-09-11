#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies Loadout read from missionNamespace.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Sucess <BOOL>
 *
 * Example:
 * [this] call ttt_mpls_fnc_applyLoadout
 *
 * Public: No
 */

params ["_player"];

private _isZeus = isCurator _player;
if (!hasInterface || _isZeus ) exitWith {false};

if ((GVAR(loadoutNamespace) getVariable [(getPlayerUID _player),[]]) isEqualTo []) exitWith {false};

private _loadout =  GVAR(loadoutNamespace) getVariable (getPlayerUID _player);

[_player, _loadout] call CBA_fnc_setLoadout;

INFO_2("Saved Loadout found for player %1, applying %2",_player,_loadout);

true
