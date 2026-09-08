#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Broadcast to every client (with JIP) instead of remoteExec; all three functions already no-op
// on a dedicated server.
[QGVAR(condensedBreathInit), FUNC(condensedBreathInit)] call CBA_fnc_addEventHandler;
[QGVAR(condensedBreathEffects), FUNC(condensedBreathEffects)] call CBA_fnc_addEventHandler;
[QGVAR(stormEffects), FUNC(stormEffects)] call CBA_fnc_addEventHandler;

// Owner-targeted mutations, fired via CBA_fnc_targetEvent instead of remoteExec.
[QGVAR(setSkill), {
    params ["_unit", "_skillType", "_value"];
    _unit setSkill [_skillType, _value];
}] call CBA_fnc_addEventHandler;

[QGVAR(setVelocity), {
    params ["_object", "_velocity"];
    _object setVelocity _velocity;
}] call CBA_fnc_addEventHandler;

// fnc_stormInit.sqf only ever does anything on the server, so route it there directly instead of
// broadcasting via remoteExec.
if (isServer) then {
    [QGVAR(stormInit), FUNC(stormInit)] call CBA_fnc_addEventHandler;
};

ADDON = true;
