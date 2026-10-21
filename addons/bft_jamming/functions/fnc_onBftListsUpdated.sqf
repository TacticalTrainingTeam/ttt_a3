#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * CLIENT ONLY, local event handler for cTab's CTAB_LISTS_UPDATED_EVENT. cTab_fnc_updateLists
 * (running locally on every client) has just rebuilt the plain mission-namespace globals
 * cTabBFTmembers/cTabBFTgroups/cTabBFTvehicles, each entry [unit, iconA, iconB, text, groupID,
 * pos(ASL), dir]. cTab_fnc_drawBftMarkers reads those globals fresh on every map draw, so
 * mutating them here (before the next draw) is enough to apply jamming - no cTab code touched.
 *
 * Note: Drift/Mixed's position offset only visibly affects cTabBFTgroups/cTabBFTvehicles, and
 * only when ctab_core_bft_mode = 2 ("atSync") - in mode 1 ("realTime") cTab_fnc_drawBftMarkers
 * re-samples getPosASL live and ignores index 5. cTabBFTmembers (dismounted group members) is
 * always drawn from a live getPosASL regardless of mode, so Drift/Mixed has no visible effect
 * there - known cTab limitation, see readme.md. Removal (Blackout) works in either mode/list,
 * since a removed entry is simply never drawn.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (isNil "cTabBFTmembers" || {isNil "cTabBFTgroups"} || {isNil "cTabBFTvehicles"}) exitWith {};

// a jammer whose object was just deleted stays in the jamMap until CrowsEW's cleanup loop
// catches it - getPosASL objNull would put it at [0,0,0] and jam around the map origin
private _jammers = (values CROWSEW_JAM_MAP) select {
    (_x select 3) && {!isNull (_x select 0)} && {
        (BFT_JAM_CAP_BLACKOUT in (_x select 4)) ||
        (BFT_JAM_CAP_DRIFT in (_x select 4)) ||
        (BFT_JAM_CAP_MIXED in (_x select 4))
    }
};

if (_jammers isEqualTo []) exitWith {
    // no active BFT jammer left at all - drop any drift smoothing state so it doesn't leak
    // across jammer lifecycles (disable/remove) instead of only pruning per touched key below
    GVAR(driftState) = createHashMap;
};

// offsets computed this pulse, keyed like GVAR(driftState) - a unit can sit in two lists (e.g. the
// leader of the player's own group is in cTabBFTmembers and cTabBFTgroups), and drifting it twice
// would advance its smoothing state twice per pulse
private _pulseOffsets = createHashMap;

private _removeMembers = cTabBFTmembers select {[_x, _jammers, _pulseOffsets] call FUNC(applyBftJam)};
cTabBFTmembers = cTabBFTmembers - _removeMembers;

private _removeGroups = cTabBFTgroups select {[_x, _jammers, _pulseOffsets] call FUNC(applyBftJam)};
cTabBFTgroups = cTabBFTgroups - _removeGroups;

private _removeVehicles = cTabBFTvehicles select {[_x, _jammers, _pulseOffsets] call FUNC(applyBftJam)};
cTabBFTvehicles = cTabBFTvehicles - _removeVehicles;

// drop drift smoothing state for pairs that weren't relevant this pulse (unit/jammer out of
// range, jammer removed, unit no longer tracked, ...) so GVAR(driftState) doesn't grow forever
private _prunedDriftState = createHashMap;
{
    if (_x in _pulseOffsets) then {
        _prunedDriftState set [_x, _y];
    };
} forEach GVAR(driftState);
GVAR(driftState) = _prunedDriftState;
