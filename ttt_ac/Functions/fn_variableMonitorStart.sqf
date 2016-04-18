NSS_AC_variableMonitorRunning = true;
systemChat "NSS Variable Monitor started";

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

if (isMultiplayer and !isServer) then
{
	_log = format ["NSS_AC_Log: (%1, %2) started the variable monitor, variables: ", name player, getplayerUID player] + str NSS_AC_savedVariables;
	[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;
};

NSS_AC_variableMonitorStarTime = time;
_startTime = NSS_AC_variableMonitorStarTime;

_interval = parseNumber (ctrlText 1409);

if (NSS_AC_savedInterval != _interval) then
{
	profileNameSpace setVariable ["NSS_AC_savedInterval", NSS_AC_savedInterval];
	saveProfileNameSpace;
};

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

while {NSS_AC_variableMonitorRunning and (NSS_AC_variableMonitorStarTime == _startTime)} do
{
	if (!isNull findDisplay 552266) then
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
	}
	else
	{
		_hint = "---- NSS AC Variable Monitor ----";

		{
			_var = _x;
			
			if (_var != "") then
			{
				_var = str (call compile _var);
				
				if (!isNil "_var") then
				{
					_hint = _hint + format ["\n\n%1 =\n\n%2", _x, _var];
				};
			};
		} forEach NSS_AC_savedVariables;
		
		hintSilent _hint;
	};

	sleep _interval;
};