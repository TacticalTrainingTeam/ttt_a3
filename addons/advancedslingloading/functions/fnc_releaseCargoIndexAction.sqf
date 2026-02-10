#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Index action handler for releasing specific cargo
 *
 * Arguments:
 * 0: Rope index <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ttt_advancedslingloading_fnc_releaseCargoIndexAction
 *
 * Public: No
 */

params ["_ropesIndex"];
private ["_vehicle"];
_vehicle = player getVariable ["ASL_Release_Cargo_Index_Vehicle", objNull];
if(_ropesIndex >= 0 && !isNull _vehicle && [_vehicle] call FUNC(canReleaseCargo)) then {
    [_vehicle,player,_ropesIndex] call FUNC(releaseCargo);
};
