#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Default MK30 ammo types of the Puma, HE instead of ABM
// // Source: PzGrenBtl402 addons/BwMod_Puma/XEH_preInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
missionNamespace setVariable ["BWA3_MK30AP", true];
missionNamespace setVariable ["BWA3_MK30HE", true];
missionNamespace setVariable ["BWA3_MK30ABM", false];

if (hasInterface) then {
    [QGVAR(notify), {_this call CBA_fnc_notify}] call CBA_fnc_addEventHandler;

    GVAR(rearViewCamPFH) = -1;
};

ADDON = true;
