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

if !(GVAR(enableDRP)) exitWith {INFO("Rich Presence is disabled by client");};

INFO("Updating Rich Presence");

[
    ["UpdateDetails", missionNameSource],
    ["UpdateState", serverName],
    ["UpdatePartySize", count playableUnits],
    ["UpdatePartyMax", getNumber(missionConfigFile >> "Header" >> "maxPlayers")]
] call (missionNamespace getVariable ["discordrichpresence_fnc_update", {}]);
