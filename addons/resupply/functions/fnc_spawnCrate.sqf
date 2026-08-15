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
 * 0: Reference position or object to spawn the crate near - an empty spot is
 *    searched for around it rather than using a fixed offset <ARRAY|OBJECT>
 * 1: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie" <STRING>
 * 2: Network owner ID to notify if the crate can't be spawned, if any <NUMBER> (default: -1)
 * 3: Notify via ace_zeus_fnc_showMessage instead of a screen hint - use for
 *    Zeus-triggered spawns, since the owner is a curator <BOOLEAN> (default: false)
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
    ["_notifyZeus", false, [false]]
];

if (!isServer) exitWith { objNull };

// Guard: null object target. This must be a flat, top-level exitWith - nested
// inside the "then" block below, it would only end that block (SQF stacks a
// new scope per if/then) and fall through to the rest of the function instead
// of aborting it.
if (_target isEqualType objNull && { isNull _target }) exitWith {
    WARNING("spawnCrate called with null object");
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

// Determine box class from faction setting and crate type
private _prefix = ["Box_NATO", "Box_East", "Box_IND"] param [GVAR(faction), "Box_NATO"];

// KAT Advanced Medical replaces the plain ACE medical crates with its own
// loadouts when loaded
private _katLoaded = isClass (configFile >> "CfgPatches" >> "kat_main");

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

// Look for actual free space near the reference point instead of a fixed
// offset, which could clip into terrain, walls or the depot/caller itself
private _pos = _refPos findEmptyPosition [0, 10, _crateClass];
if (_pos isEqualTo []) then {
    WARNING_1("No empty position found near %1, spawning at the reference position instead",_refPos);
    _pos = _refPos;
};

private _crate = createVehicle [_crateClass, _pos, [], 0, "NONE"];

if (isNull _crate) exitWith {
    WARNING_1("createVehicle failed for crate class %1",_crateClass);
    if (_notifyOwner != -1) then {
        [QGVAR(hint), [format [localize LSTRING(spawnFailed), _type], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
    };
    objNull
};

// Fill dynamic crates from the per-category database resolved above
if (!_isMedical) then {
    [[_crate], _db] call EFUNC(common,crateFiller);
};

if (_notifyOwner != -1) then {
    [QGVAR(hint), [format [localize LSTRING(spawnSuccess), _typeDisplayName], _notifyZeus], _notifyOwner] call CBA_fnc_ownerEvent;
};

_crate
