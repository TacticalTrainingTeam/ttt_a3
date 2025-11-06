#include "..\script_component.hpp"

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
 * Public: Yes

 */

if !(GVAR(enableDRP)) exitWith {INFO("Rich Presence is disabled by client");};

INFO("Updating Discord Rich Presence");

[
    ["UpdateDetails", [getText (missionConfigFile >> "onLoadName"), "on", getText (configFile >> "CfgWorlds" >> worldName >> "description")] joinString " "],
    ["UpdateState", serverName],
    ["UpdatePartySize", count playableUnits],
    ["UpdatePartyMax", getNumber (missionConfigFile >> "Header" >> "maxPlayers")]
] call (missionNamespace getVariable ["discordrichpresence_fnc_update", {}]);

// Call this function again after 10 Minutes
[
    {
        call FUNC(updateRichPresence);
    },
    [],
    DRP_UPDATE_INTERVAL
] call CBA_fnc_waitAndExecute;
