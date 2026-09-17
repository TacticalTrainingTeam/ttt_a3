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
* [] call ttt_medic_vehicle_fnc_addActions;
*
* Public: No
*/

private _context = createHashMapFromArray [
    ["varPrefix", "ttt_medic_vehicle"],
    // Pre-refactor variable name, still honored on a vehicle's first check (see fnc_canConstruct.sqf).
    ["legacyHasFacilityVar", "ttt_medic_vehicle_hasTent"],
    ["enable", GVAR(enable)],
    ["supportedVehicles", parseSimpleArray GVAR(supportedVehicles)],
    ["facilityObject", GVAR(facilityObject)],
    ["buildTime", GVAR(buildTime)],
    ["useAnimation", GVAR(useAnimation)],
    ["buildAnimation", GVAR(buildAnimation)],
    ["facilityMarkerVar", "ace_medical_isMedicalFacility"],
    ["actionIdConstruct", QGVAR(construct)],
    ["actionIdDeconstruct", QGVAR(deconstruct)],
    ["strings", createHashMapFromArray [
        ["actionConstruct", LLSTRING(actionConstruct)],
        ["actionDeconstruct", LLSTRING(actionDeconstruct)],
        ["abort", LLSTRING(abort)],
        ["hintErrorNoSpace", LLSTRING(hintErrorNoSpace)],
        ["hintLoaded", LLSTRING(hintLoaded)]
    ]],
    // Medic tent has door/roof/solar-panel selections and a sign to hide on construction; the
    // repair workshop doesn't need this, which is why it's a per-consumer hook instead of shared logic.
    ["extraConstructFx", {
        params ["_facility"];
        {_facility animate [_x, 1];} forEach ["door1_hide","door2_hide","roof_1_solar_hide","roof_1_nosolar_unhide","roof_2_solar_hide","roof_2_nosolar_unhide"];
        _facility animateSource ["MedSign_Hide", 0];
    }]
];

[_context] call EFUNC(facility_construction,addActions);
