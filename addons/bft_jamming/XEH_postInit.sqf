#include "script_component.hpp"
/*
 * Server: keeps the "sweep_bft" spectrum beacon of every BFT-capable CrowsEW jammer in sync
 * with its enabled state (add/toggle/remove all funnel through crowsEW_main_updateJammers).
 * Client: reacts to cTab rebuilding its BFT lists to apply blackout/drift to the display.
 */

if (isServer) then {
    GVAR(bftBeaconActive) = createHashMap;

    [CROWSEW_UPDATE_JAMMERS_EVENT, FUNC(onUpdateJammersServer)] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

GVAR(driftState) = createHashMap;

[CTAB_LISTS_UPDATED_EVENT, FUNC(onBftListsUpdated)] call CBA_fnc_addLocalEventHandler;
