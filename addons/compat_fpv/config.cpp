#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // Only FPV_UA - the drone mod runs with RHS or CUP, this patch is needed with either
        requiredAddons[] = {"ttt_common", "FPV_UA"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgMagazines.hpp"
