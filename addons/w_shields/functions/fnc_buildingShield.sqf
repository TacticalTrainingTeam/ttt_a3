#include "..\script_component.hpp"

/*
 * Author: [W] Miller
 * Fügt einem Gebäude ein Building Shield hinzu.
 * Fenster bleiben zerstörbar.
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

if (isNull _target) exitWith { ["Kein Objekt übergeben."] call BIS_fnc_error };//ToDo Localize

//Add the HandleDamage Eventhandler
_target addEventHandler [
    "HandleDamage",
    {
        params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitPartIndex", "_instigator", "_hitPoint", "_directHit", "_context"];

        if (
            ("glass" in _selection) || {
                ("glass" in _hitPoint) || {
                    ("window" in _selection) || {
                        "window" in _hitPoint }
                }
            }
        ) exitWith {};

        [QGVAR(API_buildingShieldTriggered), [_unit, _source, _instigator, _directHit]] call CBA_fnc_localEvent;

        0
    }
];
