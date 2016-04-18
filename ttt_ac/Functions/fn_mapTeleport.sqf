if (!NSS_AC_Player_mapTeleport) then 
{
	NSS_AC_Player_mapTeleport = true; 
	
	onMapSingleClick 
	'
		vehicle player setPos _pos; 

		_log = format ["NSS_AC_Log: (%1, %2) teleported to position %3", name player, getplayerUID player, _pos];
		null = [_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
	';
	hint "Map teleport enabled";
}
else 
{
	NSS_AC_Player_mapTeleport = false; 
	onMapSingleClick ""; 
	hint "Map teleport disabled";
};