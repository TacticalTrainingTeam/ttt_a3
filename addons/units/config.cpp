#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(flecktarn_survivor),
            QGVAR(flecktarn_rifleman),
            QGVAR(flecktarn_grenadier),
            QGVAR(flecktarn_rifleman_green)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F",
            "ttt_common",
            "ttt_helmets",
            "ttt_uniforms",
            "ttt_backpacks",
            "ttt_vests"
        };
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
