#include "script_component.hpp"
/*
 * Author: [W] Miller
 * Fügt einem Fahrzeug ein Vehicle Shield hinzu-
 * Kritische Komponenten sind immer noch angreifbar.
 *
 * Arguments:
 * 0:
 *      OBJECT - Target the vehicle shield is applied to
 * 1 (Optional):
 *      BOOLEAN - Allow the engine to be disabled? Default: true
 * 2 (Optional):
 *      BOOLEAN - Allow the fuel tank to be disabled? Default: true
 * 3 (Optional):
 *      ARRAY - Allow the [MainRotor, RearRotor] to be disabled? Default: [true, true]
 * 4 (Optional):
 *      BOOLEAN - If the hull damage is capped, kill the engine? Default: true
 * 5 (Optional):
 *      BOOLEAN - Allow the vehicle to be destroyed completely? With this set to false, the vehicle can only be destroyed by scripting commands. Default: false
 * 6 (Optional):
 *      NUMBER - How many hits exceeding the normal damage limit can the vehicle take? Default: 20
 *               If Arg. 3 is set to true, the vehicle can be damaged up to 80%. More damage is blocked and each hit that would theoretically "kill" the vehicle get's counted as "excessive hit".
 *               Once the threshold set in arg 4 is reached, the vehicle can be destroyed with the next hit.
 *
 * Return Value:
 * None
 *
 * Example:
 * [Vehicle, true, true, [true,true], true, true, 25] call Framework_fnc_addVehicleShield;
 *
 * Public: No
 */
params [
    [ "_target",            objNull,        [objNull]   ],
    [ "_allowEngineKill",   true,           [true]      ],
    [ "_allowFuelKill",     true,           [true]      ],
    [ "_rotors",            [true, true],   [[]]        ],
    [ "_killEngine",        true,           [true]      ],
    [ "_canExplode",        false,          [true]      ],
    [ "_excessiveHits",     20,             [1]         ]
];

_rotors params [
    [ "_allowHRotorKill",   true,           [true]      ],
    [ "_allowVRotorKill",   true,           [true]      ]
];

if (!(_allowEngineKill)) then {_target setVariable ["WVS_allowEngineKill", _allowEngineKill, true];};
if (!(_allowFuelKill)) then {_target setVariable ["WVS_allowFuelKill", _allowFuelKill, true];};
if (!(_allowHRotorKill)) then {_target setVariable ["WVS_allowHRotorKill", _allowHRotorKill, true];};
if (!(_allowVRotorKill)) then {_target setVariable ["WVS_allowVRotorKill", _allowVRotorKill, true];};
if (!(_killEngine)) then {_target setVariable ["WVS_killEngine", _allowVRotorKill, true];};
if (_canExplode) then {_target setVariable ["WVS_canExplode", _canExplode, true];};
if (_excessiveHits != 20) then {_target setVariable ["WVS_excessiveHits", _excessiveHits, true];};

//Add the HandleDamage Eventhandler
_target addEventHandler [
    "HandleDamage",
    {
        params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

        //get some variables
        private _returnDamage = 0;
        _hitPointEHits = _unit getVariable [format["WVS_%1", _hitPoint], 0];

        if (

            ("hull" in _hitPoint) || {
                (_hitPoint == "") || {
                    (("engine" in _hitPoint) && !(_unit getVariable ["WVS_allowEngineKill", true])) || {
                        (("fuel" in _hitPoint)  && !(_unit getVariable ["WVS_allowFuelKill", true])) || {
                            (("hrotor" in _hitPoint)  && !(_unit getVariable ["WVS_allowHRotorKill", true])) || {
                                (("vrotor" in _hitPoint)  && !(_unit getVariable ["WVS_allowVRotorKill", true]))
            }}}}}

        ) then {
            
            if (_damage > 0.8) then {
                if ((_unit getVariable ["WVS_killEngine", true]) && {"hull" in _hitPoint}) then { _unit setHitPointDamage ["engine", 1]; systemChat "kill Engine";};
                // if the total damage to the hitpoint is higher then 0.8...
                // ... and it can explode ...
                if (_unit getVariable ["WVS_canExplode", false]) then {
                    //... add one excessive hit
                    _unit setVariable [format["WVS_%1", _hitPoint], (_hitPointEHits + 1), true];
                    if (_hitPointEHits > _unit getVariable ["WVS_excessiveHits", 20]) then {
                        //if we exceed the set count of excessive hits, let the damage pass
                        _returnDamage = _damage;
                    } else {
                        //if not, cap at 0.8
                        _returnDamage = 0.8;
                    };
                } else {
                    //... if not, cap at 0.8
                    _returnDamage = 0.8;
                };
            } else {
                //if not, let the game handle the damage on it's own
                _returnDamage = _damage;
            };
        } else {
            _returnDamage = _damage;
        };

        //return the damage value to the engine
        _returnDamage
    }
];
