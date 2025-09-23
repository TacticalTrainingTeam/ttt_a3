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
 * [params] call ttt_advancedslingloading_fnc_addPlayerActions
 *
 * Public: No
 */

player addAction ["Extend Cargo Ropes", {
    [] call ASL_Extend_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(extendRopesActionCheck))];

player addAction ["Shorten Cargo Ropes", {
    [] call ASL_Shorten_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(shortenRopesActionCheck))];

player addAction ["Release Cargo", {
    [] call ASL_Release_Cargo_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(releaseRopesActionCheck))];

player addAction ["Retract Cargo Ropes", {
    [] call ASL_Retract_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(retractRopesActionCheck))];

player addAction ["Deploy Cargo Ropes", {
    [] call ASL_Deploy_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(deployRopesActionCheck))];

player addAction ["Attach To Cargo Ropes", {
    [] call ASL_Attach_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(attachRopesActionCheck))];

player addAction ["Drop Cargo Ropes", {
    [] call ASL_Drop_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(dropRopesActionCheck))];

player addAction ["Pickup Cargo Ropes", {
    [] call ASL_Pickup_Ropes_Action;
}, nil, 0, false, true, "", QUOTE(call FUNC(pickupRopesActionCheck))];

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(actions_loaded),false];
}];
