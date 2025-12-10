#define COMPONENT compat_rhs
#define COMPONENT_BEAUTIFIED Compat RHS

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Backpack balance macro
#define BACKPACK_BALANCE(maxLoad,massValue) \
    maximumLoad = maxLoad; \
    mass = massValue

// Uniform macro
#define UNIFORM_ITEMINFO(container,massValue) \
    containerClass = container; \
    mass = massValue

// Vest macro
#define VEST_PROTECTION(container,massValue) \
    containerClass = container; \
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Neck { \
            hitpointName = "HitNeck"; \
            armor = 0; \
            passThrough = 1; \
            simulation = ""; \
        }; \
        class Chest { \
            hitpointName = "HitChest"; \
            armor = 12; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
        class Arms { \
            hitpointName = "HitArms"; \
            armor = 0; \
            passThrough = 1; \
            simulation = ""; \
        }; \
        class Diaphragm { \
            hitpointName = "HitDiaphragm"; \
            armor = 12; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
        class Abdomen { \
            hitpointName = "HitAbdomen"; \
            armor = 12; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
        class Pelvis { \
            hitpointName = "HitPelvis"; \
            armor = 12; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
        class Body { \
            hitpointName = "HitBody"; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
    }
