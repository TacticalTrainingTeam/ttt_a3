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
 * [params] call PREFIX_advancedtowing_fnc_pickupTowRopes
 *
 * Public: No
 */

params ["_vehicle", "_player"];

if(local _vehicle) then {
    private ["_attachedObj", "_helper"];
    {
        _attachedObj = _x;
        {
            _attachedObj ropeDetach _x;
        } forEach (_vehicle getVariable [QGVAR(Ropes), []]);
        detach _attachedObj;
        deleteVehicle _attachedObj;
    } forEach ropeAttachedObjects _vehicle;

    _helper = "Land_Can_V2_F" createVehicle position _player;

    {
        [_helper, [0, 0, 0], [0, 0, -1]] ropeAttachTo _x;
        _helper attachTo [_player, [-0.1, 0.1, 0.15], "Pelvis"];
    } forEach (_vehicle getVariable [QGVAR(Ropes), []]);
    hideObject _helper;
    [[_helper], QFUNC(customHideObjectGlobal)] call FUNC(customRemoteExecServer);

    _player setVariable [QGVAR(Ropes_Vehicle), _vehicle, true];
    _player setVariable [QGVAR(Ropes_Pick_Up_Helper), _helper, true];
} else {
    [_this, QFUNC(pickupTowRopes), _vehicle, true] call SA_RemoteExec;
};
