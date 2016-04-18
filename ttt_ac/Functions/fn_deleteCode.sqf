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