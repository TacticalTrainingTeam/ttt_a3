#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {QGVAR(handbook)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common", "cba_common", "ace_interaction"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"Andx"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgCommands.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgHintCategories.hpp"
#include "CfgHints.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "RscHandbook.hpp"
