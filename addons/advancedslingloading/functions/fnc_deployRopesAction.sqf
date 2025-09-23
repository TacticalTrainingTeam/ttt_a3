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
 * [params] call ttt_advancedslingloading_fnc_deployRopesAction
 *
 * Public: No
 */


private ["_vehicle","_canDeployRopes"];

if(isNull objectParent ACE_player) then {
    _vehicle = cursorTarget;
} else {
    _vehicle = vehicle ACE_player;
};

if([_vehicle] call FUNC(canDeployRopes)) then {

    _canDeployRopes = true;

    if!(missionNamespace getVariable [QGVAR(LOCKED_VEHICLES_ENABLED),false]) then {
        if( locked _vehicle > 1 ) then {
            ["Cannot deploy cargo ropes from locked vehicle",false] call FUNC(customHint);
            _canDeployRopes = false;
        };
    };

    if(_canDeployRopes) then {

        _inactiveRopes = [_vehicle] call FUNC(getActiveRopes);

        if(count _inactiveRopes > 0) then {

            if(count _inactiveRopes > 1) then {
                ACE_player setVariable [QGVAR(Deploy_Ropes_Index_Vehicle), _vehicle];
                ["Deploy Cargo Ropes", QFUNC(deployRopesIndexAction), _inactiveRopes] call FUNC(showSelectRopesMenu);
            } else {
                [_vehicle, ACE_player, (_inactiveRopes select 0) select 0] call FUNC(deployRopesIndex);
            };

        } else {

            _slingLoadPoints = [_vehicle] call FUNC(getSlingLoadPoints);
            if(count _slingLoadPoints > 1) then {

                ACE_player setVariable [QGVAR(Deploy_Count_Vehicle), _vehicle];

                ASL_Deploy_Ropes_Count_Menu = [
                        ["Deploy Ropes",false]
                ];

                ASL_Deploy_Ropes_Count_Menu pushBack ["For Single Cargo", [0], "", -5, [["expression", QUOTE([1] call FUNC(deployRopesCountAction))]], "1", "1"];

                if((count _slingLoadPoints) > 1) then {
                    ASL_Deploy_Ropes_Count_Menu pushBack ["For Double Cargo", [0], "", -5, [["expression", QUOTE([2] call FUNC(deployRopesCountAction))]], "1", "1"];
                };

                if((count _slingLoadPoints) > 2) then {
                    ASL_Deploy_Ropes_Count_Menu pushBack ["For Triple Cargo", [0], "", -5, [["expression", QUOTE([3] call FUNC(deployRopesCountAction))]], "1", "1"];
                };

                showCommandingMenu "";
                showCommandingMenu "#USER:ASL_Deploy_Ropes_Count_Menu";
            } else {
                [_vehicle,ACE_player] call FUNC(deployRopes);
            };

        };

    };

};
