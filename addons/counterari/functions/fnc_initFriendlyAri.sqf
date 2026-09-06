#include "..\script_component.hpp"
/*
* Authors: Andx & EinStein
*
* Description:
* Registers a group of friendly artillery pieces so the enemy artillery module(s) synced to
* this module fire back on their position (after a delay) whenever they fire. Each friendly
* module resolves its own paired enemy artillery independently, so several friendly/enemy
* module pairs can run side by side without interfering with each other.
*
* Note: the per-unit counter-battery settings are stored as unit variables rather than kept as
* private locals captured by the "Fired" event handler, because a deferred/async callback like
* an event handler cannot reliably read private variables from the script scope that added it.
*
* Arguments:
* Arma 3 Module Function Parameters
* https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
*
* Return Value:
* True <BOOL>
*
* Public: No
*/

params [
    ["_logic", objNull, [objNull]],
    "", // "_units": unused, see note below - synchronizedObjects is used directly instead
    ["_activated", true, [true]]
];

// Resolved from synchronizedObjects directly instead of the module framework's "_units" argument:
// that argument only ever contains real units/vehicles, not other synced modules (Logic class),
// which is what we need below to find the paired enemy artillery module.
private _syncedObjects = synchronizedObjects _logic;
private _artyUnits = _syncedObjects select {!(_x isKindOf "Logic")};

// Always clear a previously added EH first, so re-activation/re-sync never stacks duplicate EHs
{
    private _ehId = _x getVariable [QGVAR(firedEHId), -1];
    if (_ehId != -1) then {
        _x removeEventHandler ["Fired", _ehId];
        _x setVariable [QGVAR(firedEHId), nil];
        _x setVariable [QGVAR(config), nil];
    };
} forEach _artyUnits;

if (_activated) then {
    private _enemyModules = _syncedObjects select {typeOf _x == QGVAR(registerEnemyAriModule)};

    private _enemyArtyArray = [];
    {
        private _enemySynced = synchronizedObjects _x;
        _enemyArtyArray append (_enemySynced select {!(_x isKindOf "Logic")});
    } forEach _enemyModules;

    if (_enemyArtyArray isEqualTo []) then {
        WARNING_1("Friendly artillery module %1 is not synced to an enemy artillery module with artillery pieces",_logic);
    };

    private _radius = _logic getVariable [QGVAR(registerFriendlyAriModule_radius), 100];
    private _rounds = _logic getVariable [QGVAR(registerFriendlyAriModule_rounds), 5];
    private _decrementing = _logic getVariable [QGVAR(registerFriendlyAriModule_decrementing), true];
    private _delay = _logic getVariable [QGVAR(registerFriendlyAriModule_delay), 5];

    {
        _x setVariable [QGVAR(config), [_enemyArtyArray, _radius, _rounds, _decrementing, _delay]];

        private _ehId = _x addEventHandler ["Fired", {
            params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine"];

            private _config = _unit getVariable [QGVAR(config), []];
            if (_config isEqualTo []) exitWith {};

            _config params ["_enemyArtyArray", "_radius", "_rounds", "_decrementing", "_delay"];

            [QGVAR(counterFire), [_unit, _magazine, _enemyArtyArray, _radius, _rounds, _decrementing, _delay]] call CBA_fnc_serverEvent;
        }];

        _x setVariable [QGVAR(firedEHId), _ehId];

        if (isClass (configFile >> "CfgPatches" >> "lambs_danger")) then {   // LAMBS only if loaded and only for ground vehicles
            _x call lambs_wp_fnc_taskReset;
        };

        INFO_1("Adding counter-battery EH to friendly artillery %1",_x);
    } forEach _artyUnits;
};

true;
