#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // Load after bwa3_comp_ace, which also changes the Leopard
        requiredAddons[] = {"ttt_common", "ttt_smoke_launcher", "ttt_compat_bwa3_weapons", "bwa3_leopard2", "bwa3_comp_ace"};
        authors[] = {"Andx"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
#include "RscInGameUI.hpp"
