#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Colin", "Andx"};
        url = ECSTRING(main,URL);

        requiredVersion = REQUIRED_VERSION;
        // RHS AFRF (rhs_main_loadorder) supplies the RPG-7 warheads, FPV_UA (Ukraine FPV Drone) the drone
        // frames and finished drones - without both the recipes are meaningless, so the whole addon is
        // skipped instead of loading with dead recipes (skipWhenMissingDependencies below).
        requiredAddons[] = {
            "ttt_common",
            "ace_common",
            "ace_interact_menu",
            "ace_captives",
            "ace_logistics_rope",
            "rhs_main_loadorder",
            "FPV_UA"
        };
        units[] = {QGVAR(moduleSupplyVehicle)};
        weapons[] = {};

        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgRecipes.hpp"
