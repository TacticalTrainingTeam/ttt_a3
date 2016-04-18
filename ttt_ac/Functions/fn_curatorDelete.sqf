_index = lbCurSel 2100;

NSS_AC_curatorSavedCreations set [_index, "delete"];
NSS_AC_curatorSavedCreations = NSS_AC_curatorSavedCreations - ["delete"];

lbClear 2100;

{
	_index = lbAdd [2100, (_x select 0)];
	lbSetData [2100, _index, (_x select 0)];
} forEach NSS_AC_curatorSavedCreations;

lbSetCurSel [2100, 0];

profileNameSpace setVariable ["NSS_AC_curatorSavedCreations", NSS_AC_curatorSavedCreations];
saveProfileNameSpace;