#include "script_component.hpp"

GVAR(reloadTimeCache) = createHashMap;
GVAR(canSmokeCache) = createHashMap;
GVAR(muzzleCache) = createHashMap;

if (hasInterface) then {
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;
    GVAR(lastFireSuccess) = true;
    GVAR(inputEHs) = [];
    GVAR(firedEH) = -1;
    GVAR(vehicle) = objNull;
    GVAR(turret) = [];

    ["turret", LINKFUNC(turretChanged), true] call CBA_fnc_addPlayerEventHandler;
};
