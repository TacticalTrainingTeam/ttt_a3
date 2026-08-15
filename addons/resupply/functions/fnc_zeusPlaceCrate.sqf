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
    deleteVehicle _logic;

    // Modules with isTriggerActivated = 0 fire almost immediately at mission
    // start, well before scanLoadouts' database finishes building. spawn a
    // scheduled thread (the module function's own environment isn't
    // guaranteed suspendable) and wait there so dynamic crate types don't
    // silently spawn empty.
    [_pos, _type] spawn {
        params ["_pos", "_type"];
        if (!(_type in ["medical_alpha", "medical_bravo", "medical_charlie"])) then {
            waitUntil { sleep 0.1; GVAR(db_init) };
        };
        [_pos, _type] call FUNC(spawnCrate);
    };
};

true
