class XEH_CLASS_BASE;

class CfgVehicles {

    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
    };
    class StaticMortar: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class Redd_Tank_M120_Tampella_Base: StaticMortar {
        armor = 500000; // Make invincible

        ace_cargo_noRename = 1;
        ace_cargo_canLoad = 0;

        class ACE_CSW {
            enabled = 1; // Enables ACE CSW for this weapon              
            proxyWeapon = "Addi_M120_Tampella_proxy"; // The proxy weapon created above
            magazineLocation = "_target selectionPosition 'muendung'"; // Ammo handling interaction point location
            ammoLoadTime = 1;   // How long it takes in seconds to load ammo into the weapon           
            ammoUnloadTime = 5; // How long it takes in seconds to unload ammo from the weapon
            desiredAmmo = 1;  // When the weapon is reloaded it will try and reload to this ammo capacity
            // Optional callback function for when the CSW gets disassembled, called with [tripod, staticWeapon]
            disassembleFunc = "prefix_fnc_handleDisassembly";
        };

        // class assembleInfo {
        //     dissasembleTo[] = {};
        // };

        class UserActions {
            delete M120_removeflag;
            delete M120_redFlag;
            delete M120_greenFlag;
        };

        class EventHandlers {
            init = "call redd_fnc_m120_init";
            fired = QUOTE(_this spawn redd_fnc_m120_fired; call FUNC(m120HandleFired)); // Replace Redd's ACE fired handler with own because Redd's causes script errors.

            // Readd CBA XEH EventHandlers. (Redd didn't inherit from base eventhandlers overwriting all eventhandlers including XEH)
            class XEH_CLASS: XEH_CLASS_BASE {};
        };
    };
};
