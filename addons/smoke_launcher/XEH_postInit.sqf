#include "script_component.hpp"

// Source: PzGrenBtl402 addons/SmokeLauncher/XEH_postInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
GVAR(reloadTimeCache) = createHashMap;
GVAR(muzzleCache) = createHashMap;

// Fires the smoke launcher on the machine the turret is local to
[QGVAR(fire), {
    params ["_vehicle", "_smokeLauncher"];

    [_vehicle, _smokeLauncher] call BIS_fnc_fire;
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;
    GVAR(lastFireSuccess) = true;
    GVAR(inputHeld) = false;
    GVAR(inputEHs) = [];
    GVAR(turret) = [];

    ["turret", LINKFUNC(turretChanged), true] call CBA_fnc_addPlayerEventHandler;
};
