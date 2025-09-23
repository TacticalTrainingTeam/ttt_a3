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
 * [params] call ttt_advancedslingloading_fnc_attachRopes
 *
 * Public: No
 */

params ["_cargo","_player"];

_vehicleWithIndex = _player getVariable [QGVAR(ropes_vehicle), [objNull, 0]];
_vehicle = _vehicleWithIndex select 0;



if(!isNull _vehicle) then {
    if(local _vehicle) then {
        private ["_ropes", "_attachmentPoints", "_objDistance", "_ropeLength", "_allCargo"];
        _ropes = [_vehicle, (_vehicleWithIndex select 1)] call FUNC(getRopes);

        if(count _ropes == 4) then {
            _attachmentPoints = [_cargo] call FUNC(getCornerPoints);
            _ropeLength = (ropeLength (_ropes select 0));
            _objDistance = (_cargo distance _vehicle) + 2;
            if( _objDistance > _ropeLength ) then {
                [["The cargo ropes are too short. Move vehicle closer.", false], QFUNC(custom_hint), _player] call FUNC(customRemoteExec);
            } else {
                [_vehicle, _player] call FUNC(dropRopes);

                [_cargo, _attachmentPoints select 0, [0,0,-1]] ropeAttachTo (_ropes select 0);
                [_cargo, _attachmentPoints select 1, [0,0,-1]] ropeAttachTo (_ropes select 1);
                [_cargo, _attachmentPoints select 2, [0,0,-1]] ropeAttachTo (_ropes select 2);
                [_cargo, _attachmentPoints select 3, [0,0,-1]] ropeAttachTo (_ropes select 3);
                _allCargo = _vehicle getVariable [QGVAR(cargo),[]];
                _allCargo set [(_vehicleWithIndex select 1),_cargo];
                _vehicle setVariable [QGVAR(cargo), _allCargo, true];

                if(missionNamespace getVariable [QGVAR(HEAVY_LIFTING_ENABLED),false]) then {
                    [_cargo, _vehicle, _ropes] spawn FUNC(ropeAdjustMass);
                };
            };
        };
    } else {
        [_this, QFUNC(attachRopes), _vehicle, true] call FUNC(customRemoteExec);
    };
};
