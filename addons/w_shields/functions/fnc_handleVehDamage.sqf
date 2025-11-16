#include "..\script_component.hpp"
/*
 * Author: [W] Miller
 * Handles all incoming damage.
 *
 * Arguments: see https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HandleDamage
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

//gather relevant arrays and variables
private _unitRegHPs = _unit getVariable QGVAR(allRegHP);
private _unitCritHPs = _unit getVariable QGVAR(allCritHP);
private _hitHash = _unit getVariable QGVAR(hitHash);
private _unitRegHPsC = count _unitRegHPs;
private _unitCritHPsC = count _unitCritHPs;
private _excessDmg = 0;

// get current hitpoint damage to return at the end of the script
private _currDamage = if (_context == 0) then {
    _unit getHitPointDamage "hithull"
} else {
   _unit getHitPointDamage _hitPoint
};

//ignore irrelevant damage
if (_damage <= 0 || {"#light" in _hitPoint}) exitWith {};

//get current hash
private _currHash = _hitHash getOrDefault [diag_frameNo, [], true];

//this allows for only one execution of the processing part of the script at the next frame
//the idea was kindly borrowed frome the ace3 vehicle damage scripts
if (_currHash isEqualTo []) then {
    [
        {
            params ["_procFrame", "_unit"];
            private _hitHash = _unit getVariable QGVAR(hitHash);
            private _currHash = _hitHash deleteAt _procFrame;

            if (_currHash isEqualTo []) exitWith {};

            private _pointArr = [];
            private _dmgArr = [];
            private _excessDmg = 0;
            //combine hits to the same hitpoint to one damage value, so that we require less actions later on
            {
                _X params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

                private _currDamage = if (_context == 0) then {
                    _hitPoint = "hithull";
                    _unit getHitPointDamage _hitPoint
                } else {
                    _unit getHitPointDamage _hitPoint
                };
                private _newDamage = _damage - _currDamage;
                if (_newDamage <= 0) then {continue};

                private _arrIndex = _pointArr pushBackUnique _hitPoint;
                if (_arrIndex isEqualTo -1) then {
                    _arrIndex = _pointArr find _hitPoint;
                    _dmgArr set [_arrIndex, (_dmgArr select _arrIndex) + _newDamage];
                } else {
                    _dmgArr pushBack _newDamage;
                };
            } forEach _currHash;

            //check if we have new hull damage in this processing
            private _hullIndex = _pointArr find "hithull";
            if (_hullIndex > -1) then {

                //calculate if there is excess damage (all damage exceeding the 0.8 cap)
                private _hullDmg = _dmgArr select _hullIndex;
                private _currHullDmg = _unit getHitPointDamage "hithull";
                if ((_currHullDmg + _hullDmg) > 0.8) then {
                    _excessDmg = (_currHullDmg + _hullDmg) - 0.8;
                };

                //excess damage will be applyed to all critical systems, since we are basically "overkilling" the protected vehicle. In the base game it would have exploded by now
                //critical systems (hitpoints) can only advance "one step" (eg. white -> yellow // yellow -> red), so that the player may be able to save the vehicle by getting away
                //excess damage can only generate from hits to the hull, never from components
                if (_excessDmg > 0) then {
                    private _unitCritHPs = _unit getVariable QGVAR(allCritHP);
                    private _unitCritHPsC = count _unitCritHPs;

                    {
                        private _currDamage = _unit getHitPointDamage _X;
                        private _maxDmg = [0.65, 1] select ((_currDamage >= 0.33) && {_currDamage < 0.66});
                        private _hpDamage = (_currDamage + _excessDmg) min _maxDmg;

                        //special effects for engine
                        if ("engine" in _X) then {
                            if (_unit getVariable [QGVAR(killEngine), true]) then {
                                //kill engine on hull damage cap if requested
                                _hpDamage = 1;
                            } else {
                                //25% chance for engine failure when hull damage cap exceeded
                                if ((random 1) >= 0.75) then {
                                    _hpDamage = 1;
                                };
                            };
                        };

                        private _arrIndex = _pointArr pushBackUnique _X;
                        if (_arrIndex isEqualTo -1) then {
                            _arrIndex = _pointArr find _X;
                            _dmgArr set [_arrIndex, (_dmgArr select _arrIndex) + _hpDamage];
                        } else {
                            _dmgArr pushBack _hpDamage;
                        };
                    } forEach _unitCritHPs;
                };
            };

            {
                //apply the damage in the next script
                [_unit, _X, _dmgArr select _forEachIndex] call FUNC(applyVehDamage);
            } forEach _pointArr;
        },
        [diag_frameNo, _unit]
    ] call CBA_fnc_execNextFrame;
};

[QGVAR(API_vehicleShieldTriggered), [_unit, _source, _instigator]] call CBA_fnc_localEvent;

// add all relevant hits to the hash and safe it
_currHash pushBack _this;
_hitHash set [diag_frameNo, _currHash];

//return just already existing damage
_currDamage
