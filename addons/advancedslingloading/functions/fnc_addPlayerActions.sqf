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
    call FUNC(extendRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(extendRopesActionCheck))];

player addAction ["Shorten Cargo Ropes", {
    call FUNC(shortenRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(shortenRopesActionCheck))];

player addAction ["Release Cargo", {
    call FUNC(releaseCargoAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(releaseRopesActionCheck))];

player addAction ["Retract Cargo Ropes", {
    call FUNC(retractRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(retractRopesActionCheck))];

player addAction ["Deploy Cargo Ropes", {
    call FUNC(deployRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(deployRopesActionCheck))];

player addAction ["Attach To Cargo Ropes", {
    call FUNC(attachRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(attachRopesActionCheck))];

player addAction ["Drop Cargo Ropes", {
    call FUNC(dropRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(dropRopesActionCheck))];

player addAction ["Pickup Cargo Ropes", {
    call FUNC(pickupRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(pickupRopesActionCheck))];

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(actions_loaded),false];
}];
