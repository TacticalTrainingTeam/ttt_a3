#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_handleGetOut.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for all supported vehicles, camouflage restore reworked
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

// Restore the camouflage even if the camonet was removed while the unit was inside
if (local _unit) then {
    private _camouflageCoef = _unit getVariable [QGVAR(camouflageCoef), -1];

    if (_camouflageCoef >= 0) then {
        _unit setUnitTrait ["camouflageCoef", _camouflageCoef];
        _unit setVariable [QGVAR(camouflageCoef), nil, true];
    };
};
