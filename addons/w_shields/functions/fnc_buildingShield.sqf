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
        private _selection = param [1];
        private _hitPoint = param [7];

        if (
            ("glass" in _selection) || {
                ("glass" in _hitPoint) || {
                    ("window" in _selection) || {
                        "window" in _hitPoint }
                }
            }
        ) exitWith {};

        0
    }
];
