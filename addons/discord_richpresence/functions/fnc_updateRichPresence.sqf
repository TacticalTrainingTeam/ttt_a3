#include "script_component.hpp"

/*
 * Author: Andx667
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ttt_discord_richpresence_fnc_updateRichPresence
 *
 * Public: No

 */

[
    ["UpdateDetails", missionNameSource],
    ["UpdateState", serverName],
    ["UpdatePartySize", count playableUnits],
    ["UpdatePartyMax", getNumber(missionConfigFile >> "Header" >> "maxPlayers")]
] call (missionNamespace getVariable ["discordrichpresence_fnc_update", {}]);
