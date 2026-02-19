#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Deploys rope at specific index
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 * 2: Rope index (optional, default 0) <NUMBER>
 * 3: Rope length (optional, default 15) <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, player, 0, 15] call ttt_advancedslingloading_fnc_deployRopesIndex
 *
 * Public: No
 */

params ["_vehicle", "_player", ["_ropesIndex", 0], ["_ropeLength", ASL_DEFAULT_ROPE_LENGTH]];
if (local _vehicle) then {
    private _existingRopes = [_vehicle, _ropesIndex] call FUNC(getRopes);
    private _existingRopesCount = [_vehicle] call FUNC(getRopesCount);
    if (count _existingRopes == 0) then {
        _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
        _cargoRopes = [];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        _cargoRopes pushBack ropeCreate [_vehicle, (_slingLoadPoints select (_existingRopesCount - 1)) select _ropesIndex, 0];
        {
            ropeUnwind [_x, ASL_ROPE_UNWIND_SPEED, _ropeLength];
        } forEach _cargoRopes;
        private _allRopes = _vehicle getVariable ["ASL_Ropes", []];
        _allRopes set [_ropesIndex, _cargoRopes];
        _vehicle setVariable ["ASL_Ropes", _allRopes, true];
    };
} else {
    [_this, "ASL_Deploy_Ropes_Index", _vehicle, true] call FUNC(remoteExec);
};
