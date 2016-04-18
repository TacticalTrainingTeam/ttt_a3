hint "Code executed: locally";

_code = ctrlText 1400;

call compile _code;

if (isMultiplayer and !isServer) then
{
	_log = format ["NSS_AC_Log: (%1, %2) executed code locally: %3", name player, getplayerUID player, _code];
	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
};