#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ttt_402_common",
            "ttt_402_rnt_mg3",
            "ace_csw",
            //todo 3cb/rhs mg3 suchen
        };
        author = ECSTRING(Main,authors);
        authors[] = {"Zumi", "Timi007"};
        url = ECSTRING(Main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazineGroups.hpp"
#include "CfgWeapons.hpp"