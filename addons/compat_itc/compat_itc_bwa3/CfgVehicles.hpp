// Tank > Tank_F > BWA3_Panzerhaubitze2000_base

class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class ACE_SelfActions;
    };
    class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};
        class Turrets {
            class MainTurret;
        };
        class AnimationSources;
    };
    class BWA3_Panzerhaubitze2000_base: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
        class Turrets: Turrets {
                class MainTurret: MainTurret {};
        };
        class AnimationSources: AnimationSources {};
    };

    class BWA3_Panzerhaubitze2000_Fleck: BWA3_Panzerhaubitze2000_base {
        class ACE_SelfActions: ACE_SelfActions {};
        class AnimationSources: AnimationSources {};
        class Turrets: Turrets {
                class MainTurret: MainTurret { };
        };
    };
    class itc_land_bwa3_pzh2000: BWA3_Panzerhaubitze2000_Fleck {
        displayname = CSTRING(Panzerhaubitze2000Name1);
        scopeCurator = 2;
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = CSTRING(AmmoHandling);
                icon = "\itc_land_tablet\UI\tableticon256.paa";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
            class ITC_Land_CommanderTablet {
                displayName = CSTRING(MountetTablet);
                icon = "\itc_land_tablet\UI\arty-icon.paa";
                condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( commander _target ) == ACE_Player)";
                statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
            };
        };
        artilleryScanner = 0;
        class itc_land {
            loaderType = 1; // semi automatic
            tabletInterfaces[] = {"spg"};
            mountedTablet = "itc_land_tablet_spg";
            class fcs {
                tableList = "g_155";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "ITC_Land_RscAltGunnerSightSPH";
                weapons[] = {"itc_land_bwa3_weap_RH155"};
                magazines[] = {
                    mag_24("itc_land_pzh2000hex"),
                    mag_12("itc_land_pzh2000hex"),
                    mag_8("itc_land_pzh2000smo"),
                    mag_6("itc_land_pzh2000ill"),
                    mag_2("itc_land_pzh2000mat"),
                    mag_4("itc_land_pzh2000pgm"),
                    mag_4("itc_land_pzh2000lgm")
                };
                lockWhenVehicleSpeed= 5;
                maxHorizontalRotSpeed = "((360/30)/45)";
            };
        };
        class AnimationSources: AnimationSources {};
    };
    class BWA3_Panzerhaubitze2000_Tropen: BWA3_Panzerhaubitze2000_base {
        class ACE_SelfActions: ACE_SelfActions {};
        class AnimationSources: AnimationSources {};
        class Turrets: Turrets {
                class MainTurret: MainTurret { };
        };
    };
    class itc_land_bwa3_pzh2000d: BWA3_Panzerhaubitze2000_Tropen {
        displayname = CSTRING(Panzerhaubitze2000Name2);
        scopeCurator = 2;
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = CSTRING(AmmoHandling);
                icon = "\itc_land_tablet\UI\tableticon256.paa";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
            class ITC_Land_CommanderTablet {
                displayName = CSTRING(MountetTablet);
                icon = "\itc_land_tablet\UI\arty-icon.paa";
                condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( commander _target ) == ACE_Player)";
                statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
            };
        };
    artilleryScanner = 0;
        class itc_land {
            loaderType = 1; // semi automatic
            tabletInterfaces[] = {"spg"};
            mountedTablet = "itc_land_tablet_spg";
            class fcs {
                tableList = "g_155";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "ITC_Land_RscAltGunnerSightSPH";
                weapons[] = {"itc_land_bwa3_weap_RH155"};
                magazines[] = {
                    mag_24("itc_land_pzh2000hex"),
                    mag_12("itc_land_pzh2000hex"),
                    mag_8("itc_land_pzh2000smo"),
                    mag_6("itc_land_pzh2000ill"),
                    mag_2("itc_land_pzh2000mat"),
                    mag_4("itc_land_pzh2000pgm"),
                    mag_4("itc_land_pzh2000lgm")
                };
                lockWhenVehicleSpeed= 5;
                maxHorizontalRotSpeed = "((360/30)/45)";
            };
        };
        class AnimationSources: AnimationSources {};
    };
};
