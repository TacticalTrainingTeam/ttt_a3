class DefaultVehicleSystemsDisplayManagerRight {};

class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class Components;
    };
    class Car_F: Car {
        class Components: Components {};
    };
    class UK3CB_BAF_LandRover_Base: Car_F {};
    class UK3CB_BAF_LandRover_Panama_Base: UK3CB_BAF_LandRover_Base {
        mineDetectorRange = 25;
        class Components: Components {
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                class Components {
                    class MineDetectorDisplay {
                        range = 25;
                    };
                };
            };
        };
    };

    //https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations
    class UK3CB_BAF_LandRover_WMIK_Base;
    class UK3CB_BAF_LandRover_WMIK_Milan_Base: UK3CB_BAF_LandRover_WMIK_Base {
        class ace_interaction_anims {
            class Gear_Hide {
                positions[] = {{1, 0.7, -0.4},{1.1, -1.1, -1.1}, {-1.25, -1.1, -1.1}};
                items[] = {"ACE_EntrenchingTool", "Land_CanisterFuel_F", "Land_CanisterFuel_F", "UK3CB_BAF_B_Bergen_TAN_Rifleman_A", "UK3CB_BAF_B_Bergen_TAN_Rifleman_B", "UK3CB_BAF_B_Bergen_TAN_SL_A"};
                text = "Ausrüstung abnehmen";
            };
        };
    };

    class UK3CB_BAF_LandRover_WMIK_GMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
        class ace_interaction_anims {
            class Gear_Hide {
                positions[] = {{-1.25, -1.6, -1.1},{1.1, -1.6, -1.1}, {1.1, 0, -0.7}}; //ToDo add the positione of the other two Backpacks
                items[] = {"ACE_EntrenchingTool", "Land_CanisterFuel_F", "Land_CanisterFuel_F", "UK3CB_BAF_B_Bergen_TAN_Rifleman_A", "UK3CB_BAF_B_Bergen_TAN_Rifleman_B", "UK3CB_BAF_B_Bergen_TAN_SL_A"};
                text = "Ausrüstung abnehmen";
            };
        };
    };

    class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
        class ace_interaction_anims {
            class Gear_Hide {
                positions[] = {{-1.25, -1.6, -1.1},{1.1, -1.6, -1.1}, {1.1, 0, -0.7}};
                items[] = {"ACE_EntrenchingTool", "Land_CanisterFuel_F", "Land_CanisterFuel_F", "UK3CB_BAF_B_Bergen_TAN_Rifleman_A", "UK3CB_BAF_B_Bergen_TAN_Rifleman_B", "UK3CB_BAF_B_Bergen_TAN_SL_A"};
                text = "Ausrüstung abnehmen";
            };
        };
    };
};
