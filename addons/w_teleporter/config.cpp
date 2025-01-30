#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_common"};
        authors[] = {"BlauBär"};
        author = "Gruppe W Bauleitung";
        authorUrl = "https://www.gruppe-w.de/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Dialog.hpp"
