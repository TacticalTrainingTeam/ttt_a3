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

player addAction [LLSTRING(extend_cargo_ropes), {
    call FUNC(extendRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(extendRopesActionCheck))];

player addAction [LLSTRING(shorten_cargo_ropes), {
    call FUNC(shortenRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(shortenRopesActionCheck))];

player addAction [LLSTRING(release_cargo_ropes), {
    call FUNC(releaseCargoAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(releaseRopesActionCheck))];

player addAction [LLSTRING(retract_cargo_ropes), {
    call FUNC(retractRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(retractRopesActionCheck))];

player addAction [LLSTRING(deploy_cargo_ropes), {
    call FUNC(deployRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(deployRopesActionCheck))];

player addAction [LLSTRING(attach_to_cargo_ropes), {
    call FUNC(attachRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(attachRopesActionCheck))];

player addAction [LLSTRING(drop_cargo_ropes), {
    call FUNC(dropRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(dropRopesActionCheck))];

player addAction [LLSTRING(pickup_cargo_ropes), {
    call FUNC(pickupRopesAction);
}, nil, 0, false, true, "", QUOTE(call FUNC(pickupRopesActionCheck))];

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(actions_loaded),false];
}];
