_index = lbCurSel 2100;
_uid = lbData [2100, _index];
_code = ctrlText 1400;

hint "Code executed: on player";

_code = format ["if (getPlayerUID player == ""%1"") then {", _uid] + (_code) + "}";

[_code,"NSS_AC_fnc_Execute",true,false] spawn BIS_fnc_MP;

if (isMultiplayer and !isServer) then
{
	_log = format ["NSS_AC_Log: (%1, %2) executed code on a player: %3", name player, getplayerUID player, _code];
	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
};