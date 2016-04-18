if (!NSS_AC_Player_Captive) then 
{
	NSS_AC_Player_Captive = true; 
	player setCaptive true; 
	hint "AI will stop attacking you.";
	
	_log = format ["NSS_AC_Log: (%1, %2) enabled (No target)", name player, getplayerUID player];

	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
}
else
{
	NSS_AC_Player_Captive = false; 
	player setCaptive false; 
	hint "AI will start attacking you again.";
	
	_log = format ["NSS_AC_Log: (%1, %2) disabled (No target)", name player, getplayerUID player];

	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
};