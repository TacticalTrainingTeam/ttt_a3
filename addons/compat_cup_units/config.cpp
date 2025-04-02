#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common","CUP_Creatures_People_LoadOrder"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        url = ECSTRING(main,URL);
        // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};