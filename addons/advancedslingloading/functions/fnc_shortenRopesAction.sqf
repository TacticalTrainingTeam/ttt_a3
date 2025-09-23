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
 * [params] call PREFIX_advancedslingloading_fnc_shortenRopesAction
 *
 * Public: No
 */

private ["_vehicle"];

_vehicle = vehicle player;
if([_vehicle] call ASL_Can_Shorten_Ropes) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call ASL_Get_Active_Ropes;
    if(count _activeRopes > 1) then {
        player setVariable ["ASL_Shorten_Index_Vehicle", _vehicle];
        ["Shorten Cargo Ropes","ASL_Shorten_Ropes_Index_Action",_activeRopes] call ASL_Show_Select_Ropes_Menu;
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call ASL_Shorten_Ropes;
        };
    };
};
