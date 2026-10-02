#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * SERVER ONLY. Listens to CrowsEW's own "crowsEW_main_updateJammers" broadcast (fired after
 * every add/toggle/remove of ANY jammer, not just ours) and keeps the "sweep_bft" Spectrum
 * beacon of every BFT-capable jammer in sync with its enabled state.
 *
 * This exists because CrowsEW's own toggle handler (fnc_toggleJammerServer.sqf) only knows
 * how to re-add beacons for its own "VoiceCommsJammer"/"DroneJammer" capabilities on toggle-on -
 * it would silently drop an unknown capability's beacon forever after one toggle-off/on cycle.
 * Full jammer removal already strips ALL beacon types unconditionally on CrowsEW's side
 * (fnc_removeJammerServer.sqf), so nothing extra is needed for that case.
 *
 * GVAR(bftBeaconActive) tracks what we believe is currently registered, so we only ever call
 * add/remove when the desired state actually changes (crowsEW_spectrum_beacons has no built-in
 * deduplication - calling addBeacon repeatedly would otherwise stack duplicate beacons).
 *
 * Arguments:
 * 0: HASHMAP - CrowsEW's jamMap (netId -> [_unit, _radFalloff, _radEffective, _enabled, _capabilities])
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_jamMap", createHashMap, [createHashMap]]];

if (!isServer) exitWith {};

{
    private _netId = _x;
    _y params ["_unit", "_radFalloff", "_radEffective", "_enabled", "_capabilities"];

    private _isBftJammer = (BFT_JAM_CAP_BLACKOUT in _capabilities) || (BFT_JAM_CAP_DRIFT in _capabilities) || (BFT_JAM_CAP_MIXED in _capabilities);
    if (_isBftJammer) then {
        private _shouldHaveBeacon = _enabled && !isNull _unit;
        private _hasBeacon = GVAR(bftBeaconActive) getOrDefault [_netId, false];

        if (_shouldHaveBeacon && !_hasBeacon) then {
            private _frequency = _unit getVariable [QGVAR(frequency), 805];
            [CROWSEW_ADD_BEACON_EVENT, [_unit, _frequency, _radFalloff + _radEffective, BFT_JAM_SPECTRUM_TYPE]] call CBA_fnc_localEvent;
            GVAR(bftBeaconActive) set [_netId, true];
        };
        if (!_shouldHaveBeacon && _hasBeacon) then {
            [CROWSEW_REMOVE_BEACON_EVENT, [_unit, BFT_JAM_SPECTRUM_TYPE]] call CBA_fnc_localEvent;
            GVAR(bftBeaconActive) set [_netId, false];
        };
    };
} forEach _jamMap;

// forget bookkeeping for jammers that no longer exist at all (fully removed jammers already had
// every beacon type stripped by CrowsEW's own removal path)
{
    if !(_x in _jamMap) then { GVAR(bftBeaconActive) deleteAt _x };
} forEach (keys GVAR(bftBeaconActive));
