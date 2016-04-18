_code = ctrlText 1400;

hint "Code executed: globally";

[_code,"NSS_AC_fnc_Execute",true,false] spawn BIS_fnc_MP;

if (isMultiplayer and !isServer) then
{
	_log = format ["NSS_AC_Log: (%1, %2) executed code globally: %3", name player, getplayerUID player, _code];
	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
};