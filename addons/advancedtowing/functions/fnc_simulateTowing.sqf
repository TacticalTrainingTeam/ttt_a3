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
 * [params] call PREFIX_advancedtowing_fnc_simulateTowing
 *
 * Public: No
 */

params ["_vehicle", "_vehicleHitchModelPos", "_cargo", "_cargoHitchModelPos", "_ropeLength"];

private ["_vehicleHitchPosition","_cargoHitchPosition","_newCargoHitchPosition","_cargoVector","_movedCargoVector"];
private ["_newCargoDir","_newCargoPosition","_cargoPosition","_vehiclePosition"];
private ["_cargoCorner1AGL","_cargoCorner1ASL","_cargoCorner2AGL","_cargoCorner2ASL","_cargoCorner3AGL","_cargoCorner3ASL","_cargoCorner4AGL","_cargoCorner4ASL","_surfaceNormal1","_surfaceNormal2","_surfaceNormal"];
private ["_cargoCenterASL","_surfaceHeight","_surfaceHeight2","_maxSurfaceHeight"];

private _maxVehicleSpeed = getNumber (configOf _vehicle >> "maxSpeed");
private _cargoCanFloat = [false, true] select (getNumber ((configOf _cargo) >> "canFloat") == 1);

private _cargoCenterOfMassAGL = [_cargo, getCenterOfMass _cargo, _cargoCanFloat] call FUNC(findSurfaceAGLUnderModel);

private _cargoModelCenterGroundPosition = _cargo worldToModelVisual _cargoCenterOfMassAGL;
_cargoModelCenterGroundPosition set [0, 0];
_cargoModelCenterGroundPosition set [1, 0];
_cargoModelCenterGroundPosition set [2, (_cargoModelCenterGroundPosition select 2) - 0.05]; // Adjust height so that it doesn't ride directly on ground

// Calculate cargo model corner points
private _cargoCornerPoints = [_cargo] call FUNC(getCornerPoints);
_corner1 = _cargoCornerPoints select 0;
_corner2 = _cargoCornerPoints select 1;
_corner3 = _cargoCornerPoints select 2;
_corner4 = _cargoCornerPoints select 3;


// Try to set cargo owner if the towing client doesn't own the cargo
if(local _vehicle && !local _cargo) then {
    [[_cargo, clientOwner], QFUNC(customSetOwner)] call FUNC(customRemoteExecServer);
};

_vehicleHitchModelPos set [2, 0];
_cargoHitchModelPos set [2, 0];

private _lastCargoHitchPosition = _cargo modelToWorld _cargoHitchModelPos;
private _lastCargoVectorDir = vectorDir _cargo;
private _lastMovedCargoPosition = getPos _cargo;

private _cargoHitchPoints = [_cargo] call FUNC(getHitchPoints);
private _cargoLength = (_cargoHitchPoints select 0) distance (_cargoHitchPoints select 1);

private _vehicleMass = 1 max (getMass _vehicle);
private _cargoMass = getMass _cargo;
if(_cargoMass == 0) then {
    _cargoMass = _vehicleMass;
};

private _maxDistanceToCargo = _ropeLength;

private _doExit = false;

// Start vehicle speed simulation
[_vehicle] spawn FUNC(simulateTowingSpeed);

