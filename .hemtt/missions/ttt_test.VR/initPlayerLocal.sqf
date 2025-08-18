private _insignia = selectRandom ["TTT_Silver_emblem", "TTT_White_emblem", "TTT_Black_emblem", "TTT_Blue_emblem"];
[player, _insignia] spawn {
	params ["_unit", "_insignia"];
	sleep 1;
	isNil {
		_unit setVariable ["BIS_fnc_setUnitInsignia_class", nil]; // you can also do [_unit, ""] call BIS_fnc_setUnitInsignia, but this way is faster (plus no network traffic)
		[_unit, _insignia] call BIS_fnc_setUnitInsignia;
	};
};

params ["_player"];
_player addMPEventHandler ["MPRespawn", {
	params ["_unit", "_corpse"];
	private _insignia = [_corpse] call BIS_fnc_getUnitInsignia;
	[_unit, _insignia] spawn {
		params ["_unit", "_insignia"];
		sleep 1;
		isNil {
			_unit setVariable ["BIS_fnc_setUnitInsignia_class", nil]; // you can also do [_unit, ""] call BIS_fnc_setUnitInsignia, but this way is faster (plus no network traffic)
			[_unit, _insignia] call BIS_fnc_setUnitInsignia;
		};
	};
}];
