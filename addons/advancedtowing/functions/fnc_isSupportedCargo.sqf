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
 * [params] call PREFIX_advancedtowing_fnc_isSupportedCargo
 *
 * Public: No
 */

params ["_vehicle","_cargo"];

private _canTow = false;

if(!isNull _vehicle && !isNull _cargo) then {
    {
        if(_vehicle isKindOf (_x select 0)) then {
            if(_cargo isKindOf (_x select 2)) then {
                if( (toUpper (_x select 1)) == "CAN_TOW" ) then {
                    _canTow = true;
                } else {
                    _canTow = false;
                };
            };
        };
    } forEach (missionNamespace getVariable [QGVAR(Rules_Override), GVAR(Tow_Rules)]);
};

_canTow
