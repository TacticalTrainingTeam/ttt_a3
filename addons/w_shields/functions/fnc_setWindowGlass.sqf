#include "..\script_component.hpp"
/*
 * Author: [W] Miller (reworked by Andx)
 *
 * Description:
 * Breaks or repairs all glass/window hitpoints of a building - setting their damage to 1 shatters them, 0
 * repairs them back to intact, the same mechanism used in both directions.
 *
 * Execute: On Server
 *
 * Arguments:
 * 0: Target building <OBJECT>
 * 1: Break the windows? <BOOLEAN> (default: true)
 *
 * Return Value:
 * None
 *
 * Example:
 * [BUILDING, false] call ttt_w_shields_fnc_setWindowGlass;
 *
 * Public: No
 */
params [
    ["_target", objNull, [objNull]],
    ["_broken", true, [true]]
];

if (isNull _target) exitWith {};

private _allHP = (getAllHitPointsDamage _target) select 0;
private _damage = if (_broken) then {1} else {0};

{
    if (("glass" in _X) || {"window" in _X}) then { _target setHitPointDamage [_X, _damage, false] };
} forEach _allHP;
