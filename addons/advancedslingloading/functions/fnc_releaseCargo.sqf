#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call ttt_advancedslingloading_fnc_releaseCargo
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropeIndex",0]];

if(local _vehicle) then {
    private ["_existingRopesAndCargo","_existingRopes","_existingCargo","_allCargo"];
    _existingRopesAndCargo = [_vehicle,_ropeIndex] call FUNC(getRopesAndCargo);
    _existingRopes = _existingRopesAndCargo select 0;
    _existingCargo = _existingRopesAndCargo select 1;
    {
        _existingCargo ropeDetach _x;
    } forEach _existingRopes;
    _allCargo = _vehicle getVariable [QGVAR(Cargo),[]];
    _allCargo set [_ropeIndex,objNull];
    _vehicle setVariable [QGVAR(Cargo),_allCargo, true];
    call FUNC(retractRopes);
} else {
    [_this,QFUNC(releaseCargo),_vehicle,true] call FUNC(customRemoteExec);
};
