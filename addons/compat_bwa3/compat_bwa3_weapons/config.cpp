#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "bwa3_weapons"};
        authors[] = {"Timi007", "Andx"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
