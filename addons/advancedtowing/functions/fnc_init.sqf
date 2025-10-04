#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_init
 *
 * Public: No
 */

 SA_TOW_LOCKED_VEHICLES_ENABLED = true;

_isRearCargoHitch = 0;
#define SA_Find_Surface_ASL_Under_Position(_object,_positionAGL,_returnSurfaceASL,_canFloat) \
_objectASL = AGLToASL (_object modelToWorldVisual (getCenterOfMass _object)); \
_surfaceIntersectStartASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) + 1]; \
_surfaceIntersectEndASL = [_positionAGL select 0, _positionAGL select 1, (_objectASL select 2) - 5]; \
_surfaces = lineIntersectsSurfaces [_surfaceIntersectStartASL, _surfaceIntersectEndASL, _object, objNull, true, 5]; \
_returnSurfaceASL = AGLToASL _positionAGL; \
{ \
    scopeName "surfaceLoop"; \
    if( isNull (_x select 2) ) then { \
        _returnSurfaceASL = _x select 0; \
        breakOut "surfaceLoop"; \
    } else { \
        if!((_x select 2) isKindOf "RopeSegment") then { \
            _objectFileName = str (_x select 2); \
            if((_objectFileName find " t_") == -1 && (_objectFileName find " b_") == -1) then { \
                _returnSurfaceASL = _x select 0; \
                breakOut "surfaceLoop"; \
            }; \
        }; \
    }; \
} forEach _surfaces; \
if(_canFloat && (_returnSurfaceASL select 2) < 0) then { \
    _returnSurfaceASL set [2,0]; \
}; \

#define SA_Find_Surface_ASL_Under_Model(_object,_modelOffset,_returnSurfaceASL,_canFloat) \
SA_Find_Surface_ASL_Under_Position(_object,(_object modelToWorldVisual _modelOffset),_returnSurfaceASL,_canFloat);

#define SA_Find_Surface_AGL_Under_Model(_object,_modelOffset,_returnSurfaceAGL,_canFloat) \
SA_Find_Surface_ASL_Under_Model(_object,_modelOffset,_returnSurfaceAGL,_canFloat); \
_returnSurfaceAGL = ASLtoAGL _returnSurfaceAGL;

#define SA_Get_Cargo(_vehicle,_cargo) \
if( count (ropeAttachedObjects _vehicle) == 0 ) then { \
    _cargo = objNull; \
} else { \
    _cargo = ((ropeAttachedObjects _vehicle) select 0) getVariable ["SA_Cargo",objNull]; \
};

SA_tow_supported_vehicles = [
    //"Tank", "Car", "Ship"
];

SA_TOW_RULES = [
    ["Tank","CAN_TOW","Tank"],
    ["Tank","CAN_TOW","Car"],
    ["Tank","CAN_TOW","Ship"],
    ["Tank","CAN_TOW","Air"],
    //["Car","CAN_TOW","Tank"],
    ["Car","CAN_TOW","Car"],
    ["Car","CAN_TOW","Ship"],
    ["Car","CAN_TOW","Air"],
    ["Ship","CAN_TOW","Ship"]
];

if(!isDedicated) then {
    [] spawn {
        while {true} do {
            if(!isNull player && isPlayer player) then {
                if!( player getVariable [QGVAR(Actions_Loaded), false] ) then {
                    [] callFUNC(addPlayerTowActions);
                    player setVariable [QGVAR(Actions_Loaded), true];
                };
            };
            missionNamespace setVariable [QGVAR(Nearby_Tow_Vehicles), (call FUNC(findNearbyTowVehicles))];
            sleep 2;
        };
    };
};

if(isServer) then {
    [] call FUNC(Install);
};
