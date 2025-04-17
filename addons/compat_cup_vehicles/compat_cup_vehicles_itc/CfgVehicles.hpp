// Tank > Tank_F > CUP_M270_HE_Base

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
	class CUP_M270_HE_Base: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_B_M270_HE_BAF_DES : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_B_M270_HE_BAF_WOOD : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_B_M270_HE_HIL : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_B_M270_HE_USA : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_B_M270_HE_USMC : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_I_M270_HE_RACS : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class CUP_I_M270_HE_AAF : CUP_M270_HE_Base {
        class ACE_SelfActions: ACE_SelfActions {};				
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class itc_land_cup_m270_ba_des_he: CUP_B_M270_HE_BAF_DES {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_ba_des_pgm: CUP_B_M270_HE_BAF_DES {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_ba_wood_he: CUP_B_M270_HE_BAF_WOOD {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_ba_wood_pgm: CUP_B_M270_HE_BAF_WOOD {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_hil_he: CUP_B_M270_HE_HIL {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_hil_pgm: CUP_B_M270_HE_HIL {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_usa_he: CUP_B_M270_HE_USA {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_usa_pgm: CUP_B_M270_HE_USA {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};	
	class itc_land_cup_m270_usmc_he: CUP_B_M270_HE_USMC {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_usmc_pgm: CUP_B_M270_HE_USMC {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_racs_he: CUP_I_M270_HE_RACS {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_racs_pgm: CUP_I_M270_HE_RACS {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_aaf_he: CUP_I_M270_HE_AAF {
		author = "Addi";
		displayName = SUBCSTRING(M230_HE_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230hex_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
	class itc_land_cup_m270_aaf_pgm: CUP_I_M270_HE_AAF {
		author = "Addi";
		displayName = SUBCSTRING(M230_PGM_VEHICLE);
		scope = 2;
		scopeCurator = 2;	
		artilleryScanner = 0;
		availableForSupportTypes[] = {"Artillery"};
        class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = SUBCSTRING(MountetTablet);
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
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightMLRS";
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/30)/45)";

				weapons[] = {"itc_land_cup_weap_mrls230"};
				magazines[] = {"itc_land_m230pgm_12rnd"};
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_cup_weap_mrls230";
			};
            class muzzle_hide_missiles {
                source = "reload";
                weapon = "itc_land_cup_weap_mrls230";
            };			
		};
	};
};
