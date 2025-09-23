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
 * [params] call ttt_advancedslingloading_fnc_attachRopesAction
 *
 * Public: No
 */

private ["_vehicle","_cargo","_canBeAttached"];
_cargo = cursorTarget;
_vehicle = (ACE_player getVariable [QGVAR(ropes_vehicle), [objNull,0]]) select 0;
if([_vehicle,_cargo] call FUNC(canAttachRopes)) then {

    _canBeAttached = true;

    if!(missionNamespace getVariable [QGVAR(LOCKED_VEHICLES_ENABLED),false]) then {
        if( locked _cargo > 1 ) then {
            ["Cannot attach cargo ropes to locked vehicle",false] call FUNC(customHint);
            _canBeAttached = false;
        };
    };

    if(_canBeAttached) then {
        [_cargo,ACE_player] call FUNC(attachRopes);
    };

};
