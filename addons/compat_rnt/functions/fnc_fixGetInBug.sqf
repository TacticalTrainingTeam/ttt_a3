#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Wiesel_TOW/functions/fnc_fixGetInBug.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), generalized for commander and loader seats
 *
 *  Description:
 *      Unlocks the commander and loader turrets if nobody occupies a seat belonging to them. This is here for emergencies should the normal system not unlock the seat.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [cursorTarget] call ttt_compat_rnt_fnc_fixGetInBug
 *
 * Public: NO
 */

params ["_vehicle"];

private _config = configOf _vehicle;

{
    private _turret = getArray (_config >> format [QGVAR(%1Turret), _x]);
    if (_turret isNotEqualTo [] && {_vehicle lockedTurret _turret} && {[_vehicle, _x] call FUNC(canGetInSeat)}) then {
        [_vehicle, [_turret, false]] remoteExecCall ["lockTurret"];

        _vehicle setVariable [getText (_config >> format [QGVAR(%1BinoVariable), _x]), false, true];

        {
            _vehicle setVariable [_x, false, true];
        } forEach getArray (_config >> format [QGVAR(%1ResetVariables), _x]);
    };
} forEach ["commander", "loader"];
