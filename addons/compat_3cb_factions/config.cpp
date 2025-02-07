#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "UK3CB_Factions_Weapons"};//the mod is much bigger, but it should always be loaded as one unit, so we only check for the weapons mod
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};