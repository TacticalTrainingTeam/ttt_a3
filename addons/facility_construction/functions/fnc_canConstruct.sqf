#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* ACE self-interaction condition for the construct action.
*
* Arguments:
* 0: Vehicle <OBJECT>
* 1: Player <OBJECT>
* 2: Context <HASHMAP>
*
* Return Value:
* Whether construction is currently possible <BOOLEAN>
*
* Public: No
*/

(_this select 0) params ["_target", "_caller", "_context"];

private _hasFacilityVar = (_context get "varPrefix") + "_hasFacility";
private _legacyVar = _context getOrDefault ["legacyHasFacilityVar", ""];

// Mission makers may still have the pre-refactor per-addon variable name (e.g.
// ttt_medic_vehicle_hasTent) set in a unit's init field. Once the framework has written the
// current variable name itself, that always takes priority - this is only a first-read fallback.
if (isNil {_target getVariable _hasFacilityVar} && {_legacyVar != ""} && {!isNil {_target getVariable _legacyVar}}) exitWith {
    _target getVariable [_legacyVar, true]
};

_target getVariable [_hasFacilityVar, true]
