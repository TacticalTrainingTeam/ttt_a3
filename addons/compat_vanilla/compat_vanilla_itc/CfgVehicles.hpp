class NewTurret;
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_SelfActions;
    };
    class Car_F: Car {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class Truck_F: Car_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class Truck_02_base_F: Truck_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class Truck_02_MRL_base_F: Truck_02_base_F {
        class Turrets {
            class MainTurret: NewTurret {};
        };
        class AnimationSources;
        class ACE_SelfActions: ACE_SelfActions {};
    };
    class I_E_Truck_02_MRL_F: Truck_02_MRL_base_F {
        class ACE_SelfActions: ACE_SelfActions {};                
        class Turrets: Turrets {
                class MainTurret: MainTurret {};
        };
        class AnimationSources: AnimationSources {};
    };
    class itc_land_ldf_mlrs_zamak_he: I_E_Truck_02_MRL_F    {
        artilleryScanner = 0;
        scope = 2;
        scopeCurator = 2;
        displayName = SUBCSTRING(Zamak1);
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_MountedTablet {
                displayName = SUBCSTRING(MountedTablet);
                icon = "\itc_land_tablet\UI\tableticon256.paa";
                condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( gunner _target ) == ACE_Player)";
                statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
            };
        };
        class itc_land {
            tabletInterfaces[] = {"spg"};
            mountedTablet = "itc_land_tablet_mlrs";
            class fcs {
                tableList = "b_230";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"itc_land_230mm_mlrs"};
                magazines[] = {"itc_land_m230hex_12rnd"};
                maxHorizontalRotSpeed = "((360/30)/45)";
                turretInfoType = "ITC_Land_RscGunnerSightZamakMRLi";
            };
        };
        class AnimationSources: AnimationSources {
            class Missiles_revolving {
                source = "revolving";
                weapon = "itc_land_230mm_mlrs";
            };
        };

    };
    class itc_land_ldf_mlrs_zamak_pgm: I_E_Truck_02_MRL_F    {
        artilleryScanner = 0;
        scope = 2;
        scopeCurator = 2;
        displayName = SUBCSTRING(Zamak2);
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_MountedTablet {
                displayName = SUBCSTRING(MountedTablet);
                icon = "\itc_land_tablet\UI\tableticon256.paa";
                condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( gunner _target ) == ACE_Player)";
                statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
            };
        };
        class itc_land {
            tabletInterfaces[] = {"spg"};
            mountedTablet = "itc_land_tablet_mlrs";
            class fcs {
                tableList = "b_230";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"itc_land_230mm_mlrs"};
                magazines[] = {"itc_land_m230pgm_12rnd"};
                maxHorizontalRotSpeed = "((360/30)/45)";
                turretInfoType = "ITC_Land_RscGunnerSightZamakMRLi";
            };
        };
        class AnimationSources: AnimationSources {
            class Missiles_revolving {
                source = "revolving";
                weapon = "itc_land_230mm_mlrs";
            };
        };

    };
};
