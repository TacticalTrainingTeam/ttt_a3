_k = createDialog "NSS_AC_Code";

buttonSetAction [1600, '[] spawn NSS_AC_fnc_execCodeServer'];
buttonSetAction [1601, '[] spawn NSS_AC_fnc_execCodeGlobal'];
buttonSetAction [1602, '[] spawn NSS_AC_fnc_execCodeLocal'];
buttonSetAction [1603, '[] spawn NSS_AC_fnc_execCodePlayer'];
buttonSetAction [1604, "closeDialog 0"];
buttonSetAction [1605, "closeDialog 0; [] spawn NSS_AC_fnc_openMain"];
buttonSetAction [1606, "[] spawn NSS_AC_fnc_saveCode"];
buttonSetAction [1607, "[] spawn NSS_AC_fnc_loadCode"];
buttonSetAction [1608, "[] spawn NSS_AC_fnc_deleteCode"];
buttonSetAction [1613, "ctrlSetText [1400, """"]"];
buttonSetAction [1614, "[] spawn NSS_AC_fnc_variableMonitorStart"];
buttonSetAction [1615, "NSS_AC_variableMonitorRunning = false; systemChat ""NSS Variable Monitor stopped"""];

buttonSetAction [1609, "if (isMultiplayer and !(isServer)) then {hint NSS_AC_toClipboardFailMessage}; copyToClipboard (ctrlText 1402)"];
buttonSetAction [1610, "if (isMultiplayer and !(isServer)) then {hint NSS_AC_toClipboardFailMessage}; copyToClipboard (ctrlText 1404)"];
buttonSetAction [1611, "if (isMultiplayer and !(isServer)) then {hint NSS_AC_toClipboardFailMessage}; copyToClipboard (ctrlText 1406)"];
buttonSetAction [1612, "if (isMultiplayer and !(isServer)) then {hint NSS_AC_toClipboardFailMessage}; copyToClipboard (ctrlText 1408)"];

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