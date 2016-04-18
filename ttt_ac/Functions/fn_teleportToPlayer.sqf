_index = lbCurSel 2100;
_unit = lbData [2100, _index];

if (_unit == "") exitWith {hint "Error: No unit selected"};

_unit = call compile _unit;

if (isNull _unit) exitWith {hint "Error: Player is not available for teleporting"};

player setPos getPos _unit;

_log = format ["NSS_AC_Log: (%1, %2) teleported to %3", name player, getplayerUID player, name _unit];

[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;

closeDialog 0;