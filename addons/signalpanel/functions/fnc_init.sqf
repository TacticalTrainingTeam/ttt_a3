#include "script_component.hpp"

/*
    author: [TTT] EinStein modfied by [TTT] Andx
*/

if (!GVAR(enable)) exitWith {};

plane_object = "Tarp_01_Large_Red_F";
plane_backpack = [GVAR(allowedBackpacks)] call EFUNC(main,parseCsv);

plane_canBuild = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    {
        if ((backpack _caller == _x) && (player getVariable ["hasTent", true])) then {
            _bool = true;
        };
    } forEach plane_backpack;

    _bool;
}; //return bool

plane_canZip = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    private _used = _target getVariable "inUse";
    if (!_used) then {_bool = true};
    _bool;
}; //return bool

plane_cancel = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    hint LLSTRING(cancel);
    _caller switchMove "";
    if (typeOf _target == plane_object) then {
        _target setVariable ["inUse", false, true];
    };
}; //return code

plane_zip = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _posBP = getPos _target;
    deleteVehicle _target;
    _caller setVariable ["hasTent", true];
}; //return code

plane_zip_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _target setVariable ["inUse", true, true];
    _caller playMove "Acts_carFixingWheel";
    [18, _this, plane_zip, plane_cancel, LLSTRING(collect)] call ace_common_fnc_progressBar;
}; //return code

plane_build = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
    _plane = plane_object createVehicle _position;
    _plane setVariable ["inUse", false, true];
    _caller setVariable ["hasTent", false];
    _caller switchMove "";
}; //return code

plane_build_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2];
    if (_position isEqualTo []) exitWith {
        hint LLSTRING(noSpace);
    };
    _caller playMove "Acts_carFixingWheel";
    [18, _this, plane_build, plane_cancel, LLSTRING(build)] call ace_common_fnc_progressBar;
}; //return code

_build_plane = ["plane_build", LLSTRING(build), "",
    plane_build_progressBar, plane_canBuild
] call ace_interact_menu_fnc_createAction;

_zip_plane = ["plane_zip", LLSTRING(collect), "",
    plane_zip_progressBar, plane_canZip
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _build_plane] call ace_interact_menu_fnc_AddActionToObject;

[plane_object, 0, ["ACE_MainActions"], _zip_plane] call ace_interact_menu_fnc_AddActionToClass;