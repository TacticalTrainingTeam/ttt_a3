_index = lbCurSel 2100;
if (_index == -1) exitWith {};
_creation = NSS_AC_curatorSavedCreations select _index;
_name = _creation select 0;
_worldName = _creation select 1;
_load = _creation select 2;

_objects = [[0,0,0], 0, _load] call BIS_fnc_ObjectsMapper;

systemChat format ["NSS Admin Console: Curator creation (%1) loaded", _name];

if (isMultiplayer) then
{
	[_objects,"NSS_AC_fnc_curatorAddObjectstToModule",false,false] spawn BIS_fnc_MP;
}
else
{
	NSS_AC_Curator addCuratorEditableObjects [_objects, false];
};