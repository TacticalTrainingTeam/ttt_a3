#include "script_component.hpp"

// Source: PzGrenBtl402 addons/Redd_Marder/XEH_postInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
if (hasInterface) then {
    // Marder: the vehicle is locked while the rear ramp is closed. Commander and driver get in through custom actions.
    private _getInCommanderAction = configFile >> "CfgActions" >> "GetInCommander";
    private _getInCommanderParams = [
        [
            "", // Set with setUserActionText
            {
                params ["_vehicle", "_unit"];

                [_vehicle, [getArray (configOf _vehicle >> QGVAR(commanderTurret)), false]] remoteExecCall ["lockTurret"];
                _unit setVariable [QEGVAR(common,lockedSeat), nil, true];

                _unit playAction "GetInLow";

                [{(animationState (_this select 1)) isEqualTo "amovpercmstpsnonwnondnon"}, {
                    params ["_vehicle", "_unit"];
                    [_unit, _vehicle] remoteExecCall ["moveInCommander", _unit];
                }, [_vehicle, _unit]] call CBA_fnc_waitUntilAndExecute;
            },
            nil,
            getNumber (_getInCommanderAction >> "priority"),
            true,
            true,
            getText (_getInCommanderAction >> "shortcut"),
            QUOTE(((locked _target) isEqualTo 2) && {isNull objectParent _this} && {[ARR_2(_target,'commander')] call FUNC(canGetInSeat)}), // _target = vehicle, _this = player
            1.5
        ],
        "str_action_getin_commander",
        getText (configFile >> "CfgActions" >> "GetInGunner" >> "textDefault")
    ];

    private _getInDriverAction = configFile >> "CfgActions" >> "GetInDriver";
    private _getInDriverParams = [
        [
            "", // Set with setUserActionText
            {
                params ["_vehicle", "_unit"];

                _unit playAction "GetInLow";

                [{(animationState (_this select 1)) isEqualTo "amovpercmstpsnonwnondnon"}, {
                    params ["_vehicle", "_unit"];
                    [_unit, _vehicle] remoteExecCall ["moveInDriver", _unit];
                }, [_vehicle, _unit]] call CBA_fnc_waitUntilAndExecute;
            },
            nil,
            getNumber (_getInDriverAction >> "priority"),
            true,
            true,
            getText (_getInDriverAction >> "shortcut"),
            "(isNull (driver _target)) && {(locked _target) isEqualTo 2} && {isNull objectParent _this} && {!lockedDriver _target}", // _target = vehicle, _this = player
            2
        ],
        "str_action_getin_driver",
        getText (_getInDriverAction >> "textDefault")
    ];

    GVAR(getInParams) = [_getInCommanderParams, _getInDriverParams];
};
