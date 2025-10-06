#include "..\script_component.hpp"
/*
 * Author: [W] Miller
 * Fügt einem Fahrzeug ein Vehicle Shield hinzu-
 * Kritische Komponenten sind immer noch angreifbar.
 *
 * Arguments:
 * 0:
 *      OBJECT - Target the vehicle shield is applied to
 * 1 (Optional):
 *      BOOLEAN - Prevent fuel draining from the damage?
 *      Default: false
 * 2 (Optional):
 *      ARRAY - Prevent the [MainRotor, RearRotor] from beeing disabled?
 *      Default: [true, true]
 * 3 (Optional):
 *      BOOLEAN - If the hull damage is capped, kill the engine?
 *      Default: false
 *
 * Return Value:
 * None
 *
 * Example:
 * [Vehicle, false, [false,false], false] call Framework_shield_fnc_addVehicleShield;
 *
 * Public: No
 */
params [
    [ "_target",            objNull,        [objNull]   ],
    [ "_preventFuelDrain",  false,          [true]      ],
    [ "_rotors",            [false, false],   [[]]        ],
    [ "_killEngine",        false,          [true]      ]
];

_rotors params [
    [ "_preventHRotorKill",   true,           [true]      ],
    [ "_preventVRotorKill",   true,           [true]      ]
];

_target setVariable [QGVAR(hasVHS), true];
_target setVariable [QGVAR(preventFuelDrain), _preventFuelDrain];
_target setVariable [QGVAR(preventHRotorKill), _preventHRotorKill];
_target setVariable [QGVAR(preventVRotorKill), _preventVRotorKill];
_target setVariable [QGVAR(killEngine), _killEngine];

private _allHitPoints = (getAllHitPointsDamage _target) select 0;
_allHitPoints = _allHitPoints - ["hithull"];
_allCritHPs = [];
_allRegHPs = [];
{
    _X = toLower _X;
    if (
        ("wheel" in _X) || {
            ("light" in _X) || {
                ("slat" in _X) || {
                    ("era" in _X) || {
                        ("hull" in _X)
        }}}}
    ) then {continue};
    if (
        ("engine" in _X)|| {
            ("fuel" in _X) || {
                ("hrotor" in _X) || {
                    ("vrotor" in _X) || {
                        ("gun" in _X) || {
                            ("turret" in _X)
        }}}}}
    ) then {
        _allCritHPs pushBack _X;
    } else {
        _allRegHPs pushBack _X;
    }
} forEach _allHitPoints;

_target setVariable [QGVAR(allRegHP), _allRegHPs, true];
_target setVariable [QGVAR(allCritHP), _allCritHPs, true];
_target setVariable [QGVAR(hitHash), createHashMap, true];

//Add the HandleDamage Eventhandler
diag_log format["Init GrpW VHS für Fahrzeug %1 | Typ %2", _target, typeOf _target];
[{
    params ["_target"];

    _target addEventHandler [
        "HandleDamage",
        {_this call FUNC(handleVehDamage);}
    ];
}, _target] call CBA_fnc_execNextFrame;
