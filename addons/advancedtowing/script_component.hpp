#define COMPONENT advancedtowing
#define COMPONENT_BEAUTIFIED Advanced Towing

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

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
