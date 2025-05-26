#include "..\script_component.hpp"
/*
 * Authors: You
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

private _loadoutDB = missionNamespace getVariable [QGVAR(loadoutDB), nil];

_player setUnitLoadout (_loadoutDB get (getPlayerUID _player));


