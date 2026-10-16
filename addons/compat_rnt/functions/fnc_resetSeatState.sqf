#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_handleGetIn.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), extracted: the variable reset shared by handleGetIn, handleGetOut and fixGetInBug
 *
 *  Description:
 *      Resets the bino variable and all other state variables of a seat. Only changed values are broadcast.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Seat, "commander" or "loader"
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [_vehicle, "commander"] call ttt_compat_rnt_fnc_resetSeatState
 *
 * Public: NO
 */

params ["_vehicle", "_seat"];

([_vehicle, _seat] call FUNC(getSeatData)) params ["", "", "", "_binoVariable", "_resetVariables"];

{
    if (_x isNotEqualTo "" && {_vehicle getVariable [_x, false]}) then {
        _vehicle setVariable [_x, false, true];
    };
} forEach ([_binoVariable] + _resetVariables);
