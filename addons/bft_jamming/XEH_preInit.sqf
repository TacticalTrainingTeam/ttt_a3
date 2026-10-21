#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

/*
 * Registered in preInit, not postInit: the module function may raise CrowsEW's addJammer as early
 * as mission init, and a crowsEW_main_updateJammers broadcast that arrives before our handler
 * exists would leave that jammer without its "sweep_bft" beacon until the next jammer change.
 *
 * Server: keeps the "sweep_bft" spectrum beacon of every BFT-capable CrowsEW jammer in sync
 * with its enabled state (add/toggle/remove all funnel through crowsEW_main_updateJammers).
 * Client: reacts to cTab rebuilding its BFT lists to apply blackout/drift to the display.
 */
if (isServer) then {
    [CROWSEW_UPDATE_JAMMERS_EVENT, FUNC(onUpdateJammersServer)] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    GVAR(driftState) = createHashMap;

    [CTAB_LISTS_UPDATED_EVENT, FUNC(onBftListsUpdated)] call CBA_fnc_addEventHandler;
};

ADDON = true;
