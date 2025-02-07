
#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_trenches", "UK3CB_Factions_Equipment_CW_Backpack_Soviet"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};