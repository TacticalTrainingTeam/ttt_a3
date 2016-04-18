_save = call compile (_this);
_worldName = worldName;
_name = ctrlText 1400;

if (_save isEqualTo []) exitWith {NSS_AC_curatorCurrentlySaving = false;};

NSS_AC_curatorSavedCreations = NSS_AC_curatorSavedCreations + [[_name, _worldName, _save]];

profileNameSpace setVariable ["NSS_AC_curatorSavedCreations", NSS_AC_curatorSavedCreations];
saveProfileNameSpace;

lbClear 2100;

{
	_index = lbAdd [2100, (_x select 0)];
	lbSetData [2100, _index, (_x select 0)];
} forEach NSS_AC_curatorSavedCreations;

lbSetCurSel [2100, 0];

systemChat format ["NSS Admin Console: Curator creation (%1) saved", _name];

NSS_AC_curatorCurrentlySaving = false;