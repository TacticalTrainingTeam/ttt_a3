//NSS Admin Console by MAD T

[] spawn
{
waitUntil {time > 2};

NSS_AC_Init = true;
NSS_AC_variableMonitorRunning = false;
NSS_AC_variablesString = "";
NSS_AC_variableMonitorIDC = [[1401, 1402], [1403, 1404], [1405, 1406], [1407, 1408]];
NSS_AC_spectatorPlayers = [];
NSS_AC_Player_mapTeleport = false;
NSS_AC_Player_godMode = false;
NSS_AC_Player_Captive = false;
NSS_AC_camActive = false;
NSS_AC_camTarget = "";
NSS_AC_observeredCount = 0;
NSS_AC_tempVar = "";
NSS_AC_loggedIn = false;
NSS_AC_toClipboardFailMessage = "NSS Admin Console: Exporting to clipboard only works in singleplayer or locally hosted multiplayer game due to command restrictions";
NSS_AC_adminVarName = vehicleVarName player;
NSS_AC_curatorInitDone = false;
NSS_AC_curatorAllowed = false;
NSS_AC_curatorModules = [];
NSS_AC_curatorCurrentlySaving = false;

if (!isDedicated) then
{
	NSS_AC_savedCode = profileNameSpace getVariable ["NSS_AC_savedCode", []];
	NSS_AC_savedVariables = profileNameSpace getVariable ["NSS_AC_savedVariables", ["", "", "", ""]];
	NSS_AC_savedInterval = profileNameSpace getVariable ["NSS_AC_savedInterval", 100];
	NSS_AC_curatorSavedCreations = profileNameSpace getVariable ["NSS_AC_curatorSavedCreations", []];
};

if (NSS_AC_adminVarName == "" or isNil "NSS_AC_adminVarName") then
{
	NSS_AC_adminVarName = format ["NSS_AC_Admin_%1", getPlayerUID player];
	player SetVehicleVarName NSS_AC_adminVarName;
	player Call Compile Format ["%1=_this; PublicVariable ""%1""", NSS_AC_adminVarName];
	
	
};

[[player, (vehicleVarName player)], "NSS_AC_fnc_setVehicleVarName", false, false] spawn BIS_fnc_MP;

if (isServer) then
{
	NSS_AC_Group_Server = createCenter sideLogic;
	NSS_AC_Group_Server = createGroup sideLogic;

	NSS_AC_Curator_Server = NSS_AC_Group_Server createUnit ["ModuleCurator_F",[0,0,0],[],0,"NONE"];
	NSS_AC_Curator_Server setVehicleVarname "NSS_AC_Curator_Server";

	NSS_AC_Curator_Server setVariable ["Owner", ""];
	NSS_AC_Curator_Server setVariable ["Name", ""];
	NSS_AC_Curator_Server setVariable ["Addons", 2];
	NSS_AC_Curator_Server setVariable ["Forced", 0];
	
	NSS_AC_curatorModules = NSS_AC_curatorModules + [NSS_AC_Curator_Server];
};

[] spawn 
{
	waitUntil {sleep 0.5; !isNull (findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call NSS_AC_fnc_keyPressed"];
};

publicVariable "NSS_AC_fnc_Execute";

//Last statements

systemChat "NSS Admin Console initialized. Press Shift + F1 to open the main menu.";

_log = format ["NSS_AC_Log: (%1, %2) entered the game with the NSS Admin Console", name player, getplayerUID player];

[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;

};