#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx", "Zumi", "Timi007", "Lemonberries", "Mishkar"};
        url = ECSTRING(main,URL);

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "ttt_common",
            "Redd_Vehicles_Main", 
            "Redd_Tank_Fuchs_1A4", 
            "Redd_Tank_Gepard_1A2",
            "Redd_Bags",
            "rnt_sppz_2a2_luchs",
            "rnt_gmw_static",
            "rnt_mg3_static",
            "ace_csw",
            "rnt_ace_compatibility"
            };
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {
            QGVAR(Tripod)
        };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgAnimationsSourceSounds.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgWeapons.hpp"
#include "CfgRscInGameUI.hpp"