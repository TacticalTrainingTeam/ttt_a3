#include "..\script_component.hpp"
/*
 * Author: Seth Duda
 * Adds player actions for advanced sling loading
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_advancedslingloading_fnc_addPlayerActions
 *
 * Public: No
 */

player addAction ["Extend Cargo Ropes", {
    [] call FUNC(extendRopesAction);
}, nil, 0, false, true, "", "call FUNC(extendRopesActionCheck)"];

player addAction ["Shorten Cargo Ropes", {
    [] call FUNC(shortenRopesAction);
}, nil, 0, false, true, "", "call FUNC(shortenRopesActionCheck)"];

player addAction ["Release Cargo", {
    [] call FUNC(releaseCargoAction);
}, nil, 0, false, true, "", "call FUNC(releaseCargoActionCheck)"];

player addAction ["Retract Cargo Ropes", {
    [] call FUNC(retractRopesAction);
}, nil, 0, false, true, "", "call FUNC(retractRopesActionCheck)"];

player addAction ["Deploy Cargo Ropes", {
    [] call FUNC(deployRopesAction);
}, nil, 0, false, true, "", "call FUNC(deployRopesActionCheck)"];

player addAction ["Attach To Cargo Ropes", {
    [] call FUNC(attachRopesAction);
}, nil, 0, false, true, "", "call FUNC(attachRopesActionCheck)"];

player addAction ["Drop Cargo Ropes", {
    [] call FUNC(dropRopesAction);
}, nil, 0, false, true, "", "call FUNC(dropRopesActionCheck)"];

player addAction ["Pickup Cargo Ropes", {
    [] call FUNC(pickupRopesAction);
}, nil, 0, false, true, "", "call FUNC(pickupRopesActionCheck)"];

player addEventHandler ["Respawn", {
    player setVariable ["ASL_Actions_Loaded", false];
}];
