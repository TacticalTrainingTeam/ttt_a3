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
 * [params] call ttt_advancedslingloading_fnc_retractRopesAction
 *
 * Public: No
 */

private ["_vehicle"];

if(isNull objectParent player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle player;
};
if([_vehicle] call FUNC(canRetractRopes)) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
    if(count _activeRopes > 1) then {
        player setVariable ["ASL_Retract_Ropes_Index_Vehicle", _vehicle];
        ["Retract Cargo Ropes","ASL_Retract_Ropes_Index_Action",_activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,player,(_activeRopes select 0) select 0] call FUNC(retractRopes);
        };
    };
};
