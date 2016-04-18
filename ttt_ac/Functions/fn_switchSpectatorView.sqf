_index = lbCurSel 2100;
_uid = lbData [2100, _index];
_view = _this;

NSS_AC_camTarget = objNull;

{
	if (isPlayer _x) then
	{
		if (_uid == (getPlayerUID _x)) exitWith
		{
			NSS_AC_camTarget = _x;
		};
	};
} forEach NSS_AC_spectatorPlayers;

if (isNull NSS_AC_camTarget) exitWith 
{
	hint "Error: No player selected or player not available anymore";
	vehicle player switchCamera "Internal";
};

if (_view == "Free") exitWith 
{
	closeDialog 0;
	NSS_AC_camTarget exec "camera.sqs";
	systemChat "Exit the Free Lock mode by switching weapon optic";
};

if (!NSS_AC_camActive) then
{
	NSS_AC_camActive = true;

	vehicle NSS_AC_camTarget switchCamera _view;
	
	if (isMultiplayer and !isServer) then
	{
		_log = format ["NSS_AC_Log: (%1, %2) is spectating %3", name player, getplayerUID player, name NSS_AC_camTarget];
		[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
	};

	waitUntil {(!dialog) or (isNull NSS_AC_camTarget) or (!NSS_AC_camActive)};

	NSS_AC_camActive = false;

	vehicle player switchCamera "Internal";
	
	if (isMultiplayer and !isServer) then
	{
		_log = format ["NSS_AC_Log: (%1, %2) stopped spectating %3", name player, getplayerUID player, name NSS_AC_camTarget];
		[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
	};
}
else
{
	vehicle NSS_AC_camTarget switchCamera _view;
	
	if (isMultiplayer and !isServer) then
	{
		_log = format ["NSS_AC_Log: (%1, %2) is spectating %2", name player, getplayerUID player, name NSS_AC_camTarget];
		[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
	};
};