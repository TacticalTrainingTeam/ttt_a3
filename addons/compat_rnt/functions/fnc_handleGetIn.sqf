#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_handleGetIn.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for all supported vehicles, camouflage restore reworked
 *
 *  Description:
 *      GetIn event handler for vehicles with commander/loader higher seats and camonet. Resets the higher seat state and adjusts the camouflage of the unit if the vehicle wears a camonet.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Role
 *      2: OBJECT - Unit
 *      3: ARRAY - Turret
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call ttt_compat_rnt_fnc_handleGetIn
 *
 * Public: NO
 */

params ["_vehicle", "_role", "_unit", "_turret"];

if (!local _unit) exitWith {};

{
    if (_turret isEqualTo (([_vehicle, _x] call FUNC(getSeatData)) select 0)) then {
        [_vehicle, _x] call FUNC(resetSeatState);
    };
} forEach ["commander", "loader"];

private _hasLargeCamonet = _vehicle getVariable ["has_camonet_large", false];

if (_hasLargeCamonet || {_vehicle getVariable ["has_camonet", false]}) then {
    // Remember the original value, it is restored when getting out
    _unit setVariable [QGVAR(camouflageCoef), _unit getUnitTrait "camouflageCoef", true];

    if (_hasLargeCamonet) then {
        _unit setUnitTrait ["camouflageCoef", 0.1];
    } else {
        _unit setUnitTrait ["camouflageCoef", getNumber (configOf _unit >> "camouflage") * 0.8];
    };
};
