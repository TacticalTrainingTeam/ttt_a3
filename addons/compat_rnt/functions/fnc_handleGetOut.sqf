#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      GetOut event handler for vehicles with commander/loader higher seats and camonet. Unlocks the seats and restores the camouflage of the unit.
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
 *      _this call ttt_compat_rnt_fnc_handleGetOut
 *
 * Public: NO
 */

params ["_vehicle", "_role", "_unit", "_turret"];

private _config = configOf _vehicle;

if (local _vehicle) then {
    {
        if (_turret in getArray (_config >> format [QGVAR(%1Turrets), _x])) then {
            [QEGVAR(common,unlockSeat), [_unit]] call CBA_fnc_localEvent;

            _vehicle setVariable [getText (_config >> format [QGVAR(%1BinoVariable), _x]), false, true];

            {
                _vehicle setVariable [_x, false, true];
            } forEach getArray (_config >> format [QGVAR(%1ResetVariables), _x]);
        };
    } forEach ["commander", "loader"];
};

if (local _unit && {_vehicle getVariable ["has_camonet_large", false] || {_vehicle getVariable ["has_camonet", false]}}) then {
    private _camoCoef = _unit getVariable [QGVAR(camouflageCoef), getNumber (configOf _unit >> "camouflage")];
    _unit setUnitTrait ["camouflageCoef", _camoCoef];
};
