#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Applies Loadout from missionNamepsace.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [this] call ttt_mpls_fnc_applyLoadout
 *
 * Public: No
 */

params [["_player", ACE_player, [ACE_player]]];

TRACE_1("fnc_applyLoadout",_this);

if ((GVAR(loadoutDB) get (getPlayerUID _player)) isNotEqualTo []) then {
    [_player, GVAR(loadoutDB) get (getPlayerUID _player)] call CBA_fnc_setLoadout;
    INFO_1("Saved Loadout found for player %1 ,applying ...",_player);
};

true;