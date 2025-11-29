#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"USP_Gear_Pack", "USP_Gear_Acc", "USP_Gear_Body", "USP_Gear_Face", "USP_Gear_Head", "USP_Gear_NVG", "USP_Gear_Pack", "USP_Gear_Vest"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx", "superjes1"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;

        // this prevents any patched class from requiring this addon
        addonRootClass = "A3_Characters_F";
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"

#include "BettrIR_Config.hpp"