while {!_doExit} do {

    _vehicleHitchPosition = _vehicle modelToWorld _vehicleHitchModelPos;
    _vehicleHitchPosition set [2,0];
    _cargoHitchPosition = _lastCargoHitchPosition;
    _cargoHitchPosition set [2,0];

    _cargoPosition = getPos _cargo;
    _vehiclePosition = getPos _vehicle;

    if(_vehicleHitchPosition distance _cargoHitchPosition > _maxDistanceToCargo) then {

        // Calculated simulated towing position + direction
        _newCargoHitchPosition = _vehicleHitchPosition vectorAdd ((_vehicleHitchPosition vectorFromTo _cargoHitchPosition) vectorMultiply _ropeLength);
        _cargoVector = _lastCargoVectorDir vectorMultiply _cargoLength;
        _movedCargoVector = _newCargoHitchPosition vectorDiff _lastCargoHitchPosition;
        _newCargoDir = vectorNormalized (_cargoVector vectorAdd _movedCargoVector);
        //if(_isRearCargoHitch) then {
        //    _newCargoDir = _newCargoDir vectorMultiply -1;
        //};
        _lastCargoVectorDir = _newCargoDir;
        _newCargoPosition = _newCargoHitchPosition vectorAdd (_newCargoDir vectorMultiply -(vectorMagnitude (_cargoHitchModelPos)));

        [_cargo, _newCargoPosition, _cargoCanFloat] call FUNC(findSurfaceASLUnderPosition);

        // Calculate surface normal (up) (more realistic than surfaceNormal function)
        private _cargoCorner1ASL = [_cargo, _corner1, _cargoCanFloat] call FUNC(findSurfaceASLUnderModel);
        private _cargoCorner2ASL = [_cargo, _corner1, _cargoCanFloat] call FUNC(findSurfaceASLUnderModel);
        private _cargoCorner3ASL = [_cargo, _corner1, _cargoCanFloat] call FUNC(findSurfaceASLUnderModel);
        private _cargoCorner4ASL = [_cargo, _corner1, _cargoCanFloat] call FUNC(findSurfaceASLUnderModel);

        _surfaceNormal1 = (_cargoCorner1ASL vectorFromTo _cargoCorner3ASL) vectorCrossProduct (_cargoCorner1ASL vectorFromTo _cargoCorner2ASL);
        _surfaceNormal2 = (_cargoCorner4ASL vectorFromTo _cargoCorner2ASL) vectorCrossProduct (_cargoCorner4ASL vectorFromTo _cargoCorner3ASL);
        _surfaceNormal = _surfaceNormal1 vectorAdd _surfaceNormal2;

        if(missionNamespace getVariable [QGVAR(Debug_Enabled), false]) then {
            if(isNil "sa_tow_debug_arrow_1") then {
                sa_tow_debug_arrow_1 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
                sa_tow_debug_arrow_2 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
                sa_tow_debug_arrow_3 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
                sa_tow_debug_arrow_4 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
            };
            sa_tow_debug_arrow_1 setPosASL _cargoCorner1ASL;
            sa_tow_debug_arrow_1 setVectorUp _surfaceNormal;
            sa_tow_debug_arrow_2 setPosASL _cargoCorner2ASL;
            sa_tow_debug_arrow_2 setVectorUp _surfaceNormal;
            sa_tow_debug_arrow_3 setPosASL _cargoCorner3ASL;
            sa_tow_debug_arrow_3 setVectorUp _surfaceNormal;
            sa_tow_debug_arrow_4 setPosASL _cargoCorner4ASL;
            sa_tow_debug_arrow_4 setVectorUp _surfaceNormal;
        };

        // Calculate adjusted surface height based on surface normal (prevents vehicle from clipping into ground)
        _cargoCenterASL = AGLToASL (_cargo modelToWorldVisual [0, 0, 0]);
        _cargoCenterASL set [2, 0];
        _surfaceHeight = ((_cargoCorner1ASL vectorAdd ( _cargoCenterASL vectorMultiply -1)) vectorDotProduct _surfaceNormal1) / ([0, 0, 1] vectorDotProduct _surfaceNormal1);
        _surfaceHeight2 = ((_cargoCorner1ASL vectorAdd ( _cargoCenterASL vectorMultiply -1)) vectorDotProduct _surfaceNormal2) / ([0, 0, 1] vectorDotProduct _surfaceNormal2);
        _maxSurfaceHeight = (_newCargoPosition select 2) max _surfaceHeight max _surfaceHeight2;
        _newCargoPosition set [2, _maxSurfaceHeight];

        _newCargoPosition = _newCargoPosition vectorAdd ( _cargoModelCenterGroundPosition vectorMultiply -1 );

        _cargo setVectorDir _newCargoDir;
        _cargo setVectorUp _surfaceNormal;
        _cargo setPosWorld _newCargoPosition;

        _lastCargoHitchPosition = _newCargoHitchPosition;
        _maxDistanceToCargo = _vehicleHitchPosition distance _newCargoHitchPosition;
        _lastMovedCargoPosition = _cargoPosition;

        _massAdjustedMaxSpeed = _vehicle getVariable [QGVAR(Max_Tow_Speed), _maxVehicleSpeed];
        if(speed _vehicle > (_massAdjustedMaxSpeed) + 0.1) then {
            _vehicle setVelocity ((vectorNormalized (velocity _vehicle)) vectorMultiply (_massAdjustedMaxSpeed / 3.6));
        };

    } else {

        if(_lastMovedCargoPosition distance _cargoPosition > 2) then {
            _lastCargoHitchPosition = _cargo modelToWorld _cargoHitchModelPos;
            _lastCargoVectorDir = vectorDir _cargo;
        };

    };

    // If vehicle isn't local to the client, switch client running towing simulation
    if(!local _vehicle) then {
        [_this, QFUNC(simulateTowing), _vehicle] call FUNC(customRemoteExec);
        _doExit = true;
    };

    // If the vehicle isn't towing anything, stop the towing simulation
    private _currentCargo = [_vehicle] call FUNC(getCargo);

    if(isNull _currentCargo) then {
        _doExit = true;
    };
    sleep 0.01;
};
