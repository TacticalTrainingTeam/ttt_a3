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

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        // Vanilla Warrior optics for a wider field of view
                        gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d);
                        turretInfoType = QGVAR(RscOpticsCommander);

                        class OpticsIn: BWA3_Optics_Commander_Leopard {
                            class Wide: Wide {
                                gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d);
                                visionMode[] = {"Normal", "TI"}; // No NVG
                                thermalMode[] = {2, 3};
                            };
                            class Medium: Medium {
                                gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d);
                                visionMode[] = {"Normal", "TI"}; // No NVG
                                thermalMode[] = {2, 3};
                            };
                            class Narrow: Narrow {
                                gunnerOpticsModel = QUOTE(\A3\Weapons_F\Reticle\Optics_Gunner_APC_02_w_F.p3d);
                                visionMode[] = {"Normal", "TI"}; // No NVG
                                thermalMode[] = {2, 3};
                            };
                        };
                    };
                };
            };
        };
    };
};
