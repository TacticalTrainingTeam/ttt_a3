#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies Loadout read from missionNamespace.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * 0: Sucess 
 *
 * Example:
 * [this] call ttt_mpls_fnc_applyLoadout
 *
 * Public: No
 */

params ["_player"];

TRACE_1("fnc_applyLoadout",_this);

if ((GVAR(loadoutNamespace) getVariable (getPlayerUID _player)) isEqualTo []) exitWith {};

[_player, GVAR(loadoutNamespace) getVariable (getPlayerUID _player)] call CBA_fnc_setLoadout;
INFO_1("Saved Loadout found for player %1 ,applying ...",_player);

true
