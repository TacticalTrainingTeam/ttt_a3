#include "script_component.hpp"

if (isServer) then {
    [QGVAR(syncJammer), LINKFUNC(syncJammer)] call CBA_fnc_addEventHandler;
};

// Crows adds its own (de)activate actions to every jammer. They'd toggle Crows without the DUKE and desync the two
if (hasInterface) then {
    [CROWS_EVENT_UPDATE_JAMMERS, LINKFUNC(removeCrowsActions)] call CBA_fnc_addEventHandler;
};
