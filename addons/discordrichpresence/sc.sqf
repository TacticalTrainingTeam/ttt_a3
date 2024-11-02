sleep 10;

[
    ["UpdateDetails",missionNameSource],
    ["UpdateState",TTTname],
    ["UpdateLargeImageKey","ttt_logo"],
    ["UpdatePartySize",count playableUnits],
    ["UpdatePartyMax",getNumber(missionConfigFile >> "Header" >> "maxPlayers")],
    ["UpdateButtons",["Mitmachen","https://www.tacticalteam.de/mitmachen","Discord","https://discord.tacticalteam.de"]]
] call (missionNameSpace getVariable ["discordrichpresence_fnc_update",{}]);
