#include "..\script_component.hpp"

/*
 * Author: Andx
 * Scans all connected players loadouts at mission start and builds per-category
 * item databases (averaged across all players) used for crate filling.
 *
 * Populated globals:
 *   GVAR(db_ammo)       - rifle / pistol magazines
 *   GVAR(db_grenades)   - hand grenades, smoke, flares
 *   GVAR(db_at)         - launcher ammunition (rockets / missiles)
 *   GVAR(db_explosives) - mines, demo charges, satchels
 *   GVAR(db_support)    - misc inventory items
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_resupply_fnc_scanLoadouts;
 *
 * Public: No
 */

if (!isServer) exitWith {};

// Initialise all databases so spawnCrate can detect "scan done" even with 0 players
GVAR(db_ammo)       = [];
GVAR(db_grenades)   = [];
GVAR(db_at)         = [];
GVAR(db_explosives) = [];
GVAR(db_support)    = [];

// Wait for initial player wave to finish loading
waitUntil { time > 3 };

private _players = allPlayers;
private _playerCount = count _players;

if (_playerCount == 0) exitWith {
    LOG("resupply: No players found during loadout scan");
};

// Classify a magazine classname into ammo / grenades / at / explosives
private _fnc_classifyMag = {
    params ["_magClass"];
    private _ammoClass = getText(configFile >> "CfgMagazines" >> _magClass >> "ammo");
    if (_ammoClass isEqualTo "") exitWith { "ammo" };

    // AT: unguided rockets and guided missiles
    if (_ammoClass isKindOf ["RocketBase", configFile >> "CfgAmmo"] ||
        _ammoClass isKindOf ["MissileBase", configFile >> "CfgAmmo"]) exitWith { "at" };

    // Explosives: mines and demolition charges
    if (_ammoClass isKindOf ["MineBase", configFile >> "CfgAmmo"] ||
        _ammoClass isKindOf ["BombCore", configFile >> "CfgAmmo"]) exitWith { "explosives" };

    // Grenades: thrown grenades, smoke, flares
    if (_ammoClass isKindOf ["GrenadeBase", configFile >> "CfgAmmo"] ||
        _ammoClass isKindOf ["SmokeShell", configFile >> "CfgAmmo"] ||
        _ammoClass isKindOf ["FlareBase", configFile >> "CfgAmmo"]) exitWith { "grenades" };

    // Default: rifle / pistol ammo
    "ammo"
};

// Accumulators: classname -> total count across all players
private _magAcc  = createHashMap;
private _itemAcc = createHashMap;

{
    {
        _magAcc set [_x, (_magAcc getOrDefault [_x, 0]) + 1];
    } forEach (magazines _x);

    {
        _itemAcc set [_x, (_itemAcc getOrDefault [_x, 0]) + 1];
    } forEach (items _x);
} forEach _players;

private _multiplier  = GVAR(quantityMultiplier);
private _db_ammo       = [];
private _db_grenades   = [];
private _db_at         = [];
private _db_explosives = [];
private _db_support    = [];

// Classify and average magazines into their categories
{
    private _avg = round ((_magAcc get _x) / _playerCount * _multiplier);
    if (_avg > 0) then {
        switch ([_x] call _fnc_classifyMag) do {
            case "ammo":       { _db_ammo       pushBack [_x, _avg] };
            case "grenades":   { _db_grenades   pushBack [_x, _avg] };
            case "at":         { _db_at         pushBack [_x, _avg] };
            case "explosives": { _db_explosives pushBack [_x, _avg] };
        };
    };
} forEach (keys _magAcc);

// All inventory items go to support
{
    private _avg = round ((_itemAcc get _x) / _playerCount * _multiplier);
    if (_avg > 0) then {
        _db_support pushBack [_x, _avg];
    };
} forEach (keys _itemAcc);

GVAR(db_ammo)       = _db_ammo;
GVAR(db_grenades)   = _db_grenades;
GVAR(db_at)         = _db_at;
GVAR(db_explosives) = _db_explosives;
GVAR(db_support)    = _db_support;

LOG_5("resupply: Scan complete. ammo=%1 grenades=%2 at=%3 explosives=%4 support=%5",
    count _db_ammo, count _db_grenades, count _db_at, count _db_explosives, count _db_support);