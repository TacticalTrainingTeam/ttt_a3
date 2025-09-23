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
 * [params] call PREFIX_advancedslingloading_fnc_retractRopesAction
 *
 * Public: No
 */

private ["_vehicle"];

if(isNull objectParent player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle player;
};
if([_vehicle] call ASL_Can_Retract_Ropes) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call ASL_Get_Active_Ropes_Without_Cargo;
    if(count _activeRopes > 1) then {
        player setVariable ["ASL_Retract_Ropes_Index_Vehicle", _vehicle];
        ["Retract Cargo Ropes","ASL_Retract_Ropes_Index_Action",_activeRopes] call ASL_Show_Select_Ropes_Menu;
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call ASL_Retract_Ropes;
        };
    };
};
