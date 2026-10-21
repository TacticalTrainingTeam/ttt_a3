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
 * The current state is read straight from crowsEW_spectrum_beacons rather than tracked here, so
 * we only call add/remove when it actually has to change (addBeacon has no built-in
 * deduplication) and a beacon removed by anything else gets re-added on the next update.
 *
 * Arguments:
 * 0: CrowsEW jamMap, netId -> [unit, radFalloff, radEffective, enabled, capabilities] <HASHMAP>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_jamMap", createHashMap, [createHashMap]]];

if (!isServer) exitWith {};

{
    _y params ["_unit", "_radFalloff", "_radEffective", "_enabled", "_capabilities"];

    private _isBftJammer = (BFT_JAM_CAP_BLACKOUT in _capabilities) || (BFT_JAM_CAP_DRIFT in _capabilities) || (BFT_JAM_CAP_MIXED in _capabilities);
    if (_isBftJammer && {!isNull _unit}) then {
        private _hasBeacon = (CROWSEW_BEACONS findIf {(_x select 0) isEqualTo _unit && {(_x select 3) == BFT_JAM_SPECTRUM_TYPE}}) != -1;

        if (_enabled && !_hasBeacon) then {
            private _frequency = _unit getVariable [QGVAR(frequency), BFT_JAM_DEFAULT_FREQUENCY];
            [CROWSEW_ADD_BEACON_EVENT, [_unit, _frequency, _radFalloff + _radEffective, BFT_JAM_SPECTRUM_TYPE]] call CBA_fnc_localEvent;
        };
        if (!_enabled && _hasBeacon) then {
            [CROWSEW_REMOVE_BEACON_EVENT, [_unit, BFT_JAM_SPECTRUM_TYPE]] call CBA_fnc_localEvent;
        };
    };
} forEach _jamMap;
