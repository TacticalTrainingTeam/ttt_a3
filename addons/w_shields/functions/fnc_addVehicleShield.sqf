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
 *      Default: true
 * 4 (Optional):
 *      BOOLEAN - Remove any pre-existing HandleDamage handlers on the target first?
 *      Mods like ACE's Advanced Vehicle Damage (ace_vehicle_damage) attach their own HandleDamage handler
 *      to Tanks/APCs and, left in place, destroy the vehicle via their own damage model regardless of our
 *      hithull cap. Pruning first guarantees ours is the only (and therefore last) handler.
 *      Default: true
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
    [ "_rotors",            [true, true],   [[]]        ],
    [ "_killEngine",        true,           [true]      ],
    [ "_prune",             true,           [true]      ]
];

_rotors params [
    [ "_preventHRotorKill",   true,          [true]      ],
    [ "_preventVRotorKill",   true,          [true]      ]
];

_target setVariable [QGVAR(hasVHS), true, true];
_target setVariable [QGVAR(preventFuelDrain), _preventFuelDrain];
_target setVariable [QGVAR(preventHRotorKill), _preventHRotorKill];
_target setVariable [QGVAR(preventVRotorKill), _preventVRotorKill];
_target setVariable [QGVAR(killEngine), _killEngine];

private _allHitPoints = (getAllHitPointsDamage _target) select 0;
_allHitPoints = _allHitPoints - ["hithull"];
private _allCritHPs = [];
private _allRegHPs = [];
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

//Strip competing HandleDamage handlers (eg. ace_vehicle_damage) so ours ends up as the sole/last one - see param 4 above
if (_prune) then {_target removeAllEventHandlers "HandleDamage";};

//Add the HandleDamage Eventhandler
INFO_2("Init GrpW VHS für Fahrzeug %1 | Typ %2",_target,typeOf _target);
[{
    params ["_target"];

    private _ehIndex = _target addEventHandler [
        "HandleDamage",
        {_this call FUNC(handleVehDamage);}
    ];
    //Local only - removeVehicleShield needs the index of the handler THIS machine added, not whatever another machine's index happened to be
    _target setVariable [QGVAR(vhsEHIndex), _ehIndex];
}, _target] call CBA_fnc_execNextFrame;
