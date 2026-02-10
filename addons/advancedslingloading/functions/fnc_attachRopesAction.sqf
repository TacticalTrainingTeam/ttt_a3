#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for attaching ropes to cargo
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_attachRopesAction
 *
 * Public: No
 */

private ["_vehicle","_cargo","_canBeAttached"];
_cargo = cursorTarget;
_vehicle = (player getVariable ["ASL_Ropes_Vehicle", [objNull,0]]) select 0;
if([_vehicle,_cargo] call FUNC(canAttachRopes)) then {

    _canBeAttached = true;

    if!(missionNamespace getVariable ["ASL_LOCKED_VEHICLES_ENABLED",false]) then {
        if( locked _cargo > 1 ) then {
            ["Cannot attach cargo ropes to locked vehicle",false] call FUNC(hint);
            _canBeAttached = false;
        };
    };

    if!(missionNamespace getVariable ["ASL_EXILE_SAFEZONE_ENABLED",false]) then {
        if(!isNil "ExilePlayerInSafezone") then {
            if( ExilePlayerInSafezone ) then {
                ["Cannot attach cargo ropes in safe zone",false] call FUNC(hint);
                _canBeAttached = false;
            };
        };
    };

    if(_canBeAttached) then {
        [_cargo,player] call FUNC(attachRopes);
    };

};
