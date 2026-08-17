#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Arguments:
* None
*
* Return Value:
* None
*
* Example:
* [] call ttt_repair_vehicle_fnc_addActions;
*
* Public: No
*/

private _context = createHashMapFromArray [
    ["varPrefix", "ttt_repair_vehicle"],
    // Pre-refactor variable name, still honored on a vehicle's first check (see fnc_canConstruct.sqf).
    ["legacyHasFacilityVar", "ttt_repair_vehicle_hasWorkshop"],
    ["enable", GVAR(enable)],
    ["supportedVehicles", parseSimpleArray GVAR(supportedVehicles)],
    ["facilityObject", GVAR(facilityObject)],
    ["buildTime", GVAR(buildTime)],
    ["useAnimation", GVAR(useAnimation)],
    ["buildAnimation", GVAR(buildAnimation)],
    ["facilityMarkerVar", "ACE_isRepairFacility"],
    ["actionIdConstruct", QGVAR(construct)],
    ["actionIdDeconstruct", QGVAR(deconstruct)],
    ["strings", createHashMapFromArray [
        ["actionConstruct", LLSTRING(actionConstruct)],
        ["actionDeconstruct", LLSTRING(actionDeconstruct)],
        ["abort", LLSTRING(abort)],
        ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
        ["hintLoaded", LLSTRING(hintLoaded)]
    ]]
    // No extraConstructFx: the repair workshop doesn't need any extra animation/setup on construction.
];

[_context] call EFUNC(facility_construction,addActions);
