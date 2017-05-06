//if (isServer or (serverCommandAvailable "#exec")) then
if (isServer or (serverCommandAvailable "#monitor") or getPlayerUID player == "76561197999852928" || getPlayerUID player == "76561197995302668" || getPlayerUID player == "76561198015966826" || getPlayerUID player == "_SP_PLAYER_") then
{
	NSS_AC_loggedIn = true;
};

if (!NSS_AC_loggedIn) exitWith
{
	//hint "You must log in as admin once to be able to use the NSS Admin Console";
};

_k = createDialog "NSS_AC_Main";

/*
ctrlSetText [1000, "NSS Admin Console"];
ctrlSetText [1600, "X"];
ctrlSetText [1601, "Spectator"];
ctrlSetText [1602, "Free cam"];
ctrlSetText [1603, "Execute code"];
ctrlSetText [1604, "Execute script"];
ctrlSetText [1605, "Map teleport"];
ctrlSetText [1606, "Invulnerability"];
ctrlSetText [1607, "No target"];
ctrlSetText [1608, "Arsenal"];
ctrlSetText [1609, "Zeus"];
ctrlSetText [1610, "Functions"];
ctrlSetText [1611, "Configs"];
ctrlSetText [1612, "Animations"];
ctrlSetText [1613, "GUI Editor"];
ctrlSetText [1614, "----"];

*/

buttonSetAction [1600, "closeDialog 0"];
buttonSetAction [1601, "closeDialog 0; [] spawn NSS_AC_fnc_openSpectator;"];
buttonSetAction [1602, "closeDialog 0; [] spawn NSS_AC_fnc_freeCam"];
buttonSetAction [1603, "closeDialog 0; [] spawn NSS_AC_fnc_openCode"];
buttonSetAction [1604, "[] spawn NSS_AC_fnc_execScript"];
buttonSetAction [1605, "[] spawn NSS_AC_fnc_mapTeleport"];
buttonSetAction [1606, "[] spawn NSS_AC_fnc_Invulnerability"];
buttonSetAction [1607, "[] spawn NSS_AC_fnc_setCaptive"];
buttonSetAction [1608, "closeDialog 0; [""Open"",true] spawn BIS_fnc_arsenal"];
buttonSetAction [1609, "closeDialog 0; call NSS_AC_fnc_curatorOpen"];
buttonSetAction [1610, "closeDialog 0; [] spawn NSS_AC_fnc_openFunctionsViewer"];
buttonSetAction [1611, "closeDialog 0; [] spawn NSS_AC_fnc_openConfigsViewer"];
buttonSetAction [1612, "closeDialog 0; [] spawn (uinamespace getvariable 'bis_fnc_animViewer')"];
buttonSetAction [1613, "closeDialog 0; [] spawn bis_fnc_guiEditor"];
buttonSetAction [1614, ""];