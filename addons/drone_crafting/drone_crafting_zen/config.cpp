#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        // QUOTE(ADDON) is required, not just for load order: the parent is itself skipped without
        // RHS/FPV_UA, and this sub-addon must then be skipped too instead of calling its functions.
        requiredAddons[] = {QUOTE(ADDON), "zen_context_menu", "ace_zeus"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"
