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
_vehicle = (ACE_player getVariable ["ASL_Ropes_Vehicle", [objNull,0]]) select 0;
if([_vehicle,_cargo] call FUNC(canAttachRopes)) then {

    _canBeAttached = true;

    if!(missionNamespace getVariable ["ASL_LOCKED_VEHICLES_ENABLED",false]) then {
        if( locked _cargo > 1 ) then {
            ["Cannot attach cargo ropes to locked vehicle",false] call FUNC(customHint);
            _canBeAttached = false;
        };
    };

    if!(missionNamespace getVariable ["ASL_EXILE_SAFEZONE_ENABLED",false]) then {
        if(!isNil "ExilePlayerInSafezone") then {
            if( ExilePlayerInSafezone ) then {
                ["Cannot attach cargo ropes in safe zone",false] call FUNC(customHint);
                _canBeAttached = false;
            };
        };
    };

    if(_canBeAttached) then {
        [_cargo,ACE_player] call FUNC(attachRopes);
    };

};
