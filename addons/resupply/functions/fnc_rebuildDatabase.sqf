#include "..\script_component.hpp"

/*
 * Author: Andx
 * Rebuilds the crate item database from the loadouts of all players currently
 * in the mission. Use this when the initial scan missed players (JIP, late
 * joiners) or loadouts changed substantially after mission start. Can be
 * called from any machine; a call on a client is forwarded to the server.
 *
 * The old database stays active until the new scan has finished, so crate
 * spawns requested in the meantime still work. Once done, clients receive the
 * new database via QGVAR(dbUpdated) and the server raises QGVAR(dbReady)
 * again.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_resupply_fnc_rebuildDatabase;
 *
 * Public: Yes
 */

if (!isServer) exitWith {
    [QGVAR(rebuildDatabase), []] call CBA_fnc_serverEvent;
};

// No settle delay needed - everyone is already in the mission
[0] call FUNC(scanLoadouts);
