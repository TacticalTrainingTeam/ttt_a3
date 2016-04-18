if (!NSS_AC_curatorCurrentlySaving) then
{
	NSS_AC_curatorCurrentlySaving = true;
	NSS_AC_curatorToSaveObjectsString = "";
	
	[[[0,0,0], 1000000, true, player],"NSS_AC_fnc_curatorGetobjects",false,false] spawn BIS_fnc_MP;
}
else
{
	systemChat "NSS Admin Console: Still saving curator creation";
};