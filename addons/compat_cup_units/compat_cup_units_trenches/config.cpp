#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = ECSTRING(main,TacticalTrainingTeam);;
        authors[] = {"Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_trenches", "CUP_Creatures_People_LoadOrder"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"