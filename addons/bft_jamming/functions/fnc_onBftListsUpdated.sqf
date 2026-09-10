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
 * Note: this only visibly affects position when ctab_core_bft_mode = 2 ("atSync"), since in
 * mode 1 ("realTime") cTab_fnc_drawBftMarkers re-samples getPosASL live and ignores index 5.
 * Removal (Blackout) works in either mode, since a removed entry is simply never drawn.
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

private _jammers = (values CROWSEW_JAM_MAP) select {
    (_x select 3) && {
        (BFT_JAM_CAP_BLACKOUT in (_x select 4)) ||
        (BFT_JAM_CAP_DRIFT in (_x select 4)) ||
        (BFT_JAM_CAP_MIXED in (_x select 4))
    }
};

if (_jammers isEqualTo []) exitWith {};

private _touchedDriftKeys = [];

private _removeMembers = cTabBFTmembers select {[_x, _jammers, _touchedDriftKeys] call FUNC(applyBftJam)};
cTabBFTmembers = cTabBFTmembers - _removeMembers;

private _removeGroups = cTabBFTgroups select {[_x, _jammers, _touchedDriftKeys] call FUNC(applyBftJam)};
cTabBFTgroups = cTabBFTgroups - _removeGroups;

private _removeVehicles = cTabBFTvehicles select {[_x, _jammers, _touchedDriftKeys] call FUNC(applyBftJam)};
cTabBFTvehicles = cTabBFTvehicles - _removeVehicles;

// drop drift smoothing state for pairs that weren't relevant this pulse (unit/jammer out of
// range, jammer removed, unit no longer tracked, ...) so GVAR(driftState) doesn't grow forever
private _prunedDriftState = createHashMap;
{
    if (_x in _touchedDriftKeys) then {
        _prunedDriftState set [_x, GVAR(driftState) get _x];
    };
} forEach (keys GVAR(driftState));
GVAR(driftState) = _prunedDriftState;
