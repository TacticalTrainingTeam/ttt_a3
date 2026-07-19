#include "script_component.hpp"

// Server: build loadout database at mission start
if (isServer) then {
    call FUNC(scanLoadouts);
};
