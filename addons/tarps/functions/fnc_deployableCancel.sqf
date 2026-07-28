#include "..\script_component.hpp"
/*
 * Author: Andx
 *
 * Generic cancel-handler for the TTT "deployable tarp" framework.
 * Restores the caller's animation and, if a deconstruct was cancelled, clears
 * the "in use" lock on the facility object.
 *
 * Arguments:
 * 0: Facility or Player <OBJECT>
 * 1: Player <OBJECT>
 * 2: Config <HASHMAP>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_target", "_caller", "_config"];

[(_config get "abortText"), true] call ace_common_fnc_displayText;
_caller switchMove "";

// _target only differs from _caller while a deconstruct is being cancelled
if (_target != _caller) then {
    _target setVariable [(_config get "inUseVar"), false, true];
};
