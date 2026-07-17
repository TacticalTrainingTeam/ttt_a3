#include "script_component.hpp"

// Server: build loadout database at mission start
if (isServer) then {
    [] spawn FUNC(scanLoadouts);
};

// Clients: attach ACE actions to depot objects
if (hasInterface) then {
    [] call FUNC(addActions);
};
