#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        authors[] = {"Zumi", "Timi007", "Andx"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_compat_rnt_mg3",
            "ace_csw",
            "bwa3_mg3",
            "bwa3_mg5"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        // Only the BWMod belts need BWMod, the MG3 tripod itself works without it
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazineGroups.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
