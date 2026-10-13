#include "..\script_component.hpp"
/**
 *  Author: Timi007
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

private _config = configOf _vehicle;

{
    if (_turret isEqualTo getArray (_config >> format [QGVAR(%1Turret), _x])) then {
        _vehicle setVariable [getText (_config >> format [QGVAR(%1BinoVariable), _x]), false, true];

        {
            _vehicle setVariable [_x, false, true];
        } forEach getArray (_config >> format [QGVAR(%1ResetVariables), _x]);
    };
} forEach ["commander", "loader"];

if (_vehicle getVariable ["has_camonet_large", false]) then {
    _unit setVariable [QGVAR(camouflageCoef), _unit getUnitTrait "camouflageCoef", true];
    _unit setUnitTrait ["camouflageCoef", 0.1];
};

if (_vehicle getVariable ["has_camonet", false]) then {
    _unit setVariable [QGVAR(camouflageCoef), _unit getUnitTrait "camouflageCoef", true];

    private _camouflage = getNumber (configOf _unit >> "camouflage");
    _unit setUnitTrait ["camouflageCoef", _camouflage * 0.8];
};
