#include "..\script_component.hpp"

/*
 * Author: Andx
 * Spawns a crate near a Zeus-chosen position, waiting for the loadout
 * database to finish building first if the type needs it. Shared by the
 * Zeus placement module and the ZEN context menu action - both represent an
 * ad-hoc, curator-chosen spawn point rather than a mission maker's fixed
 * depot, so both call fnc_spawnCrate with _fallbackOnOccupied = true (an
 * occupied fixed spawn-point marker within range is coincidence here, not
 * intent, and should never make the spawn fail outright).
 *
 * Arguments:
 * 0: Position to spawn the crate near <ARRAY>
 * 1: Crate type - "ammo", "grenades", "at", "explosives", "support",
 *    "medical_alpha", "medical_bravo", "medical_charlie" <STRING>
 * 2: Network owner ID of the requesting curator, if any <NUMBER> (default: -1)
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_pos", [], [[]]], ["_type", "", [""]], ["_notifyOwner", -1, [0]]];

if (!isServer) exitWith {};

// Modules with isTriggerActivated = 0 fire almost immediately at mission
// start, well before scanLoadouts' database finishes building, so dynamic
// crate types wait on GVAR(db_init) via CBA rather than spawning a thread
// to poll with waitUntil/sleep. The ZEN context menu action can be
// triggered just as early by a curator connecting right at mission start.
if (_type in ["medical_alpha", "medical_bravo", "medical_charlie"]) then {
    [_pos, _type, _notifyOwner, true, objNull, true] call FUNC(spawnCrate);
} else {
    [{ GVAR(db_init) }, {
        params ["_pos", "_type", "_notifyOwner"];
        [_pos, _type, _notifyOwner, true, objNull, true] call FUNC(spawnCrate);
    }, [_pos, _type, _notifyOwner]] call CBA_fnc_waitUntilAndExecute;
};
