#include "..\script_component.hpp"

/*
 * Author: Andx
 * Spawns a supply crate of the given type near a position or object and fills
 * it from the scanned loadout database. Medical crates spawn pre-defined TTT
 * common classes (or their compat_kam equivalents if KAT Advanced Medical is
 * loaded) and are already filled by their class definition. Dynamic crate
 * types with nothing to fill them from (e.g. no AT ammo carried by any
 * player) are not spawned at all. On success, the notify owner (if any) gets
 * a confirmation via the same hint/Zeus-message channel used for failures.
 *
 * Arguments:
 * 0: Reference position or object to spawn the crate near. If a
 *    "VR_Area_01_square_2x2_yellow_F" pad is placed within 10 m, the crate
 *    always spawns exactly there for predictable placement - or not at all
 *    if that spot is already occupied by another crate (no random fallback
 *    in that case). Only when no such pad exists nearby is an empty spot
 *    searched for nearby instead of using a fixed offset <ARRAY|OBJECT>
 * 1: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie" <STRING>
 * 2: Network owner ID to notify if the crate can't be spawned, if any <NUMBER> (default: -1)
 * 3: Notify via ace_zeus_fnc_showMessage instead of a screen hint - use for
 *    Zeus-triggered spawns, since the owner is a curator <BOOLEAN> (default: false)
 * 4: Depot object whose per-type stock (if limited via QGVAR(limits)) should
 *    be checked and consumed - distinct from argument 0, which is only the
 *    proximity reference to spawn near. objNull means unlimited <OBJECT> (default: objNull)
 * 5: If the fixed spawn point marker (see below) is occupied, fall back to a
 *    random nearby spot instead of failing outright. Used by the Zeus module,
 *    which - unlike a depot - has no need for a stable, repeatable position:
 *    the module's own placement already tells Zeus where the crate goes, so
 *    an occupied marker nearby should never be a reason to spawn nothing
 *    <BOOLEAN> (default: false)
 *
 * Return Value:
 * Spawned crate object, or objNull on failure <OBJECT>
 *
 * Example:
 * [getPos player, "ammo"] call ttt_resupply_fnc_spawnCrate;
 * [supplyDepot, "medical_charlie", clientOwner] call ttt_resupply_fnc_spawnCrate;
 *
 * Public: Yes
 */

params [
    ["_target", objNull, [objNull, []]],
    ["_type", "ammo", [""]],
    ["_notifyOwner", -1, [0]],
    ["_notifyZeus", false, [false]],
    ["_container", objNull, [objNull]],
    ["_fallbackOnOccupied", false, [false]]
];

if (!isServer) exitWith { objNull };

// Guard: null object target. This must be a flat, top-level exitWith - nested
// inside the "then" block below, it would only end that block (SQF stacks a
// new scope per if/then) and fall through to the rest of the function instead
// of aborting it.
if (_target isEqualType objNull && { isNull _target }) exitWith {
    WARNING("spawnCrate called with null object");
    objNull
};

// Resolve the reference position to search for empty space around
private _refPos = if (_target isEqualType objNull) then {
        getPosATL _target
    } else {
        _target
    };
if (_refPos isEqualTo []) exitWith { objNull };

// Medical crates are pre-filled by their class definition; no db needed
private _isMedical = _type in ["medical_alpha", "medical_bravo", "medical_charlie"];

// Used by both the "no items found" hint below and the success notification
private _typeDisplayName = switch (_type) do {
    case "ammo":             { LLSTRING(type_ammo) };
    case "grenades":         { LLSTRING(type_grenades) };
    case "at":               { LLSTRING(type_at) };
    case "explosives":       { LLSTRING(type_explosives) };
    case "support":          { LLSTRING(type_support) };
    case "medical_alpha":    { LLSTRING(type_medical_alpha) };
    case "medical_bravo":    { LLSTRING(type_medical_bravo) };
    case "medical_charlie":  { LLSTRING(type_medical_charlie) };
    default                  { _type };
};

