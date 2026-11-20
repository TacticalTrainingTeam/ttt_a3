#include "..\script_component.hpp"
/*
* Author: Andx
*
* Description:
* Registers a friendly artillery piece so the given enemy artillery fires back on its position
* (after a delay) whenever it fires an artillery round. Used by the friendly artillery module and
* available to mission makers for artillery that has no module, e.g. spawned during the mission.
*
* Must run on every machine (init line, or a global event for spawned artillery): the "Fired" EH only
* triggers where the piece is local, and locality moves with its crew. Calling it again on the same
* piece replaces the previous registration instead of stacking a second EH.
*
* Note: the settings are stored as a unit variable rather than kept as private locals captured by the
* "Fired" event handler, because a deferred/async callback like an event handler cannot reliably read
* private variables from the script scope that added it. The server reads the same variable in
* fnc_handleArtilleryFired.sqf, so the EH only has to send the firing unit and magazine.
*
* Arguments:
* 0: <OBJECT>                                    own artillery
* 1: <ARRAY>                                     enemy artillery
* 2: <NUMBER>     (optional, default: 100)       radius for counterfire
* 3: <NUMBER>     (optional, default: 5)         rounds for counterfire (per enemy vehicle)
* 4: <BOOL>       (optional, default: true)      true for a decrementing radius, otherwise false
* 5: <NUMBER>     (optional, default: 5)         delay for counterfire in seconds
*
* Return Value:
* <BOOL> true if registered
*
* Example:
* [this, [enemyAri_1, enemyAri_2], 100, 5, true, 5] call ttt_counterari_fnc_addFriendlyArtillery;
*
* Public: Yes
*/

params [
    ["_unit", objNull, [objNull]],
    ["_enemyArtyArray", [], [[]]],
    ["_radius", 100, [0]],
    ["_rounds", 5, [0]],
    ["_decrementing", true, [true]],
    ["_delay", 5, [0]]
];

if (isNull _unit) exitWith {WARNING("Cannot register a null object as friendly artillery"); false};

private _oldEhId = _unit getVariable [QGVAR(firedEHId), -1];
if (_oldEhId != -1) then {
    _unit removeEventHandler ["Fired", _oldEhId];
};

_unit setVariable [QGVAR(config), [_enemyArtyArray, _radius, _rounds, _decrementing, _delay]];

private _ehId = _unit addEventHandler ["Fired", {
    params ["_unit", "", "", "", "", "_magazine"];

    // Filter on the firing machine so a coaxial/commander MG on the same vehicle never sends an event per bullet
    if !(_magazine in (getArtilleryAmmo [_unit])) exitWith {};

    [QGVAR(artilleryFired), [_unit, _magazine]] call CBA_fnc_serverEvent;
}];

_unit setVariable [QGVAR(firedEHId), _ehId];

if (isClass (configFile >> "CfgPatches" >> "lambs_danger")) then {   // LAMBS only if loaded and only for ground vehicles
    _unit call lambs_wp_fnc_taskReset;
};

INFO_1("Adding counter-battery EH to friendly artillery %1",_unit);

true
