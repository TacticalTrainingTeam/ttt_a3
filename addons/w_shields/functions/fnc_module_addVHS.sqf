#include "..\script_component.hpp"

params ["_logic"];

private _target = attachedTo _logic;
deleteVehicle _logic;

if (_target getVariable [QGVAR(hasVHS), false]) exitWith { hintSilent "Dieses Fahrzeug hat bereits ein VehicleShield"}; //ToDo Localize

[_target] remoteExec [QFUNC(addVehicleShield), 0, true];
