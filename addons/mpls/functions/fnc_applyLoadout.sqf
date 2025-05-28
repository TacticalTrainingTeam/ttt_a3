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

params ["_player"];
TRACE_1("fnc_applyLoadout",_this);

if ((QGVAR(loadoutDB) get (getPlayerUID _player)) isNotEqualTo []) then {
    [_player, QGVAR(loadoutDB) get (getPlayerUID _player)] call CBA_fnc_setLoadout;
    INFO_1("Saved Loadout found for player %1, applying", _player);
};
