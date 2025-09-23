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
 * [params] call PREFIX_advancedslingloading_fnc_deployRopesIndex
 *
 * Public: No
 */

params ["_vehicle","_player",["_ropesIndex",0],["_ropeLength",15]];

if(local _vehicle) then {
    private ["_existingRopes","_existingRopesCount","_allRopes"];
    _existingRopes = [_vehicle,_ropesIndex] call ASL_Get_Ropes;
    _existingRopesCount = [_vehicle] call ASL_Get_Ropes_Count;
    if(count _existingRopes == 0) then {
        _slingLoadPoints = [_vehicle] call ASL_Get_Sling_Load_Points;
        _cargoRopes = [];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        {
            ropeUnwind [_x, 5, _ropeLength];
        } forEach _cargoRopes;
        _allRopes = _vehicle getVariable ["ASL_Ropes",[]];
        _allRopes set [_ropesIndex,_cargoRopes];
        _vehicle setVariable ["ASL_Ropes",_allRopes,true];
    };
} else {
    [_this,"ASL_Deploy_Ropes_Index",_vehicle,true] call ASL_RemoteExec;
};
