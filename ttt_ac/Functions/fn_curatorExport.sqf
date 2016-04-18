if (isMultiplayer and !(isServer)) then {hint NSS_AC_toClipboardFailMessage}; copyToClipboard (ctrlText 1408);

_index = lbCurSel 2100;
_creation = NSS_AC_curatorSavedCreations select _index;
_name = _creation select 0;
_load = (_creation select 2);
_loadstring = "[";
_br = toString [13,10];
_loadCount = ((count _load) - 1);
_importFnc = "[[0,0,0], 0, _load] call BIS_fnc_ObjectsMapper;";

{
	_loadstring = _loadstring + (str _x);
	
	if (_loadCount != _forEachIndex) then
	{
		_loadstring = _loadstring + ","+ _br;
	}
	else
	{
		_loadstring = _loadstring + "];" + _br + _br + _importFnc;
	};
} forEach _load;

copyToClipboard ("_creation = " + _loadstring);

systemChat format ["NSS Admin Console: Curator creation (%1) exported to the clipboard", _name];


