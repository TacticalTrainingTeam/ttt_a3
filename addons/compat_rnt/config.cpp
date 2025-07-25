#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Timi007", "Lemonberries", "Andx", "Addi"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "Redd_Vehicles_Main"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgAmmo.hpp"
#include "CfgAnimationSourceSounds.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgRscInGameUI.hpp"
#include "CfgWeapons.hpp"
