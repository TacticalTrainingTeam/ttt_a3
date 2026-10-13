#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_canGetInCommander.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for commander and loader seats, turret paths come from the vehicle config
 *
 *  Description:
 *      Checks if any player is able to get in the given seat (commander or loader) of the vehicle. Does not check if the seats are locked.
 *      All turret paths belonging to the seat are read from the vehicle config (ttt_compat_rnt_<seat>Turrets).
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *      1: STRING - Seat, "commander" or "loader"
 *
 *  Returns:
 *      BOOLEAN - Can get in seat.
 *
 *  Example:
 *      [cursorObject, "commander"] call ttt_compat_rnt_fnc_canGetInSeat
 *
 * Public: NO
 */

params ["_vehicle", "_seat"];

([_vehicle, _seat] call FUNC(getSeatData)) params ["", "", "_turrets"];

alive _vehicle &&
{_turrets findIf {!isNull (_vehicle turretUnit _x)} == -1}
