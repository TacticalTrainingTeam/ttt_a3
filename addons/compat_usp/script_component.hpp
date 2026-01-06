#define COMPONENT compat_usp
#define COMPONENT_BEAUTIFIED Compat USP

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Backpack balance macro
#define BACKPACK_BALANCE(maxLoad,massValue) \
    maximumLoad = maxLoad; \
    mass = massValue
