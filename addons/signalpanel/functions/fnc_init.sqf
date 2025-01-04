#include "script_component.hpp"

/*
    author: [TTT] EinStein modfied by [TTT] Andx
*/

if (!GVAR(enable)) exitWith {};

panel_object = "Tarp_01_Large_Red_F";
panel_backpack = [GVAR(allowedBackpacks)] call EFUNC(main,parseCsv);

panel_canBuild = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    {
        if ((backpack _caller == _x) && (player getVariable ["hasTent", true])) then {
            _bool = true;
        };
    } forEach panel_backpack;

    _bool;
}; //return bool

panel_canZip = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    private _used = _target getVariable "inUse";
    if (!_used) then {_bool = true};
    _bool;
}; //return bool

panel_cancel = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    hint LLSTRING(cancel);
    _caller switchMove "";
    if (typeOf _target == panel_object) then {
        _target setVariable ["inUse", false, true];
    };
}; //return code

panel_zip = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _posBP = getPos _target;
    deleteVehicle _target;
    _caller setVariable ["hasTent", true];
}; //return code

panel_zip_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _target setVariable ["inUse", true, true];
    _caller playMove "Acts_carFixingWheel";
    [19, _this, panel_zip, panel_cancel, LLSTRING(collect)] call ace_common_fnc_progressBar;
}; //return code

panel_build = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
    _panel = panel_object createVehicle _position;
    _panel setVariable ["inUse", false, true];
    _caller setVariable ["hasTent", false];
    _caller switchMove "";
}; //return code

panel_build_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2];
    if (_position isEqualTo []) exitWith {
        hint LLSTRING(noSpace);
    };
    _caller playMove "Acts_carFixingWheel";
    [19, _this, panel_build, panel_cancel, LLSTRING(build)] call ace_common_fnc_progressBar;
}; //return code

_build_panel = ["panel_build", LLSTRING(build), "",
    panel_build_progressBar, panel_canBuild
] call ace_interact_menu_fnc_createAction;

_zip_panel = ["panel_zip", LLSTRING(collect), "",
    panel_zip_progressBar, panel_canZip
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _build_panel] call ace_interact_menu_fnc_AddActionToObject;

[panel_object, 0, ["ACE_MainActions"], _zip_panel] call ace_interact_menu_fnc_AddActionToClass;