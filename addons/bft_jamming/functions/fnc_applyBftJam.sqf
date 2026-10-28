#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * Classifies one cTab BFT list entry (member/group/vehicle) against the currently active BFT
 * jammers and applies Drift in place if applicable. Shared by fnc_onBftListsUpdated.sqf so the
 * same logic isn't triplicated across cTabBFTmembers/cTabBFTgroups/cTabBFTvehicles.
 *
 * A Mixed jammer blacks out inside its effective radius and drifts (tapering to 0) in its
 * falloff band, reusing the exact same two radii a Blackout/Drift jammer already has.
 *
 * Note: mutating index 5 only has a visible effect for cTabBFTgroups/cTabBFTvehicles entries -
 * cTab_fnc_drawBftMarkers always draws cTabBFTmembers (dismounted group members) from a live
 * getPosASL, so Drift/Mixed offsets computed here are inert for that list (known cTab
 * limitation, see readme.md). Left in place rather than special-cased since it's harmless.
 *
 * Arguments:
 * 0: cTab BFT list entry [unit, iconA, iconB, text, groupID, posASL, dir], index 5 mutated in place when Drift applies <ARRAY>
 * 1: Active BFT-capable jammer entries from crowsEW_main_jamMap, each [unit, radFalloff, radEffective, enabled, capabilities] <ARRAY>
 * 2: Drift offsets already computed this pulse, "<unitNetId>_<jammerNetId>" -> offset, mutated in place <HASHMAP>
 *
 * Return Value:
 * Entry is blacked out and should be removed from its list <BOOL>
 *
 * Public: No
 */

params [["_entry", [], [[]]], ["_jammers", [], [[]]], ["_pulseOffsets", createHashMap, [createHashMap]]];

private _unit = _entry select 0;
if (isNull _unit) exitWith {false};

private _unitPos = getPosASL _unit;
private _blackedOut = false;
private _driftStrength = 0;
private _driftJammer = objNull;

{
    _x params ["_jUnit", "_radFalloff", "_radEffective", "", "_capabilities"];
    private _dist = _unitPos distance (getPosASL _jUnit);
    if (_dist <= (_radEffective + _radFalloff)) then {
        private _isMixed = BFT_JAM_CAP_MIXED in _capabilities;
        // Mixed only blacks out inside the effective (inner) radius - beyond that it tapers
        // into Drift via the same falloff band Blackout/Drift jammers already use.
        if ((BFT_JAM_CAP_BLACKOUT in _capabilities) || (_isMixed && (_dist <= _radEffective))) then {
            _blackedOut = true;
        } else {
            if ((BFT_JAM_CAP_DRIFT in _capabilities) || _isMixed) then {
                private _strength = [_dist, _radEffective, _radFalloff] call FUNC(calcBftJamStrength);
                if (_strength > _driftStrength) then {
                    _driftStrength = _strength;
                    _driftJammer = _jUnit;
                };
            };
        };
    };
} forEach _jammers;

if (_blackedOut) exitWith {true};

if (_driftStrength > 0) then {
    private _key = format ["%1_%2", netId _unit, netId _driftJammer];
    private _offset = _pulseOffsets getOrDefault [_key, []];
    if (_offset isEqualTo []) then {
        _offset = [_unit, _driftJammer, _driftStrength] call FUNC(getBftDriftOffset);
        _pulseOffsets set [_key, _offset];
    };
    _entry set [5, (_entry select 5) vectorAdd _offset];
};

false
