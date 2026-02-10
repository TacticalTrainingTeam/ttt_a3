#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Action handler for deploying ropes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_deployRopesAction
 *
 * Public: No
 */

private ["_vehicle","_canDeployRopes"];
if(isNull objectParent player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle player;
};
if([_vehicle] call FUNC(canDeployRopes)) then {

    _canDeployRopes = true;

    if!(missionNamespace getVariable ["ASL_LOCKED_VEHICLES_ENABLED",false]) then {
        if( locked _vehicle > 1 ) then {
            ["Cannot deploy cargo ropes from locked vehicle",false] call FUNC(hint);
            _canDeployRopes = false;
        };
    };

    if(_canDeployRopes) then {

        _inactiveRopes = [_vehicle] call FUNC(getInactiveRopes);

        if(count _inactiveRopes > 0) then {

            if(count _inactiveRopes > 1) then {
                player setVariable ["ASL_Deploy_Ropes_Index_Vehicle", _vehicle];
                ["Deploy Cargo Ropes","ASL_Deploy_Ropes_Index_Action",_inactiveRopes] call FUNC(showSelectRopesMenu);
            } else {
                [_vehicle,player,(_inactiveRopes select 0) select 0] call FUNC(deployRopesIndex);
            };

        } else {

            _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
            if(count _slingLoadPoints > 1) then {
                player setVariable ["ASL_Deploy_Count_Vehicle", _vehicle];
                ASL_Deploy_Ropes_Count_Menu = [
                        ["Deploy Ropes",false]
                ];
                ASL_Deploy_Ropes_Count_Menu pushBack ["For Single Cargo", [0], "", -5, [["expression", "[1] call ASL_Deploy_Ropes_Count_Action"]], "1", "1"];
                if((count _slingLoadPoints) > 1) then {
                    ASL_Deploy_Ropes_Count_Menu pushBack ["For Double Cargo", [0], "", -5, [["expression", "[2] call ASL_Deploy_Ropes_Count_Action"]], "1", "1"];
                };
                if((count _slingLoadPoints) > 2) then {
                    ASL_Deploy_Ropes_Count_Menu pushBack ["For Triple Cargo", [0], "", -5, [["expression", "[3] call ASL_Deploy_Ropes_Count_Action"]], "1", "1"];
                };
                showCommandingMenu "";
                showCommandingMenu "#USER:ASL_Deploy_Ropes_Count_Menu";
            } else {
                [_vehicle,player] call FUNC(deployRopes);
            };

        };

    };

};
