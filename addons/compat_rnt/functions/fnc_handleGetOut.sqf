#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_handleGetOut.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for all supported vehicles, camouflage restore reworked
 *
 *  Description:
 *      GetOut event handler for vehicles with commander/loader higher seats and camonet. Resets the seat state and restores the camouflage of the unit. The seat itself is unlocked by ttt_common.
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

// The seat itself is unlocked by the GetOutMan handler of ttt_common
if (local _vehicle) then {
    {
        if (_turret in (([_vehicle, _x] call FUNC(getSeatData)) select 2)) then {
            [_vehicle, _x] call FUNC(resetSeatState);
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
