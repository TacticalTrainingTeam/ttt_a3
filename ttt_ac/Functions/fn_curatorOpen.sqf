if (!NSS_AC_curatorInitDone) then
{
	closeDialog 0;
	
	createDialog "NSS_AC_confirmBox";
	
	ctrlSetText [1000, "NSS Admin Console // Create curator module"];
	ctrlSetText [1001, "This will create a curator module for the Zeus interface. If any curator is previously set in the mission or by scripts you will not be able to use that one. A new one will be created instead."];
	
	buttonSetAction [1600, "closeDialog 0; NSS_AC_curatorInitDone = true; call NSS_AC_fnc_curatorInit"];
	buttonSetAction [1601, "closeDialog 0"];
}
else
{
	waitUntil {NSS_AC_curatorAllowed};

	closeDialog 0; createDialog "NSS_AC_Curator";
	
	buttonSetAction [1600, "closeDialog 0"];
	buttonSetAction [1601, "closeDialog 0; call NSS_AC_fnc_openMain"];
	buttonSetAction [1602, "closeDialog 0; openCuratorInterface"];
	buttonSetAction [1603, "call NSS_AC_fnc_curatorLoad"];
	buttonSetAction [1604, "call NSS_AC_fnc_curatorSaveInit"];
	buttonSetAction [1605, "call NSS_AC_fnc_curatorDelete"];
	buttonSetAction [1606, "call NSS_AC_fnc_curatorExport"];
	
	{
		_index = lbAdd [2100, (_x select 0)];
		lbSetData [2100, _index, (_x select 0)];
	} forEach NSS_AC_curatorSavedCreations;

	lbSetCurSel [2100, 0];
	
	ctrlSetText [1400, "Enter name"];
};