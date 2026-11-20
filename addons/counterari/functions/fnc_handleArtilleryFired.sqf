#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Server handler for QGVAR(artilleryFired), raised by the "Fired" EH added in fnc_addFriendlyArtillery.sqf.
* Resolves the counter-battery settings from the firing unit's QGVAR(config) variable, which
* fnc_addFriendlyArtillery.sqf also sets on the server, so the per-round event only carries the unit and magazine.
*
* Arguments:
* 0: <OBJECT>    own artillery that fired
* 1: <STRING>    magazine of the fired round
*
* Return Value:
* <BOOL> true if counter-fire was triggered
*
* Public: No
*/

if (!isServer) exitWith {false};

params [
    ["_unit", objNull, [objNull]],
    ["_magazine", "", [""]]
];

private _config = _unit getVariable [QGVAR(config), []];
if (_config isEqualTo []) exitWith {WARNING_1("Friendly artillery %1 fired but has no counter-battery config on the server",_unit); false};

_config params ["_enemyArtyArray", "_radius", "_rounds", "_decrementing", "_delay"];

[_unit, _magazine, _enemyArtyArray, _radius, _rounds, _decrementing, _delay] call FUNC(counterFire)
