#include "script_component.hpp"

[
    ["UpdateDetails", missionNameSource],
    ["UpdateState", serverName],
    ["UpdateLargeImageKey", "ttt_logo"],
    ["UpdatePartySize", count playableUnits],
    ["UpdatePartyMax", getNumber(missionConfigFile >> "Header" >> "maxPlayers")],
    ["UpdateButtons", ["Mitmachen", "https://www.tacticalteam.de/mitmachen", "Discord", "https://discord.tacticalteam.de"]]
] call (missionNamespace getVariable ["discordrichpresence_fnc_update", {}]);