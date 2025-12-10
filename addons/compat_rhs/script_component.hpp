#define COMPONENT compat_rhs
#define COMPONENT_BEAUTIFIED Compat RHS

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Backpack balance macro
#define BACKPACK_BALANCE(maxLoad,massValue) \
    maximumLoad = maxLoad; \
    mass = massValue

// ACE Hearing protection macro
#define ACE_HEARING\
    ace_hearing_protection = 1; \
    ace_hearing_lowerVolume = 0.0

// Headgear macros
#define HEADGEAR_NO_PROTECTION(massValue) \
    ACE_HEARING;\
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName = "HitHead"; \
            armor = 0; \
            passThrough = 1; \
        }; \
        class Face { \
            hitpointName = "HitFace"; \
            armor = 0; \
            passThrough = 1; \
        }; \
    }

#define HEADGEAR_ARMOR(massValue,headArmor,faceArmor) \
    ACE_HEARING;\
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName = "HitHead"; \
            Armor = headArmor; \
            passThrough = 0.5; \
        }; \
        class Face { \
            hitpointName = "HitFace"; \
            armor = faceArmor; \
            passThrough = 0.5; \
        }; \
    }

#define HEADGEAR_ARMOR_FACE_EXPOSED(massValue,headArmor) \
    ACE_HEARING;\
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName = "HitHead"; \
            Armor = headArmor; \
            passThrough = 0.5; \
        }; \
        class Face { \
            hitpointName = "HitFace"; \
            armor = 0; \
            passThrough = 1; \
        }; \
    }
