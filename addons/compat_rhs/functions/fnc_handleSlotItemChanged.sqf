/*
 * Author: [W] Miller
 * handles certain effects
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example:
 * ["example"] call mil_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */

params ["_unit", "", "_slot"];

if (!hasInterface) exitWith {};
if ((!local _unit) || (_unit != player)) exitWith {};

if ((_slot == 605) && ("rhsusf_hgu56p_" in (headgear _unit))) then {
    if ("_visor_" in (headgear _unit)) then {
        [_unit, "rhs_googles_black"] call ace_goggles_fnc_applyGlassesEffect;
    } else {
        [_unit, ""] call ace_goggles_fnc_applyGlassesEffect;
    };
} else {
    [_unit, goggles _unit] call ace_goggles_fnc_applyGlassesEffect;
};