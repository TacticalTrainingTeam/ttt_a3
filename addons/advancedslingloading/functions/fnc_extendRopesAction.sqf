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
 * [params] call ttt_advancedslingloading_fnc_extendRopesAction
 *
 * Public: No
 */

private ["_vehicle"];

_vehicle = vehicle player;
if([_vehicle] call FUNC(canExtendRopes)) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call FUNC(getActiveRopes);
    if(count _activeRopes > 1) then {
        player setVariable ["ASL_Extend_Index_Vehicle", _vehicle];
        ["Extend Cargo Ropes","ASL_Extend_Ropes_Index_Action",_activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call FUNC(extendRopes);
        };
    };
};
