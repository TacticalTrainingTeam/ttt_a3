#include "..\script_component.hpp"
/*
 * Authors: Andx
 * Assigns last saved loadout again after respawn.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Killer <OBJECT>
 * 2: Instigator <OBJECT>
 * 3: useEffects <BOOLEAN>
 *
 * Return Value:
 * True
 *
 * Example:
 * [player] call ttt_mpls_fnc_handleKilled
 *
 * Public: No
 */

params ["_unit", "_killer", "_instigator", "_useEffects"];
TRACE_1("fnc_handleRespawn",_this);

_unit call FUNC(saveLoadout);