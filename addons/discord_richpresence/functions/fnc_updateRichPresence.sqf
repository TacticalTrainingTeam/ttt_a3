#include "..\script_component.hpp"

/*
 * Author: Andx667
 * Updates Discord Rich Presence Details.
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

private _role = roleDescription player;

if (hasInterface && isServer) then {
    _role = "Singeplayer";
};

[
    ["UpdateDetails", [getText (missionConfigFile >> "onLoadName"), LLSTRING(on), getText (configFile >> "CfgWorlds" >> worldName >> "description")] joinString " "],
    ["UpdateState", [LLSTRING(as), _role] joinString " "],
    ["UpdatePartySize", count (call CBA_fnc_players)],
    ["UpdatePartyMax", getNumber (missionConfigFile >> "Header" >> "maxPlayers") - 1] //minus 1 for HC
] call (missionNamespace getVariable ["discordrichpresence_fnc_update", {}]);
