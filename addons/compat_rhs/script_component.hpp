#define COMPONENT compat_rhs
#define COMPONENT_BEAUTIFIED Compat RHS

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Backpack balance macro
#define BACKPACK_BALANCE(maxLoad,mass)\
    maximumLoad = maxLoad; \
    mass = mass
