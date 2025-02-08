#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Timi007", "Lemonberries", "Andx"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

    skipWhenMissingDependencies = 1;
    };
};

#include "CfgAmmo.hpp"
#include "CfgAnimationSoundSources.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgRscInGameUI.hpp"