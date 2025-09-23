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

if(isNull objectParent ACE_player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle ACE_player;
};
if([_vehicle] call FUNC(canRetractRopes)) then {
    private ["_activeRopes"];
    _activeRopes = [_vehicle] call FUNC(getActiveRopesWithoutCargo);
    if(count _activeRopes > 1) then {
        ACE_player setVariable [QGVAR(Retract_Ropes_Index_Vehicle), _vehicle];
        [LLSTRING(retract_cargo_ropes),QFUNC(retractRopesIndexAction),_activeRopes] call FUNC(showSelectRopesMenu);
    } else {
        if(count _activeRopes == 1) then {
            [_vehicle,ACE_player,(_activeRopes select 0) select 0] call FUNC(retractRopes);
        };
    };
};
