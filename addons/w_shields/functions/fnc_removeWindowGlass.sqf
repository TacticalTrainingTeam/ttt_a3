#include "script_component.hpp"

/*
 * Author: [W] Miller
 * Zerstört alle Fenster eines Gebäudes.
 *
 * Execute: On Server
 *
 * Arguments:
 * 0:
 *      OBJECT - Target building
 *
 * Return Value:
 * None
 *
 * Example:
 * [BUILDING] call Framework_fnc_buildingShield;
 *
 * Public: No
 */
params [
    [ "_target", objNull, [objNull] ]
];

private _allHP = (getAllHitPointsDamage _target) select 0;

{
    if ( ("glass" in _X) || {"window" in _X} ) then { _target setHitPointDamage [_X, 1, false] };
} forEach _allHP;
