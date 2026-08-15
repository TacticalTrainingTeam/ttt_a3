#include "..\script_component.hpp"

/*
 * Author: Andx
 * Zeus module handler: spawns the crate type configured on the placed
 * module class at the module's position, then removes the module logic.
 *
 * Arguments:
 * Arma 3 Module Function Parameters
 * https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
    private _type = getText (configOf _logic >> QGVAR(crateType));
    private _pos = getPos _logic;
    // Capture the placing Zeus's machine before deleting the logic, so a
    // missing/empty database can notify them instead of failing silently.
    private _notifyOwner = owner _logic;
    deleteVehicle _logic;

    // Modules with isTriggerActivated = 0 fire almost immediately at mission
    // start, well before scanLoadouts' database finishes building, so dynamic
    // crate types wait on GVAR(db_init) via CBA rather than spawning a thread
    // to poll with waitUntil/sleep.
    if (_type in ["medical_alpha", "medical_bravo", "medical_charlie"]) then {
        [_pos, _type, _notifyOwner, true] call FUNC(spawnCrate);
    } else {
        [{ GVAR(db_init) }, {
            params ["_pos", "_type", "_notifyOwner"];
            [_pos, _type, _notifyOwner, true] call FUNC(spawnCrate);
        }, [_pos, _type, _notifyOwner]] call CBA_fnc_waitUntilAndExecute;
    };
};

true
