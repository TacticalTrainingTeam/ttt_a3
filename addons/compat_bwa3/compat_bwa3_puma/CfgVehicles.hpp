// Source: PzGrenBtl402 addons/BwMod_Puma/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted: only the config part (optics, weapons, 3DEN default), without ACRE racks, HUD, cameras, radar and numbers
// Warrior optics for a wider field of view, without NVG
#define WARRIOR_OPTICS(SIZE) gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_##SIZE##_F.p3d); visionMode[] = {"Normal", "TI"}

class Optics_Armored;
class BWA3_Optics_Gunner_Puma: Optics_Armored {
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
    class Tank_F: Tank {
        class ViewOptics;
    };

    class BWA3_Puma_base: Tank_F {
        ace_vehicles_engineStartDelay = 5;

        // Gunner and commander can fire the smoke launcher (the gunner needs it as weapon)
        EGVAR(smoke_launcher,muzzle) = QEGVAR(compat_bwa3_weapons,SmokeLauncher);

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        WARRIOR_OPTICS(w);

                        // Smoke launcher moves from the commander to the gunner
                        weapons[] = {};
                        magazines[] = {};

                        class ViewOptics: ViewOptics {
                            visionMode[] = {"Normal", "TI"}; // No NVG
                        };
                    };
                };

                weapons[] = {
                    "BWA3_MK30",
                    "BWA3_MG5_vehicle",
                    "bwa3_land_spikeLR_atgm",
                    QEGVAR(compat_bwa3_weapons,SmokeLauncher)
                };

                magazines[] = {
                    "BWA3_240Rnd_APFSDS_shells",
                    "BWA3_160Rnd_ABM_shells",
                    QEGVAR(compat_bwa3_weapons,1000Rnd_762x51),
                    "bwa3_mells_spikeLR_2rnd_puma",
                    "BWA3_SmokeLauncherMag"
                };

                class OpticsIn: BWA3_Optics_Gunner_Puma {
                    class Wide: Wide {
                        WARRIOR_OPTICS(w);
                    };
                    class Medium: Medium {
                        WARRIOR_OPTICS(m);
                    };
                    class Narrow: Narrow {
                        WARRIOR_OPTICS(n);
                    };
                };
            };
        };

        class Attributes {
            // Set default to HE instead of ABM
            class BWA3_MK30AP;
            class BWA3_MK30HE: BWA3_MK30AP {
                defaultValue = 1;
            };
            class BWA3_MK30ABM: BWA3_MK30AP {
                defaultValue = 0;
            };
        };
    };
};
