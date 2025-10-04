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
 * [params] call PREFIX_advancedtowing_fnc_attachTowRopes
 *
 * Public: No
 */

params ["_cargo", "_player"];

private _vehicle = _player getVariable [QGVAR(Ropes_Vehicle), objNull];
private _isRearCargoHitch = false;

if(!isNull _vehicle) then {
    if(local _vehicle) then {
        private ["_cargoHitch","_objDistance","_ropeLength"];
        private _towRopes = _vehicle getVariable [QGVAR(Ropes), []];

        if(count _towRopes == 1) then {


            private _cargoHitchPoints = [_cargo] call FUNC(getHitchPoints);
            private _distanceToFrontHitch = player distance (_cargo modelToWorld (_cargoHitchPoints select 0));
            private _distanceToRearHitch = player distance (_cargo modelToWorld (_cargoHitchPoints select 1));
            if( _distanceToFrontHitch < _distanceToRearHitch ) then {
                _cargoHitch = _cargoHitchPoints select 0;
                _isRearCargoHitch = false;
            } else {
                _cargoHitch = _cargoHitchPoints select 1;
                _isRearCargoHitch = true;
            };


            _cargoHitch = ([_cargo] call FUNC(getHitchPoints)) select 0;

            private _vehicleHitch = ([_vehicle] call FUNC(getHitchPoints)) select 1;
            _ropeLength = (ropeLength (_towRopes select 0));
            _objDistance = ((_vehicle modelToWorld _vehicleHitch) distance (_cargo modelToWorld _cargoHitch));
            if( _objDistance > _ropeLength ) then {
                [["The tow ropes are too short. Move vehicle closer.", false], QFUNC(customHint), _player] call FUNC(customRemoteExec); //ToDo Localize
            } else {
                [_vehicle,_player] call FUNC(dropTowRopes);
                _helper = "Land_Can_V2_F" createVehicle position _cargo;
                _helper attachTo [_cargo, _cargoHitch];
                _helper setVariable [QGVAR(Cargo), _cargo, true];
                hideObject _helper;
                [[_helper], QFUNC(customHideObjectGlobal)] call FUNC(customRemoteExecServer);
                [_helper, [0, 0, 0], [0, 0, -1]] ropeAttachTo (_towRopes select 0);
                [_vehicle, _vehicleHitch, _cargo, _cargoHitch, _ropeLength] spawn FUNC(simulateTowing);
            };
        };
    } else {
        [_this, QFUNC(attachTowRopes), _vehicle, true] call FUNC(customRemoteExec);
    };
};
