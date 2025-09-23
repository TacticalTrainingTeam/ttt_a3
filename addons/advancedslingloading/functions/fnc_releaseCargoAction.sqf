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
 * [params] call PREFIX_advancedslingloading_fnc_releaseCargoAction
 *
 * Public: No
 */

private ["_vehicle"];

_vehicle = vehicle player;
if([_vehicle] call ASL_Can_Release_Cargo) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call ASL_Get_Active_Ropes_With_Cargo;
    if(count _activeRopes > 1) then {
        player setVariable ["ASL_Release_Cargo_Index_Vehicle", _vehicle];
        ["Release Cargo","ASL_Release_Cargo_Index_Action",_activeRopes,"Cargo"] call ASL_Show_Select_Ropes_Menu;
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call ASL_Release_Cargo;
        };
    };
};
