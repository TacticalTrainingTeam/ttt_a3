#include "..\script_component.hpp"
/*
 * Author: Zumi, Timi007
 * Pick up the tripod.
 *
 * Arguments:
 * 0: Tripod <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [this, player] call ttt_compat_rnt_fnc_pickUpMGTripod
 *
 * Public: No
 */

params ["_tripod", "_player"];

_player playAction "PutDown";

[{((animationState player) select [25,7]) isEqualTo "putdown"}, {
    params ["_tripod", "_player"];

    deleteVehicle _tripod;
    _player addBackpackGlobal "rnt_mg3_static_tripod";
}, [_tripod, _player]] call CBA_fnc_waitUntilAndExecute;
