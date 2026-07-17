#include "..\script_component.hpp"

/*
 * Author: Andx
 * Spawns a supply crate of the given type near a position or object and fills
 * it from the scanned loadout database. Medical crates spawn pre-defined TTT
 * common classes and are already filled by their class definition.
 *
 * Arguments:
 * 0: Position or Object to spawn the crate near <ARRAY|OBJECT>
 * 1: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie" <STRING>
 *
 * Return Value:
 * Spawned crate object, or objNull on failure <OBJECT>
 *
 * Example:
 * [getPos player, "ammo"] call ttt_resupply_fnc_spawnCrate;
 * [supplyDepot, "medical_charlie"] call ttt_resupply_fnc_spawnCrate;
 *
 * Public: Yes
 */

if (!isServer) exitWith { objNull };

params [["_target", objNull, [objNull, []]], ["_type", "ammo", [""]]];

// Resolve spawn position — 3 m to the right of a depot object to avoid overlap
private _pos = if (_target isEqualType objNull) then {
    if (isNull _target) exitWith {
        LOG("resupply: spawnCrate called with null object");
        []
    };
    _target getRelPos [3, 90]
} else {
    _target
};
if (_pos isEqualTo []) exitWith { objNull };

// Medical crates are pre-filled by their class definition; no db needed
private _isMedical = _type in ["medical_alpha", "medical_bravo", "medical_charlie"];

// Guard: scan must have completed before spawning dynamic crates
if (!_isMedical && { isNil QGVAR(db_ammo) }) exitWith {
    LOG("resupply: Crate spawn requested but database has not been built yet");
    [LLSTRING(databaseEmpty)] remoteExec ["systemChat", 0];
    objNull
};

// Determine box class from faction setting and crate type
private _prefix = ["Box_NATO", "Box_East", "Box_IND"] param [GVAR(faction), "Box_NATO"];

private _crateClass = switch (_type) do {
    case "ammo":             { _prefix + "_Ammo_F" };
    case "grenades":         { _prefix + "_Grenades_F" };
    case "at";
    case "explosives":       { _prefix + "_AmmoOrd_F" };
    case "support":          { _prefix + "_Support_F" };
    case "medical_alpha":    { "ttt_common_sana_crate" };
    case "medical_bravo":    { "ttt_common_sanb_crate" };
    case "medical_charlie":  { "ttt_common_sanc_crate" };
    default                  { _prefix + "_Ammo_F" };
};

private _crate = createVehicle [_crateClass, _pos, [], 0, "NONE"];

// Fill dynamic crates from the per-category database
if (!_isMedical) then {
    private _db = switch (_type) do {
        case "ammo":       { GVAR(db_ammo) };
        case "grenades":   { GVAR(db_grenades) };
        case "at":         { GVAR(db_at) };
        case "explosives": { GVAR(db_explosives) };
        case "support":    { GVAR(db_support) };
        default            { [] };
    };
    if (_db isNotEqualTo []) then {
        [[_crate], _db] call ttt_common_fnc_crateFiller;
    };
};

_crate
