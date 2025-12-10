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

// Vest with no armor protection
#define VEST_NO_PROTECTION(container,massValue) \
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
            armor = 0; \
            passThrough = 1; \
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
            armor = 0; \
            passThrough = 1; \
            simulation = ""; \
        }; \
        class Abdomen { \
            hitpointName = "HitAbdomen"; \
            armor = 0; \
            passThrough = 1; \
            simulation = ""; \
        }; \
        class Pelvis { \
            hitpointName = "HitPelvis"; \
            armor = 0; \
            passThrough = 1; \
            simulation = ""; \
        }; \
        class Body { \
            hitpointName = "HitBody"; \
            passThrough = 0.4; \
            simulation = ""; \
        }; \
    }

// Headgear with no protection
#define HEADGEAR_NO_PROTECTION(massValue) \
    ace_hearing_protection = 1; \
    ace_hearing_lowerVolume = 0.0; \
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName ="HitHead"; \
            armor = 0; \
            passThrough = 1; \
        }; \
        class Face { \
            hitpointName ="HitFace"; \
            armor = 0; \
            passThrough = 1; \
        }; \
    }

// Headgear with armor protection (3 parameters: mass, head armor, face armor)
#define HEADGEAR_ARMOR(massValue,headArmor,faceArmor) \
    ace_hearing_protection = 1; \
    ace_hearing_lowerVolume = 0.0; \
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName = "HitHead"; \
            armor = headArmor; \
            passThrough = 0.5; \
        }; \
        class Face { \
            hitpointName = "HitFace"; \
            armor = faceArmor; \
            passThrough = 0.5; \
        }; \
    }

// Headgear with armor protection and face exposed
#define HEADGEAR_ARMOR_FACE_EXPOSED(massValue,armorValue) \
    ace_hearing_protection = 1; \
    ace_hearing_lowerVolume = 0.0; \
    mass = massValue; \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName ="HitHead"; \
            armor = armorValue; \
            passThrough = 0.5; \
        }; \
        class Face { \
            hitpointName ="HitFace"; \
            armor = 0; \
            passThrough = 0.1; \
        }; \
    }
