#include "..\script_component.hpp"

/*
 * Author: Andx
 * Scans all connected players loadouts at mission start and builds per-category
 * item databases (averaged across all players) used for crate filling. Runs
 * server-only; the result is broadcast to clients via QGVAR(dbUpdated) so
 * fnc_isCrateAvailable can be used from the (client-side) ACE action condition.
 *
 * Populated globals:
 *   GVAR(db) - HashMap, crate type -> [classname, count] array:
 *     "ammo"       - rifle / pistol magazines
 *     "grenades"   - hand grenades, smoke, flares
 *     "at"         - launcher ammunition (rockets / missiles)
 *     "explosives" - mines, demo charges, satchels
 *     "support"    - misc inventory items
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

// Initialise the database so spawnCrate can detect "scan done" even with 0 players
GVAR(db)      = createHashMap;
GVAR(db_init) = false;

// Wait for initial player wave to finish loading
[{
    private _players = allPlayers;
    private _playerCount = count _players;

    if (_playerCount == 0) exitWith {
        INFO("No players found during loadout scan");
        GVAR(db_init) = true;
        [QGVAR(dbUpdated), [[]]] call CBA_fnc_globalEvent;
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
            switch ([_x] call FUNC(classifyMag)) do {
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

    GVAR(db) = createHashMapFromArray [
        ["ammo", _db_ammo],
        ["grenades", _db_grenades],
        ["at", _db_at],
        ["explosives", _db_explosives],
        ["support", _db_support]
    ];

    LOG_5("Scan complete. ammo=%1 grenades=%2 at=%3 explosives=%4 support=%5",
        count _db_ammo,count _db_grenades,count _db_at,count _db_explosives,count _db_support);

    GVAR(db_init) = true;

    // The database only exists on the server otherwise - clients need their
    // own copy so the ACE action's condition can hide crate types with
    // nothing to fill them without a round trip to the server. HashMaps
    // aren't natively network-transparent, so it's flattened to an array of
    // [key, value] pairs and rebuilt with createHashMapFromArray on the client.
    [QGVAR(dbUpdated), [GVAR(db) toArray false]] call CBA_fnc_globalEvent;
  }, [], 5] call CBA_fnc_waitAndExecute;
