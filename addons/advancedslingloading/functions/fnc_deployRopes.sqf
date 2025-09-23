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
 * [params] call ttt_advancedslingloading_fnc_deplayRopes
 *
 * Public: No
 */

params ["_vehicle", "_player", ["_cargoCount", 1], ["_ropeLength", 15]];

if(local _vehicle) then {
    private ["_existingRopes", "_cargoRopes", "_slingLoadPoints"];

    _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
    _existingRopes = _vehicle getVariable [QGVAR(custom_ropes), []];

    if(count _existingRopes == 0) then {
        if(count _slingLoadPoints == 0) exitWith {
            [[LLSTRING(doesnt_support), false], QFUNC(customHint), _player] call FUNC(customRemoteExec);
        };
        if(count _slingLoadPoints < _cargoCount) exitWith {
            [[LLSTRING(doenst_support_multi), false], QFUNC(customHint),_player] call FUNC(customRemoteExec); //"Vehicle doesn't support " + _cargoCount + " cargo ropes" ToDo
        };

        _cargoRopes = [];
        _cargo = [];

        for "_i" from 0 to (_cargoCount - 1) do {
            _cargoRopes pushBack [];
            _cargo pushBack objNull;
        };

        _vehicle setVariable [QGVAR(custom_ropes),_cargoRopes,true];
        _vehicle setVariable [QGVAR(cargo),_cargo,true];

        for "_i" from 0 to (_cargoCount - 1) do {
            [_vehicle, _player, _i] call FUNC(deployRopesIndex);
        };
    } else {
        [[LLSTRING(already_deployed), false], QFUNC(customHint), _player] call FUNC(customRemoteExec);
    };
} else {
    [_this, QFUNC(deployRopes), _vehicle, true] call FUNC(customRemoteExec);
};
