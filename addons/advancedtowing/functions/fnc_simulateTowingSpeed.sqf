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
 * [params] call PREFIX_advancedtowing_fnc_simulateTowingSpeed
 *
 * Public: No
 */



params ["_vehicle"];

private _maxVehicleSpeed = getNumber (configOf _vehicle >> "maxSpeed");
private _vehicleMass = 1000 max (getMass _vehicle);
private _maxTowedCargo = missionNamespace getVariable [QGVAR(Max_Towed_Cargo), 2];
private _runSimulation = true;

while {_runSimulation} do {

    // Calculate total mass and count of cargo being towed (only takes into account
    // cargo that's actively being towed (e.g. there's no slack in the rope)

    private _currentVehicle = _vehicle;
    private _totalCargoMass = 0;
    private _totalCargoCount = 0;
    private _findNextCargo = true;
    while {_findNextCargo} do {

        _findNextCargo = false;
        private _currentCargo = [_currentVehicle] call FUNC(getCargo);

        if(!isNull _currentCargo) then {

            private _towRopes = _currentVehicle getVariable [QGVAR(Ropes), []];

            if(count _towRopes > 0) then {

                private _ropeLength = ropeLength (_towRopes select 0);
                private _ends = ropeEndPosition (_towRopes select 0);
                private _endsDistance = (_ends select 0) distance (_ends select 1);

                if( _endsDistance >= _ropeLength - 2 ) then {
                    _totalCargoMass = _totalCargoMass + (1000 max (getMass _currentCargo));
                    _totalCargoCount = _totalCargoCount + 1;
                    _currentVehicle = _currentCargo;
                    _findNextCargo = true;
                };
            };
        };
    };

    private _newMaxSpeed = _maxVehicleSpeed / (1 max ((_totalCargoMass /  _vehicleMass) * 2));
    _newMaxSpeed = (_maxVehicleSpeed * 0.75) min _newMaxSpeed;

    // Prevent vehicle from moving if trying to move more cargo than pre-defined max
    if(_totalCargoCount > _maxTowedCargo) then {
        _newMaxSpeed = 0;
    };

    private _currentMaxSpeed = _vehicle getVariable [QGVAR(Max_Tow_Speed), _maxVehicleSpeed];

    if(_currentMaxSpeed != _newMaxSpeed) then {
        _vehicle setVariable [QGVAR(Max_Tow_Speed),_newMaxSpeed];
    };

    sleep 0.1;
};
