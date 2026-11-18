// Source: PzGrenBtl402 addons/Redd_Milan/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted: load state is checked by ammo, disassembly needs a free backpack slot
class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
    };
    class StaticATWeapon: StaticWeapon {};

    class Redd_Milan_Static_Base: StaticATWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {}; // Empty when assembled, loaded with the Milan tube carried as backpack
                turretInfoType = QEGVAR(compat_rnt,RSC_Milan);
            };
        };

        class AnimationSources {
            // Tube on the Milan, controlled by load, unload and fired
            class ReloadMagazine {
                source = "user";
                initPhase = 1;
                animPeriod = 0;
            };
        };

        // The disassemble action of the engine does not keep the load state, replaced by the user action below
        delete assembleInfo;

        class UserActions {
            class GVAR(disassemble) {
                displayName = ECSTRING(compat_rnt,disassembleMilan);
                priority = 5;
                position = "actionPoint";
                radius = 5;
                onlyforplayer = 1;
                showWindow = 0;
                condition = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,canDisassembleStaticMilan));
                statement = QUOTE(this call EFUNC(compat_rnt,disassembleStaticMilan));
            };

            delete Redd_removeflag;
            delete Redd_redFlag;
            delete Redd_greenFlag;
        };
    };

    class Bag_Base;
    class Weapon_Bag_Base: Bag_Base {};

    // The tube alone is no longer part of the assembly, it is loaded into the assembled Milan
    class Redd_Milan_Static_Barrel: Weapon_Bag_Base {
        mass = 265;
        delete assembleInfo;
    };

    // The tripod alone assembles an empty Milan
    class Redd_Milan_Static_Tripod: Bag_Base {
        mass = 671;

        class assembleInfo {
            displayName = "$STR_Redd_Milan";
            assembleTo = "Redd_Milan_Static";
            dissasembleTo[] = {};
            base = "";
            primary = 1;
        };
    };
};
