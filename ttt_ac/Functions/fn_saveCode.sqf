_code = ctrlText 1400;

NSS_AC_savedCode = NSS_AC_savedCode + [_code];

lbClear 2101;
{
	_index = lbAdd [2101, _x];
	lbSetData [2101, _index, _x];
} forEach NSS_AC_savedCode;

profileNameSpace setVariable ["NSS_AC_savedCode", NSS_AC_savedCode];
saveProfileNameSpace;