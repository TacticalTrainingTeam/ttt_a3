#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Checks if cargo can be slung by a vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Cargo <OBJECT>
 *
 * Return Value:
 * Can sling cargo <BOOL>
 *
 * Example:
 * [_vehicle, _cargo] call ttt_advancedslingloading_fnc_isSupportedCargo
 *
 * Public: No
 */

params ["_vehicle", "_cargo"];
private _canSling = false;
if (not isNull _vehicle && not isNull _cargo) then {
    {
        if (_vehicle isKindOf (_x select 0)) then {
            if (_cargo isKindOf (_x select 2)) then {
                if ((toUpper (_x select 1)) == "CAN_SLING") then {
                    _canSling = true;
                } else {
                    _canSling = false;
                };
            };
        };
    } forEach (missionNamespace getVariable ["ASL_Sling_Rules_OVERRIDE", missionNamespace getVariable ["ASL_Sling_Rules", []]]);
};
_canSling;
