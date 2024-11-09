#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
        requiredVersion = REQUIRED_VERSION;
        // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
        // When any of the addons are missing, a pop-up warning will appear when launching the game.
        requiredAddons[] = {
            "ttt_main",
            "acre_sys_attenuate",
            "acre_sys_intercom",
            "acre_sys_rack"
        };
        author = CSTRING(author);
        authors[] = {"Timi007", "Mishkar"};
        url = CSTRING(URL);
        VERSION_CONFIG;

        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgSoundEffects.hpp"