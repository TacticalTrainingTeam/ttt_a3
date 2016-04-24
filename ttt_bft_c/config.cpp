//by Reimchen for TTT
//tacticalteam.de

#include "CfgFunctions.hpp"
#include "CfgPatches.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class Extended_Init_Eventhandlers {
    class CAManBase {
        class BG_BFT_init {
            init = "_this call BG_fnc_addActions";
        };
    };
};