// Guard: scan must have completed before spawning dynamic crates
if (!_isMedical && !GVAR(db_init)) exitWith {
    WARNING("Crate spawn requested but database has not been built yet");
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [localize LSTRING(databaseEmpty), _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// Dynamic crates draw from the per-category database; skip spawning entirely
// if no player carried anything that falls into this category
private _db = GVAR(db) getOrDefault [_type, []];

// Flat, top-level exitWith - see the null-target guard above for why this
// can't be nested inside an "if (!_isMedical) then {}" block.
if (!_isMedical && {_db isEqualTo []}) exitWith {
    WARNING_1("No items found for crate type %1, skipping spawn",_type);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [format [localize LSTRING(typeEmpty), _typeDisplayName], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// Guard: depot's configured per-type stock (if any) is exhausted. Re-checked
// here authoritatively rather than trusting the ACE action's condition,
// since that only hides the action client-side.
if ([_container, _type] call FUNC(getCrateLimit) == 0) exitWith {
    WARNING_1("Crate limit exhausted for type %1 at this depot",_type);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [format [localize LSTRING(limitExhausted), _typeDisplayName], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// Determine box class from faction setting and crate type
private _prefix = ["Box_NATO", "Box_East", "Box_IND"] param [GVAR(faction), "Box_NATO"];

// KAT Advanced Medical replaces the plain ACE medical crates with its own
// loadouts when loaded
private _katLoaded = "kat_main" call CBA_fnc_isModLoaded;

private _crateClass = switch (_type) do {
    case "ammo":             { _prefix + "_Ammo_F" };
    case "grenades":         { _prefix + "_Grenades_F" };
    case "at":               { _prefix + "_WpsLaunch_F" };
    case "explosives":       { _prefix + "_AmmoOrd_F" };
    case "support":          { _prefix + "_Support_F" };
    case "medical_alpha":    { [QEGVAR(common,sana_crate), QEGVAR(compat_kam,sana_crate)] select _katLoaded };
    case "medical_bravo":    { [QEGVAR(common,sanb_crate), QEGVAR(compat_kam,sanb_crate)] select _katLoaded };
    case "medical_charlie":  { [QEGVAR(common,sanc_crate), QEGVAR(compat_kam,sanc_crate)] select _katLoaded };
    default                  { _prefix + "_Ammo_F" };
};

// Guard: catch a missing/misconfigured crate class (e.g. ttt_common or
// compat_kam not loaded) instead of silently handing back objNull with no
// explanation
if (!(isClass (configFile >> "CfgVehicles" >> _crateClass))) exitWith {
    WARNING_1("Crate class %1 does not exist - is ttt_common/compat_kam loaded?",_crateClass);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [format [localize LSTRING(spawnFailed), _type], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// If a mission maker placed a marker object (classname configurable via
// GVAR(spawnPointClass), defaults to "VR_Area_01_square_2x2_yellow_F") near
// the reference point, spawn exactly there - gives a predictable,
// always-in-the-same-spot placement instead of wherever the free-space
// search below happens to land. No state is kept for this: it's a plain
// proximity search by classname done fresh on every call, same as
// everything else in this function. Trust the mission maker's placement
// outright instead of re-validating it with findEmptyPosition - a tight
// enough search radius to actually confirm "this exact spot" would be too
// small for most crates' footprint and never find anything, while a wide
// enough one to succeed would defeat the point of spawning at a fixed spot.
// Occupied is instead checked directly: is there already a crate (any type
// spawned by this function - all inherit ReammoBox_F) sitting on the pad.
private _markerClass = GVAR(spawnPointClass);
private _markers = _refPos nearObjects [_markerClass, 10];
private _markerPos = if (_markers isNotEqualTo []) then { getPosATL (_markers select 0) } else { [] };
private _markerOccupied = _markerPos isNotEqualTo [] && {(_markerPos nearObjects ["ReammoBox_F", 3]) isNotEqualTo []};

// Guard: a marker exists but is already occupied - stop here instead of
// falling back to a random nearby spot, since that would silently turn a
// deliberately predictable spawn point unpredictable again whenever busy.
// _fallbackOnOccupied opts out of this for the Zeus module (see its header
// arg 5 above): a marker sitting within 10 m of a Zeus-placed module is
// mere coincidence, not the mission maker's designated spot, so it should
// never be a reason to refuse the spawn outright.
if (_markerOccupied && !_fallbackOnOccupied) exitWith {
    WARNING_1("Spawn marker near %1 is occupied, skipping spawn",_refPos);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [localize LSTRING(spawnSpotOccupied), _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// Occupied but falling back (Zeus): treat it as if there were no marker at
// all, so the free-space search below runs near the reference position.
if (_markerOccupied) then { _markerPos = []; };

// Look for actual free space near the reference point instead of a fixed
// offset, which could clip into terrain, walls or the depot/caller itself
private _pos = if (_markerPos isNotEqualTo []) then { _markerPos } else {
    _refPos findEmptyPosition [0, 10, _crateClass]
};
if (_pos isEqualTo []) then {
    WARNING_1("No empty position found near %1, spawning at the reference position instead",_refPos);
    _pos = _refPos;
};

// Create at [0,0,0] first (always empty) rather than directly at _pos, then
// move it into place - avoids the engine's own collision-avoidance placement
// logic kicking in on top of the empty-position search already done above.
private _crate = createVehicle [_crateClass, [0, 0, 0], [], 0, "NONE"];

if (isNull _crate) exitWith {
    WARNING_1("createVehicle failed for crate class %1",_crateClass);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [format [localize LSTRING(spawnFailed), _type], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

_crate setPosATL _pos;

// Consume one unit of the depot's stock for this type, if it has a limit
[_container, _type] call FUNC(decrementCrateLimit);

// Fill dynamic crates from the per-category database resolved above
if (!_isMedical) then {
    [[_crate], _db] call EFUNC(common,crateFiller);
};

if (_notifyOwner != -1) then {
    // Report the depot's remaining stock for this type alongside the
    // confirmation, or that it's unlimited if the depot has no configured limit
    private _remaining = [_container, _type] call FUNC(getCrateLimit);
    private _remainingText = if (_remaining == -1) then { localize LSTRING(unlimited) } else { _remaining };
    [QGVAR(hint), [format [localize LSTRING(spawnSuccess), _typeDisplayName, _remainingText], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
};

_crate
