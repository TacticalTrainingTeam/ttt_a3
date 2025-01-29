#include "..\script_component.hpp"

/*
 * Author: Nobody ©, Andx
 * Adds a teleport and spectator camera to an object
 *
 * Arguments:
 * 0: Objekt an das die Aktionen hinzugefügt werden sollen <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [flagge] call ttt_teleport_fnc_addActions
 *
 * Public: Yes
 */

params ["_object"];

if (isNil "_object") exitWith {(INFO("Object not found!"));};

// Client Side
if (hasInterface) then {
    INFO_1("Adding Actions to %1",_object);
    // add spectator cam
    _object addAction [LLSTRING(spectator), {

        params ["_target", "_caller"];

        ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
        [_caller, true] remoteExecCall ["hideObjectGlobal", 2];

    }, [], 0, false];

    // add teleporter Menü
    [_object] call EFUNC(w_teleporter,addAction);

    // close spectator on respawn
    player addMPEventHandler ["MPRespawn", {
        ["Terminate"] call BIS_fnc_EGSpectator;
    }];
};