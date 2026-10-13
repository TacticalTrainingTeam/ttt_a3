// Source: PzGrenBtl402 addons/BwMod_Leopard/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, without ACRE racks and smoke launcher specifics of the original
// Vanilla Warrior optics for a wider field of view, green thermal imaging
#define WARRIOR_OPTICS_MODEL QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d)
#define WARRIOR_OPTICS gunnerOpticsModel = WARRIOR_OPTICS_MODEL; thermalMode[] = {2, 3}

class Optics_Armored;
class BWA3_Optics_Commander_Leopard: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};

class CfgVehicles {
    class Land;
    class LandVehicle: Land {
        class NewTurret;
    };
    class Tank: LandVehicle {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class Tank_F: Tank {};

    class BWA3_Leopard_base: Tank_F {
        driverWeaponsInfoType = QGVAR(RscOptics_Driver);

        // Gunner and commander can fire the smoke launcher (the gunner needs it as weapon)
        EGVAR(smoke_launcher,muzzle) = QEGVAR(compat_bwa3_weapons,SmokeLauncher);

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] += {QEGVAR(compat_bwa3_weapons,SmokeLauncher)};
                magazines[] += {"BWA3_SmokeLauncherMag"};

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        // Vanilla Warrior optics for a wider field of view
                        gunnerOpticsModel = WARRIOR_OPTICS_MODEL;
                        turretInfoType = QGVAR(RscOpticsCommander);

                        // Smoke launcher moves from the commander to the gunner
                        weapons[] = {};
                        magazines[] = {};

                        class OpticsIn: BWA3_Optics_Commander_Leopard {
                            class Wide: Wide {
                                WARRIOR_OPTICS;
                            };
                            class Medium: Medium {
                                WARRIOR_OPTICS;
                            };
                            class Narrow: Narrow {
                                WARRIOR_OPTICS;
                            };
                        };
                    };
                };
            };
        };
    };
};
