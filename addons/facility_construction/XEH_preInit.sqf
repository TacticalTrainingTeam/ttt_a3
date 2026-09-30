#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Owner-targeted mutations, fired via CBA_fnc_targetEvent instead of remoteExec.
[QGVAR(setFuel), {
    params ["_vehicle", "_fuel"];
    _vehicle setFuel _fuel;
}] call CBA_fnc_addEventHandler;

[QGVAR(setVelocity), {
    params ["_vehicle", "_velocity"];
    _vehicle setVelocity _velocity;
}] call CBA_fnc_addEventHandler;

[QGVAR(allowDamage), {
    params ["_object", "_allowDamage"];
    _object allowDamage _allowDamage;
}] call CBA_fnc_addEventHandler;
