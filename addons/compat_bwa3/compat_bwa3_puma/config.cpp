#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "ttt_smoke_launcher", "ttt_compat_bwa3_weapons", "bwa3_puma", "bwa3_common", "bwa3_mells"};
        authors[] = {"Timi007", "Mishkar", "Max", "Andx"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgVehicles.hpp"
#include "RscInGameUI.hpp"
#include "RscTitles.hpp"
#include "CfgSounds.hpp"
