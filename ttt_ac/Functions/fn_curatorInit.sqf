if (!isMultiplayer) then
{
	call NSS_AC_fnc_curatorCreateModuleSP;
}
else
{
	if (!isServer) then
	{
		[player,"NSS_AC_fnc_curatorCreateModuleMP",false,false] spawn BIS_fnc_MP;
	}
	else
	{
		if (hasInterface) then
		{
			player call NSS_AC_fnc_curatorCreateModuleMP;
		};
	};
};