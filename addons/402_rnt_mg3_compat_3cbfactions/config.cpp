#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_402_common",
            //"ttt_402_rnt_mg3",
            "ace_csw",
            "UK3CB_Factions_Weapons_MG3"
        };
        author = ECSTRING(402_common,author);
        authors[] = {"Zumi", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgWeapons.hpp"