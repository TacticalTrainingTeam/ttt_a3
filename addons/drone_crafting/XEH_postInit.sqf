#include "script_component.hpp"

if (isServer) then {
    // Raised by the public functions when they are called on a client (e.g. from the ZEN context menu)
    [QGVAR(setVehicle), FUNC(setVehicle)] call CBA_fnc_addEventHandler;
    [QGVAR(removeVehicle), FUNC(removeVehicle)] call CBA_fnc_addEventHandler;
    [QGVAR(restock), FUNC(restock)] call CBA_fnc_addEventHandler;

    // CBA event handlers run unscheduled, so a craft can never be interrupted halfway by a second
    // one - this is what keeps the cargo consistent when several players craft at the same time.
    [QGVAR(craftRequest), FUNC(craft)] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    [] call FUNC(addActions);

    [QGVAR(craftResult), FUNC(showCraftResult)] call CBA_fnc_addEventHandler;
};
