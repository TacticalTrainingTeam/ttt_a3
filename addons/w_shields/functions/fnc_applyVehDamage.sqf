#include "..\script_component.hpp"
/*
 * Author: [W] Miller
 *
 * Applies the damage values sent from the VHS
 *
 * Arguments:
 * 0:
 *      OBJECT - Target the vehicle shield is applied to.
 * 1:
 *      STRING - HitPoint.
 * 2:
 *      NUMBER - Damage transfered to script.
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_hitPoint", "_addDamage"];

//get current HitPoint damage and target HitPoint Lists
private _currDamage = _unit getHitPointDamage _hitPoint;
private _unitRegHPs = _unit getVariable QGVAR(allRegHP);
private _unitCritHPs = _unit getVariable QGVAR(allCritHP);

if (_hitPoint == "hithull") then {
    //cap hull damage at 0.8 to prevent explosions
    private _newdamage = (_currDamage + _addDamage) min 0.8;
    _unit setHitPointDamage ["hithull", _newDamage];
} else {
    //cap critical hitpoints at 0.9 - prevents hardcoded explosions but they still get disabled
    private _maxValue = [1, 0.9] select (_hitPoint in _unitCritHPs);
    if (("gun" in _hitPoint) || {"turret" in _hitPoint}) then { _maxValue = 1 }; //except for guns/turrets. They need 100% damage to get disabled.

    //check for VHS param kill preventions
    if (("fuel" in _hitPoint) && {_unit getVariable [QGVAR(preventFuelDrain), false]}) then { _maxValue = 0.8; };
    if (("hrotor" in _hitPoint) && {_unit getVariable [QGVAR(preventHRotorKill), false]}) then { _maxValue = 0.8; };
    if (("vrotor" in _hitPoint) && {_unit getVariable [QGVAR(preventVRotorKill), false]}) then { _maxValue = 0.8; };

    //aplly damage to the hitpoint
    private _newdamage = (_currDamage + _addDamage) min _maxValue;
    _unit setHitPointDamage [_hitPoint, _newDamage];
};
