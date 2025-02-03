#include "..\script_component.hpp"

params ["_vehicle"];

_vehicle animate ['HideTurret',1];
_vehicle lockTurret [[0],true];