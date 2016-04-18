_k = createDialog "NSS_AC_Spectator";

buttonSetAction [1600, 'closeDialog 0; NSS_AC_camActive = false'];
buttonSetAction [1601, 'closeDialog 0; NSS_AC_camActive = false; [] spawn NSS_AC_fnc_openMain'];
buttonSetAction [1602, '"Internal" spawn NSS_AC_fnc_switchSpectatorView'];
buttonSetAction [1603, '"External" spawn NSS_AC_fnc_switchSpectatorView'];
buttonSetAction [1604, '"Free" spawn NSS_AC_fnc_switchSpectatorView'];
buttonSetAction [1605, '[] spawn NSS_AC_fnc_teleportToPlayer'];
buttonSetAction [1606, 'hint "Not yet implemented"'];

NSS_AC_spectatorPlayers = playableUnits;
{
	if (isPlayer _x and (_x != player)) then
	{
		_uid = getPlayerUID _x;
		_index = lbAdd [2100, (name _x)];
		lbSetData [2100, _index, _uid];
	};
} forEach NSS_AC_spectatorPlayers;

lbSetCurSel [2100, 0];