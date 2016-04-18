_player = _this;
_uid = getPlayerUID _player;
_playerVarName = vehicleVarName _player;
_playerString = format ["NSS_AC_Admin_%1", _uid];
_playerCuratorModule = format ["NSS_AC_Curator_%1", _uid];

if !(_playerVarName == _playerString) then
{
	_playerString = _playerVarName;
};

if (isNil _playerCuratorModule) then 
{
	call compile format 
	['
		NSS_AC_Group_%1 = createCenter sideLogic;
		NSS_AC_Group_%1 = createGroup sideLogic;

		NSS_AC_Curator_%1 = NSS_AC_Group_%1 createUnit ["ModuleCurator_F",[0,0,0],[],0,"NONE"];
		NSS_AC_Curator_%1 setVehicleVarname "NSS_AC_Curator_%1";

		NSS_AC_Curator_%1 setVariable ["Owner", ""];
		NSS_AC_Curator_%1 setVariable ["Name", ""];
		NSS_AC_Curator_%1 setVariable ["Addons", 2];
		NSS_AC_Curator_%1 setVariable ["Forced", 0];
		
		NSS_AC_Curator_%1 synchronizeObjectsAdd [%2];
		%2 assignCurator NSS_AC_Curator_%1;
		
		NSS_AC_Curator_%1 addEventHandler ["CuratorObjectPlaced", "[_this select 1] call NSS_AC_fnc_curatorAddObjectstToModule"];
		
		NSS_AC_curatorModules = NSS_AC_curatorModules + [NSS_AC_Curator_%1];
		
		["","NSS_AC_fnc_curatorInitDone",%2,false] spawn BIS_fnc_MP;
	', _uid, _playerString];
}
else
{
	call compile format 
	['
		NSS_AC_Curator_%1 synchronizeObjectsAdd [%2];
		%2 assignCurator NSS_AC_Curator_%1;
		["","NSS_AC_fnc_curatorInitDone",%2,false] spawn BIS_fnc_MP;
	', _uid, _playerString];
};