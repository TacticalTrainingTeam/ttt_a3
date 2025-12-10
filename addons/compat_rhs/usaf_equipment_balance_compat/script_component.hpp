#define SUBCOMPONENT usaf
#define SUBCOMPONENT_BEAUTIFIED USAF

#include "..\script_component.hpp"

// ACE Hearing protection macro
#define ACE_HEARING\
    ace_hearing_protection = 1; \
    ace_hearing_lowerVolume = 0.0

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
