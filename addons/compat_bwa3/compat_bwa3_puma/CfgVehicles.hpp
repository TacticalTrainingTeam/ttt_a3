// Source: PzGrenBtl402 addons/BwMod_Puma/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted: without ACRE racks and rearm
// Warrior optics for a wider field of view
#define WARRIOR_OPTICS(SIZE) gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_##SIZE##_F.p3d)

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
    class Tank_F: Tank {};

    class BWA3_Puma_base: Tank_F {
        ace_vehicles_engineStartDelay = 5;

        disableSoundAttenuation = 0;
        soundAttenuationTurret = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};

        // Horizontal compass for the driver
        driverWeaponsInfoType = QGVAR(RscOptics_Driver);

        // Map on the ramp (requires Metis Enhanced)
        EGVAR(common,mapActionPosition)[] = {0.0131836, -3.86426, 1.56863};
        EGVAR(common,mapActionOrientation)[] = {{1, -0.00291926, 0.000209961}, {-0.00286234, -0.990424, -0.138032}};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        WARRIOR_OPTICS(w);

                        turretInfoType = QGVAR(RscOpticsCommander);

                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments = "Compartment1";
                    };
                };

                gunnerOpticsModel = QUOTE(\A3\weapons_f\reticle\optics_empty);
                turretInfoType = QGVAR(RscOpticsGunner);

                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments = "Compartment1";

                weapons[] = {
                    "BWA3_MK30",
                    "BWA3_MG5_vehicle",
                    "bwa3_land_spikeLR_atgm"
                };

                magazines[] = {
                    "BWA3_240Rnd_APFSDS_shells",
                    "BWA3_160Rnd_ABM_shells",
                    QGVAR(1000Rnd_762x51),
                    "bwa3_mells_spikeLR_2rnd_puma"
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

            // Number on the side of the vehicle, set up by the server
            class GVAR(vehicleNumber) {
                displayName = CSTRING(vehicleNumber_displayName);
                tooltip = CSTRING(vehicleNumber_tooltip);
                property = QGVAR(vehicleNumber);
                control = "Combo";
                expression = QUOTE([ARR_2(_this,_value)] call FUNC(setVehicleNumber););
                defaultValue = "";
                typeName = "STRING";

                class values {
                    class none {
                        default = 1;
                        name = CSTRING(vehicleNumber_none);
                        picture = "#(argb,8,8,3)color(0,0,0,0)";
                        value = "";
                    };

                    #define VEH_NUMBER(COLOR,NUMBER) \
                    class COLOR##_##NUMBER { \
                        name = CSTRING(vehicleNumber_##COLOR##_##NUMBER); \
                        picture = QPATHTOEF(compat_bwa3,data\numbers\##COLOR##_##NUMBER##.paa); \
                        value = QUOTE(COLOR##_##NUMBER); \
                    }

                    VEH_NUMBER(red,20);
                    VEH_NUMBER(red,A);
                    VEH_NUMBER(red,A1);
                    VEH_NUMBER(red,A2);
                    VEH_NUMBER(red,A3);
                    VEH_NUMBER(red,B);
                    VEH_NUMBER(red,B1);
                    VEH_NUMBER(red,B2);
                    VEH_NUMBER(red,B3);
                    VEH_NUMBER(red,C);
                    VEH_NUMBER(red,C1);
                    VEH_NUMBER(red,C2);
                    VEH_NUMBER(red,C3);
                };
            };
        };
    };
};
