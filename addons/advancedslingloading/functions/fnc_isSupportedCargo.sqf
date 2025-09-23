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
 * [params] call PREFIX_advancedslingloading_fnc_isSupportedCargo
 *
 * Public: No
 */

params ["_vehicle","_cargo"];

private ["_canSling"];

_canSling = false;
if(not isNull _vehicle && not isNull _cargo) then {
    {
        if(_vehicle isKindOf (_x select 0)) then {
            if(_cargo isKindOf (_x select 2)) then {
                if( (toUpper (_x select 1)) == "CAN_SLING" ) then {
                    _canSling = true;
                } else {
                    _canSling = false;
                };
            };
        };
    } forEach (missionNamespace getVariable ["ASL_Sling_Rules_OVERRIDE",ASL_Sling_Rules]);
};

_canSling;
