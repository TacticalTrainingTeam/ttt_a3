#include "script_component.hpp"
#include "defines.inc"
/*--------------------------------------------------------------------------------------------------

    Modified version of BI EditTerrainObject Module

--------------------------------------------------------------------------------------------------*/
if (!isServer) exitWith {};

private _mode = param [0,"",[""]];
private _input = param [1,[],[[]]];
private _module = _input param [0,objNull,[objNull]];

//support 3den checkbox entry
private _directInput = param [2,objNull,[objNull]];

/*
if (_mode != "eh_draw3d") then
{
    ["[ ] Init: %1",_this] call bis_fnc_logFormat;
};
*/

switch _mode do
{
    case "eh_draw3d":
    {
        private _module = ((get3DENSelected "logic") select {typeOf _x == QGVAR(buildingShield)}) param [0,objNull];
        if (isNull _module) exitWith {};

        private _building = _module getVariable ["#building",objNull];

        if (isNull _building) exitWith {};

        //draw bbox
        private _bbox = GET_OBJVAR(_building,"#bbox",[]);
        if (count _bbox == 0) then
        {
            _bbox = ["getBuildingBBox",[_module,_building]] call FUNC(moduleBuildingShield);
            SET_OBJVAR(_building,"#bbox",_bbox);
        };
        {drawLine3D _x} forEach _bbox;

        //draw line connecting module and building
        _module = getPos _module; _module set [2,1];
        _building = getPos _building; _building set [2,1];
        drawLine3D [_module,_building,COLOR_HIGHLIGHT];

    };

    // Default object init
    case "init":
    {

        if (!is3DEN) then
        {
            //get parent buidling
            private _building = if (isNull _directInput) then {["getBuilding",[_module]] call FUNC(moduleBuildingShield)} else {_directInput};
            if (isNull _building) exitWith {};

            //set variable name
            private _varName = _module getVariable ["#name",""];
            if (_varName != "") then {
                missionNamespace setVariable [_varName,_building,true];
            };

            private _shield = _module getVariable ["#shield",true];
            if (_shield) then {
                [_building] call FUNCMAIN(buildingShield);
            };

            private _pop = _module getVariable ["#windowpop",false];
            if (_pop) then {
                [_building] call FUNCMAIN(removeWindowGlass);
            };

            //delete module
            deleteVehicle _module;
        }
        else
        {
            //add 'Draw3D' eh to ease operations with module
            private _ehDraw3D = missionNamespace getVariable [QGVAR(ModulebuildingShield_ehDraw3D),-1];
            if (_ehDraw3D == -1) then
            {
                _ehDraw3D = addMissionEventHandler ["Draw3D",{["eh_draw3d"] call FUNC(moduleBuildingShield)}];
                missionNamespace setVariable [QGVAR(ModulebuildingShield_ehDraw3D),_ehDraw3D];
            };
        };
    };
    // When some attributes were changed (including position and rotation)
    case "attributesChanged3DEN":
    {
        private _initialized = _module getVariable ["#initialized",false];
        if (!_initialized) then
        {
            ["init",[_module]] call FUNC(moduleBuildingShield);
            _module setVariable ["#initialized",true];
        };

        //get current building
        _building = ["getBuilding",[_module]] call FUNC(moduleBuildingShield);
        _module setVariable ["#building",_building];

        //do not progess any further if there is no valid building
        if (isNull _building) exitWith {};

        //get and store building bbox
        private _bbox = GET_OBJVAR(_building,"#bbox",[]);
        if (count _bbox == 0) then
        {
            _bbox = ["getBuildingBBox",[_module,_building]] call FUNC(moduleBuildingShield);
            SET_OBJVAR(_building,"#bbox",_bbox);
        };

        //mark building as managed by given module
        SET_OBJVAR(_building,"#managedByW",_module);

        //snap module to building
        private _buildingPos = getPos _building; _buildingPos set [2,0];
        _module set3DENAttribute ["position",_buildingPos];

    };
    // When added to the world (e.g., after undoing and redoing creation)
    case "registeredToWorld3DEN":
    {


    };
    // When removed from the world (i.e., by deletion or undoing creation)
    case "unregisteredFromWorld3DEN":
    {

        //remove 'Draw3D' eh if last module is removed
        private _modules = (all3DENEntities param [3,[]]) select {typeOf _x == QGVAR(buildingShield) && {_x != _module}};
        if (count _modules == 0) then
        {
            private _ehDraw3D = missionNamespace getVariable [QGVAR(ModulebuildingShield_ehDraw3D),-1];

            if (_ehDraw3D != -1) then
            {
                removeMissionEventHandler ["Draw3D",_ehDraw3D];

                missionNamespace setVariable [QGVAR(ModulebuildingShield_ehDraw3D),-1];
            };
        };
    };
    // When connection to object changes (i.e., new one is added or existing one removed)
    case "connectionChanged3DEN":
    {


    };
    // When object is being dragged
    case "dragged3DEN":
    {
        private _building = ["getBuilding",[_module]] call FUNC(moduleBuildingShield);

        _module setVariable ["#building",_building];
    };

    case "getBuilding":
    {
        private _filter = 7;
        private _filterFlags = _filter call bis_fnc_decodeFlags2;
        private _objectMapTypes = [];

        {
            if (_x == 1) then
            {
                _objectMapTypes append ([MAP_TYPES_BUILDING,MAP_TYPES_WALL,MAP_TYPES_VEGETATION,MAP_TYPES_MISC] select _forEachIndex);
            };
        }
        forEach _filterFlags;

        if (count _objectMapTypes == 0) exitWith {objNull};

        private _buildings = nearestTerrainObjects [_module,_objectMapTypes,DISTANCE_DETECTION,true,true];

        //get nearest building in DISTANCE_DETECTION that is not hidden
        _buildings = _buildings select {_x distance2D _module < DISTANCE_DETECTION};

        //filter out buildings that are already managed by other 'EditTerrainObject' modules
        _buildings = _buildings select {_m = GET_OBJVAR(_x,"#managedByW",objNull); isNull _m || {_module == _m}};

        //use 1st object
        private _selected = _buildings param [0,objNull];

        _selected
    };

    case "getBuildingBBox":
    {
        private _building = _input param [1,objNull,[objNull]];
        if (isNull _building) exitWith {[]};

        private _bbox = boundingBoxReal _building;
        _bbox params ["_point1","_point2"];

        _point1 params ["_x1","_y1","_z1"];
        _point2 params ["_x2","_y2","_z2"];

        #define A       (_building modelToWorldVisual [_x1,_y1,_z1])
        #define B       (_building modelToWorldVisual [_x2,_y1,_z1])
        #define C       (_building modelToWorldVisual [_x2,_y1,_z2])
        #define D       (_building modelToWorldVisual [_x1,_y1,_z2])
        #define E       (_building modelToWorldVisual [_x1,_y2,_z1])
        #define F       (_building modelToWorldVisual [_x2,_y2,_z1])
        #define G       (_building modelToWorldVisual [_x2,_y2,_z2])
        #define H       (_building modelToWorldVisual [_x1,_y2,_z2])

        private _edges =
        [
            [A,B,COLOR_HIGHLIGHT],
            [B,C,COLOR_HIGHLIGHT],
            [C,D,COLOR_HIGHLIGHT],
            [D,A,COLOR_HIGHLIGHT],
            [E,F,COLOR_HIGHLIGHT],
            [F,G,COLOR_HIGHLIGHT],
            [G,H,COLOR_HIGHLIGHT],
            [H,E,COLOR_HIGHLIGHT],
            [A,E,COLOR_HIGHLIGHT],
            [B,F,COLOR_HIGHLIGHT],
            [C,G,COLOR_HIGHLIGHT],
            [D,H,COLOR_HIGHLIGHT]
        ];

        _edges
    };
};