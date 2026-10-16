#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_handleGetIn.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), extracted: the seat config lookups of the commander/loader functions, cached per vehicle class
 *
 *  Description:
 *      Gets the cached seat data of a vehicle class from its config.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Seat, "commander" or "loader"
 *
 *  Returns:
 *      ARRAY - [turret, higher turret, all turrets of the seat, bino variable, variables to reset]
 *
 *  Example:
 *      [_vehicle, "commander"] call ttt_compat_rnt_fnc_getSeatData
 *
 * Public: NO
 */

params ["_vehicle", "_seat"];

GVAR(seatDataCache) getOrDefaultCall [format ["%1:%2", typeOf _vehicle, _seat], {
    private _config = configOf _vehicle;

    [
        getArray (_config >> format [QGVAR(%1Turret), _seat]),
        getArray (_config >> format [QGVAR(%1HigherTurret), _seat]),
        getArray (_config >> format [QGVAR(%1Turrets), _seat]),
        getText (_config >> format [QGVAR(%1BinoVariable), _seat]),
        getArray (_config >> format [QGVAR(%1ResetVariables), _seat])
    ]
}, true]
