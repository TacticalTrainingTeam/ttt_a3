//NSS_Admin_Console by MAD T, NSS-Gamers.com

[] spawn
{

waitUntil {time > 2};

NSS_AC_Init = true;
NSS_AC_variableMonitorRunning = false;
NSS_AC_variablesString = "";
NSS_AC_variableMonitorIDC = [[1401, 1402], [1403, 1404], [1405, 1406], [1407, 1408]];
NSS_AC_Player_mapTeleport = false;
NSS_AC_Player_godMode = false;
NSS_AC_Player_Invisible = false;
NSS_AC_Player_Captive = false;
NSS_AC_camActive = false;
NSS_AC_camTarget = "";
NSS_AC_observeredCount = 0;
NSS_AC_tempVar = "";
NSS_AC_loggedIn = false;

NSS_AC_adminVarName = vehicleVarName player;

if (NSS_AC_adminVarName == "" or isNil "NSS_AC_adminVarName") then
{
	NSS_AC_adminVarName = format ["NSS_AC_Admin_%1", getPlayerUID player];
	player SetVehicleVarName NSS_AC_adminVarName;
	player Call Compile Format ["%1=_This; PublicVariable ""%1""", NSS_AC_adminVarName];
};

NSS_AC_savedCode = profileNameSpace getVariable "NSS_AC_savedCode";

if (isNil "NSS_AC_savedCode") then
{
	NSS_AC_savedCode = [];
};

NSS_AC_savedVariables = profileNameSpace getVariable "NSS_AC_savedVariables";

if (isNil "NSS_AC_savedVariables") then
{
	NSS_AC_savedVariables = ["", "", "", ""];
};

NSS_AC_savedInterval = profileNameSpace getVariable "NSS_AC_savedInterval";

if (isNil "NSS_AC_savedInterval") then
{
	NSS_AC_savedInterval = 100
};

NSS_AC_keyPressed = 
{
	private ["_key","_shift","_ctrl","_alt"];
	if (dialog) exitWith {false};

	_key = _this select 1;
	_shift = _this select 2;
	_ctrl = _this select 3;
	_alt = _this select 4;

	if (not (_key == 59 && _shift && !_ctrl && !_alt)) exitWith {false};

	closeDialog 0;
	[] spawn NSS_AC_openMain;
	true
};

[] spawn 
{
	waitUntil {sleep 0.5; !isNull (findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call NSS_AC_keyPressed"];
};

NSS_AC_openMain =
{
	if (getPlayerUID player == "76561197999852928" || getPlayerUID player == "76561198016851722" || getPlayerUID player == "_SP_PLAYER_") then
	{
		NSS_AC_loggedIn = true;
	};

	if (!NSS_AC_loggedIn) exitWith
	{
	};

	_k = createDialog "NSS_AC_Main";

	ctrlSetText [1000, "NSS Admin Console v1.6"];
	ctrlSetText [1600, "Spectator"];
	ctrlSetText [1601, "Free cam"];
	ctrlSetText [1602, "Execute code"];
	ctrlSetText [1603, "!!! END MISSION !!!"];
	ctrlSetText [1604, "Map teleport"];
	ctrlSetText [1605, "X"];
	ctrlSetText [1606, "Invulnerability"];
	ctrlSetText [1607, "Invisibility"];
	ctrlSetText [1608, "No target"];
	ctrlSetText [1609, "Virtual Arsenal"];
	ctrlSetText [1610, "Dummy"];

	buttonSetAction [1600, "closeDialog 0; [] spawn NSS_AC_openSpectator"];
	buttonSetAction [1601, "closeDialog 0; [] spawn NSS_AC_freeCam"];
	buttonSetAction [1602, "closeDialog 0; [] spawn NSS_AC_openCode"];
	buttonSetAction [1603, "[] spawn NSS_AC_execScript"];
	buttonSetAction [1604, "[] spawn NSS_AC_mapTeleport"];
	buttonSetAction [1605, "closeDialog 0"];
	buttonSetAction [1606, "[] spawn NSS_AC_godMode"];
	buttonSetAction [1607, "[] spawn NSS_AC_Invisible"];
	buttonSetAction [1608, "[] spawn NSS_AC_setCaptive"];
	buttonSetAction [1609, "[] spawn NSS_AC_openVAS"];
	buttonSetAction [1610, "[] spawn NSS_AC_openVVS"];
};

NSS_AC_openCode =
{
	_k = createDialog "NSS_AC_Code";
	
	buttonSetAction [1600, '[] spawn NSS_AC_execCodeServer'];
	buttonSetAction [1601, '[] spawn NSS_AC_execCodeGlobal'];
	buttonSetAction [1602, '[] spawn NSS_AC_execCodeLocal'];
	buttonSetAction [1603, '[] spawn NSS_AC_execCodePlayer'];
	buttonSetAction [1604, "closeDialog 0; NSS_AC_variableMonitorRunning = false;"];
	buttonSetAction [1605, "closeDialog 0; NSS_AC_variableMonitorRunning = false; [] spawn NSS_AC_openMain"];
	buttonSetAction [1606, "[] spawn NSS_AC_saveCode"];
	buttonSetAction [1607, "[] spawn NSS_AC_loadCode"];
	buttonSetAction [1608, "[] spawn NSS_AC_deleteCode"];
	buttonSetAction [1613, "[] spawn NSS_AC_clearCode"];
	buttonSetAction [1614, "[] spawn NSS_AC_variableMonitorStart"];
	buttonSetAction [1615, "NSS_AC_variableMonitorRunning = false;"];

	buttonSetAction [1609, "if (isMultiplayer and !(isServer)) then {hint ""To clipboard only works in singleplayer or locally hosted multiplayer game due to command restriction""}; copyToClipboard (ctrlText 1402)"];
	buttonSetAction [1610, "if (isMultiplayer and !(isServer)) then {hint ""To clipboard only works in singleplayer or locally hosted multiplayer game due to command restriction""}; copyToClipboard (ctrlText 1404)"];
	buttonSetAction [1611, "if (isMultiplayer and !(isServer)) then {hint ""To clipboard only works in singleplayer or locally hosted multiplayer game due to command restriction""}; copyToClipboard (ctrlText 1406)"];
	buttonSetAction [1612, "if (isMultiplayer and !(isServer)) then {hint ""To clipboard only works in singleplayer or locally hosted multiplayer game due to command restriction""}; copyToClipboard (ctrlText 1408)"];

	{
		if (isPlayer _x and (_x != player)) then
		{
			_index = lbAdd [2100, (name _x)];
			lbSetData [2100, _index, getPlayerUID _x];
		};
	} forEach playableUnits;
	
	lbSetCurSel [2100, 0];
	
	{
		_index = lbAdd [2101, _x];
		lbSetData [2101, _index, _x];
	} forEach NSS_AC_savedCode;

	lbSetCurSel [2101, 0];
	
	{
		ctrlSetText [((NSS_AC_variableMonitorIDC select _forEachIndex) select 0), _x];
	} forEach NSS_AC_savedVariables;
	
	ctrlSetText [1409, str NSS_AC_savedInterval];
};

NSS_AC_variableMonitorStart =
{
	NSS_AC_variableMonitorRunning = true;

	{
		_var = ctrlText (_x select 0);

		if (_var != "") then
		{
			NSS_AC_savedVariables set [_forEachIndex, _var];
		}
		else
		{
			NSS_AC_savedVariables set [_forEachIndex, ""];
		};
	} forEach NSS_AC_variableMonitorIDC;
	
	profileNameSpace setVariable ["NSS_AC_savedVariables", NSS_AC_savedVariables];

	_log = format ["NSS_AC_Log: %1 started the variable monitor, variables: ", name player] + str NSS_AC_savedVariables;
	[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	
	NSS_AC_variableMonitorStarTime = time;
	_startTime = NSS_AC_variableMonitorStarTime;
	
	_interval = parseNumber (ctrlText 1409);
	
	if (_interval <= 0) then
	{
		NSS_AC_savedInterval = _interval;
		_interval = 0.1;
	}
	else
	{
		NSS_AC_savedInterval = _interval;
		_interval = _interval / 1000;
	};

	profileNameSpace setVariable ["NSS_AC_savedInterval", NSS_AC_savedInterval];
	saveProfileNameSpace;

	while {dialog and NSS_AC_variableMonitorRunning and (NSS_AC_variableMonitorStarTime == _startTime)} do
	{
		{
			_var = NSS_AC_savedVariables select _forEachIndex;
			_idc = _x select 1;

			if (_var != "") then
			{
				_var = str (call compile _var);
				
				if (!isNil "_var") then
				{
					ctrlSetText [_idc, _var];
				};
			}
			else
			{
				ctrlSetText [_idc, ""];
			};
		} forEach NSS_AC_variableMonitorIDC;

		sleep _interval;
	};
};

NSS_AC_openSpectator =
{
	_k = createDialog "NSS_AC_Spectator";
	
	buttonSetAction [1600, 'closeDialog 0; NSS_AC_camActive = false'];
	buttonSetAction [1601, 'closeDialog 0; NSS_AC_camActive = false; [] spawn NSS_AC_openMain'];
	buttonSetAction [1602, '"Internal" spawn NSS_AC_switchCamView'];
	buttonSetAction [1603, '"External" spawn NSS_AC_switchCamView'];
	buttonSetAction [1604, '"Free" spawn NSS_AC_switchCamView'];
	buttonSetAction [1605, '[] spawn NSS_AC_teleportToPlayer'];
	buttonSetAction [1606, 'hint "Not yet implemented"'];

	_players = playableUnits;
	{
		if (isPlayer _x and (_x != player)) then
		{
			_varName = vehicleVarName _x;

			if (_varName == "" or isNil "_varName") then
			{
				_varName = format ["NSS_AC_Observed_%1", NSS_AC_observeredCount];
				_x SetVehicleVarName _varName;
				_x Call Compile Format ["%1=_This;", _varName];
			};
			NSS_AC_observeredCount = NSS_AC_observeredCount + 1;

			_index = lbAdd [2100, (name _x)];
			lbSetData [2100, _index, _varName];
		};
	} forEach _players;
	
	lbSetCurSel [2100, 0];
};

NSS_AC_Commands =
{
	_k = createDialog "NSS_AC_Commands";
};

NSS_AC_freeCam =
{
	[] execVM "a3\functions_f\Debug\fn_camera.sqf";
	
	_log = format ["NSS_AC_Log: %1 started free cam mode", name player];
	
	[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_execScript =
{
	//hint "Script executed";
	
	[] execVM "\ttt_a3\ttt_nss\script.sqf";
	
	_script = preprocessFileLineNumbers "\ttt_a3\ttt_nss\script.sqf";

	[[_script, name player, "script:"],"NSS_AC_codeLogger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_execCodeServer =
{
	_code = ctrlText 1400;
	
	hint "Code executed: on server";
	
	[_code,"NSS_AC_Execute",false,false] spawn BIS_fnc_MP;
	[[_code, name player, "code on server:"],"NSS_AC_codeLogger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_execCodeGlobal =
{
	_code = ctrlText 1400;
	
	hint "Code executed: globally";

	[_code,"NSS_AC_Execute",true,false] spawn BIS_fnc_MP;
	[[_code, name player, "code globally:"],"NSS_AC_codeLogger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_execCodePlayer =
{
	_index = lbCurSel 2100;
	_uid = lbData [2100, _index];
	_code = ctrlText 1400;
	
	hint "Code executed: on player";
	
	_code = format ["if (getPlayerUID player == ""%1"") then {", _uid] + (_code) + "}";
	
	[_code,"NSS_AC_Execute",true,false] spawn BIS_fnc_MP;
	[[_code, name player, "code on player:"],"NSS_AC_codeLogger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_execCodeLocal =
{
	hint "Code executed: locally";
	
	_code = ctrlText 1400;
	call compile _code;

	[[_code, name player, "code locally:"],"NSS_AC_codeLogger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_codeLogger =
{
	_code = _this select 0;
	_caller = _this select 1;
	_kind = _this select 2;

	_log = format ["NSS_AC_Log: %1 executed %2 ", _caller, _kind];
	diag_Log (_log + (str _code));
};

NSS_AC_Logger =
{
	diag_Log _this;
};

NSS_AC_Invisible =
{
	//Call Compile Format ["PublicVariable ""%1""", NSS_AC_adminVarName];

	if (!NSS_AC_Player_Invisible) then 
	{
		NSS_AC_Player_Invisible = true;
		
		_code = compile format ["%1 hideObjectGlobal true", NSS_AC_adminVarName];
		[_code,"NSS_AC_Execute",false,false] spawn BIS_fnc_MP;
		
		//call compile format ['[{%1 hideObject true},"BIS_fnc_spawn", true, false] spawn BIS_fnc_MP;', vehicle player];
		hint "Invisibility enabled";
		
		_log = format ["NSS_AC_Log: %1 set himself invisible", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	}
	else 
	{
		NSS_AC_Player_Invisible = false;
		
		_code = compile format ["%1 hideObjectGlobal false", NSS_AC_adminVarName];
		[_code,"NSS_AC_Execute",false,false] spawn BIS_fnc_MP;

		//call compile format ['[{%1 hideObject false},"BIS_fnc_spawn", true, false] spawn BIS_fnc_MP;', vehicle player];
		hint "Invisibility disabled";
		
		_log = format ["NSS_AC_Log: %1 set himself visible", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	};
};

NSS_AC_mapTeleport =
{
	if (!NSS_AC_Player_mapTeleport) then 
	{
		NSS_AC_Player_mapTeleport = true; 
		
		onMapSingleClick "vehicle player setPos _pos; null = _pos spawn NSS_AC_mapTeleportLog";
		hint "Map teleport enabled";
		
		_log = format ["NSS_AC_Log: %1 enabled map teleport", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	}
	else 
	{
		NSS_AC_Player_mapTeleport = false; 
		onMapSingleClick ""; 
		hint "Map teleport disabled";
		
		_log = format ["NSS_AC_Log: %1 disabled map teleport", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	};
};

NSS_AC_mapTeleportLog =
{
	_pos = _this;
	
	_log = format ["NSS_AC_Log: %1 teleported to %2", name player, _pos];
	
	[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_godMode =
{
	if (!NSS_AC_Player_godMode) then 
	{
		NSS_AC_Player_godMode = true; 
		player allowDamage false; 
		hint "Invulnerability enabled";
		
		_log = format ["NSS_AC_Log: %1 enabled Invulnerability", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	}
	else 
	{
		NSS_AC_Player_godMode = false; 
		player allowDamage true; 
		hint "Invulnerability disabled";
		
		_log = format ["NSS_AC_Log: %1 disabled Invulnerability", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	};
};

NSS_AC_loadCode =
{
	_index = lbCurSel 2101;
	_code = lbData [2101, _index];
	ctrlSetText [1400, _code];
};

NSS_AC_saveCode =
{
	_code = ctrlText 1400;
	
	NSS_AC_savedCode = NSS_AC_savedCode + [_code];

	lbClear 2101;
	{
		_index = lbAdd [2101, _x];
		lbSetData [2101, _index, _x];
	} forEach NSS_AC_savedCode;
	
	profileNameSpace setVariable ["NSS_AC_savedCode", NSS_AC_savedCode];
	saveProfileNameSpace;
};

NSS_AC_deleteCode =
{
	_index = lbCurSel 2101;

	NSS_AC_savedCode set [_index, "delete"];
	NSS_AC_savedCode = NSS_AC_savedCode - ["delete"];

	lbClear 2101;
	{
		_index = lbAdd [2101, _x];
		lbSetData [2101, _index, _x];
	} forEach NSS_AC_savedCode;
	
	profileNameSpace setVariable ["NSS_AC_savedCode", NSS_AC_savedCode];
	saveProfileNameSpace;
};

NSS_AC_clearCode =
{
	ctrlSetText [1400, ""];
};

NSS_AC_switchCamView =
{
	_index = lbCurSel 2100;
	_unit = lbData [2100, _index];
	_view = _this;
	
	if (_unit == "") exitWith {hint "Error: No unit selected"};
	
	NSS_AC_camTarget = call compile _unit;
	
	if (isNull NSS_AC_camTarget) exitWith 
	{
		hint "Error: Player is not available for spectating";
		vehicle player switchCamera "Internal";
	};
	
	if (_view == "Free") exitWith 
	{
		closeDialog 0;
		NSS_AC_camTarget exec "camera.sqs";
		hint "Exit the Free Lock mode by switching weapon optic";
	};
	
	if (!NSS_AC_camActive) then
	{
		NSS_AC_camActive = true;

		vehicle NSS_AC_camTarget switchCamera _view;
	
		_log = format ["NSS_AC_Log: %1 is spectating %2", name player, name NSS_AC_camTarget];
		
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;

		waitUntil {(!dialog) or (isNull NSS_AC_camTarget) or (!NSS_AC_camActive)};

		NSS_AC_camActive = false;

		vehicle player switchCamera "Internal";
		
		_log = format ["NSS_AC_Log: %1 stopped spectating %2", name player, name NSS_AC_camTarget];
		
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	}
	else
	{
		vehicle NSS_AC_camTarget switchCamera _view;
	
		_log = format ["NSS_AC_Log: %1 is spectating %2", name player, name NSS_AC_camTarget];
		
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	};
};

NSS_AC_teleportToPlayer =
{
	_index = lbCurSel 2100;
	_unit = lbData [2100, _index];
	
	if (_unit == "") exitWith {hint "Error: No unit selected"};
	
	_unit = call compile _unit;
	
	if (isNull _unit) exitWith {hint "Error: Player is not available for teleporting"};

	player setPos getPos _unit;
	
	_log = format ["NSS_AC_Log: %1 teleported to %2", name player, name _unit];
	
	[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;

	closeDialog 0;
};

NSS_AC_setCaptive =
{
	if (!NSS_AC_Player_Captive) then 
	{
		NSS_AC_Player_Captive = true; 
		player setCaptive true; 
		hint "AI will stop attacking you.";
		
		_log = format ["NSS_AC_Log: %1 enabled (No target)", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	}
	else
	{
		NSS_AC_Player_Captive = false; 
		player setCaptive false; 
		hint "AI will start attacking you again.";
		
		_log = format ["NSS_AC_Log: %1 disabled (No target)", name player];
	
		[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
	};
};

NSS_AC_openVAS =
{
	closeDialog 0;
	
	["Open",true] spawn BIS_fnc_arsenal;
	
	_log = format ["%1 opened VAS", name player];
	
	[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_openVVS =
{
	
};

/*
_nss_ac_execute = 
{
	if !(isServer) exitWith {};
	
	call 
	{
		if (isNil "NSS_AC_Execute_Init") then
		{
			NSS_AC_Execute_Init = true;
			
			_code =
			{
				NSS_AC_Execute =
				{
					call compile _this
				};
			};
			[_code,"BIS_fnc_spawn",true,true] spawn BIS_fnc_MP;
		};
		true
	};
};

[_nss_ac_execute,"BIS_fnc_spawn",false,false] spawn BIS_fnc_MP;
*/

//waitUntil {!isNil "VAS_fnc_mainInit"};
//[] spawn VAS_fnc_mainInit;

//Init console functions on server

NSS_AC_Execute =
{
	call compile _this
};

publicVariable "NSS_AC_Execute";

//Server side logging
publicVariableServer "NSS_AC_codeLogger";
publicVariableServer "NSS_AC_Logger";

//Last statements

_log = format ["NSS_AC_Log: %1 entered the game with the NSS Admin Console V1.6", name player];

[_log,"NSS_AC_Logger",false,false] spawn BIS_fnc_MP;

};