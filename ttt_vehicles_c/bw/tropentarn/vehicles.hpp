/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_Truppfahrzeug_Mg_Tropentarn : BW_Dingo_Des {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Tropentarn";
		displayName = "TTT Truppfahrzeug MG (Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};
			
			class _xx_BWA3_Fliegerfaust {
				weapon = "BWA3_Fliegerfaust";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 15;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 10;
			};
			
			class _xx_cse_battery_darter {
				name = "cse_battery_darter";
				count = 2;
			};
		};
		class TransportMagazines {
			
			//Standardmunition
			class _xx_BWA3_30Rnd_556x45_G36_AP {
				magazine = "BWA3_30Rnd_556x45_G36_AP";
				count = 10;
			};
			
			class _xx_BWA3_120Rnd_762x51 {
				magazine = "BWA3_120Rnd_762x51";
				count = 5;
			};
			
			class _xx_BWA3_200Rnd_556x45 {
				magazine = "BWA3_200Rnd_556x45";
				count = 5;
			};
			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 10;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 10;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			
			class _xx_UGL_FlareRed_F {
				count = 5;
				magazine = "UGL_FlareRed_F";
			};		
			
			//Spezialmunition
			class _xx_BWA3_30Rnd_556x45_G36_SD {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 10;
			};
				
			class _xx_7Rnd_408_Mag {
				magazine = "7Rnd_408_Mag";
				count = 6;
			};
			
			//Pionierausruestung			
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
			
			//Granaten
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 6;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 6;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 6;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 6;
			};
			
			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 6;
			};
			
			class _xx_B_IR_Grenade {
				magazine = "B_IR_Grenade";
				count = 6;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};
			
			//Werfermunition	
			class _xx_BWA3_Fliegerfaust_Mag {
				magazine = "BWA3_Fliegerfaust_Mag";
				count = 2;
			};		
		};
		class TransportBackpacks {
			
		};
	};

	
	class TTT_Truppfahrzeug_Gl_Tropentarn : BW_Dingo_GL_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Tropentarn";
		displayName = "TTT Truppfahrzeug GL (Tropentarn)";
		typicalCargo[] = {};

		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};
			
			class _xx_BWA3_Fliegerfaust {
				weapon = "BWA3_Fliegerfaust";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 15;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 10;
			};
			
			class _xx_cse_battery_darter {
				name = "cse_battery_darter";
				count = 2;
			};
		};
		class TransportMagazines {
			
			//Standardmunition
			class _xx_BWA3_30Rnd_556x45_G36_AP {
				magazine = "BWA3_30Rnd_556x45_G36_AP";
				count = 10;
			};
			
			class _xx_BWA3_120Rnd_762x51 {
				magazine = "BWA3_120Rnd_762x51";
				count = 5;
			};
			
			class _xx_BWA3_200Rnd_556x45 {
				magazine = "BWA3_200Rnd_556x45";
				count = 5;
			};
			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 10;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 10;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			
			class _xx_UGL_FlareRed_F {
				count = 5;
				magazine = "UGL_FlareRed_F";
			};		
			
			//Spezialmunition
			class _xx_BWA3_30Rnd_556x45_G36_SD {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 10;
			};
				
			class _xx_7Rnd_408_Mag {
				magazine = "7Rnd_408_Mag";
				count = 6;
			};
			
			//Pionierausruestung			
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
			
			//Granaten
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 6;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 6;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 6;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 6;
			};
			
			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 6;
			};
			
			class _xx_B_IR_Grenade {
				magazine = "B_IR_Grenade";
				count = 6;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};
			
			//Werfermunition			
			class _xx_BWA3_Fliegerfaust_Mag {
				magazine = "BWA3_Fliegerfaust_Mag";
				count = 2;
			};		
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT OPL-Fahrzeug
	#############################################################
	*/
	
	class TTT_Oplfahrzeug_Tropentarn : rhsusf_m998_w_4dr_fulltop {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\oplfahrzeug\camo9.paa"};
		crew = "TTT_Schwarz1_Tropentarn";
		displayName = "TTT OPL-Fahrzeug (Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			//Sanitaetsmaterial
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 15;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 10;
			};
			
			class _xx_cse_battery_darter {
				name = "cse_battery_darter";
				count = 2;
			};
		};
		class TransportMagazines {
			
		};
		
		class TransportBackpacks {
			class _xx_B_Mortar_01_support_F {
				backpack = "I_Mortar_01_support_F";
				count = 2;
			};
			class _xx_B_Mortar_01_weapon_F {
				backpack = "B_Mortar_01_weapon_F";
				count = 2;
			};
		};
	};
	
	/*
	#############################################################
	### TTT Schützenpanzer
	#############################################################
	*/
	
	class TTT_Schuetzenpanzer_Tropentarn : RHS_M2A3_BUSKIII {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\schuetzenpanzer\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\schuetzenpanzer\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\schuetzenpanzer\camo3.paa"};
		crew = "TTT_Bronze1_Tropentarn";
		displayName = "TTT Schuetzenpanzer (Tropentarn)";
		typicalCargo[] = {};
		damageResistance = 0.02;
		radarType = 8;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 15;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 10;
			};
		};
		class TransportMagazines {
			
			//Granaten
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 6;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 6;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 6;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 6;
			};
			
			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 6;
			};
			
			class _xx_B_IR_Grenade {
				magazine = "B_IR_Grenade";
				count = 6;
			};	
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
	class TTT_Kampfpanzer_Tropentarn : rhsusf_m1a2sep1tuskiid_usarmy {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		//hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\kampfpanzer\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\kampfpanzer\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\kampfpanzer\camo3.paa"};
		crew = "TTT_Bronze1_Tropentarn";
		displayName = "TTT Kampfpanzer (Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 15;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 10;
			};
		};
		class TransportMagazines {
	
			//Granaten
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 6;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 6;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 6;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 6;
			};
			
			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 6;
			};
			
			class _xx_B_IR_Grenade {
				magazine = "B_IR_Grenade";
				count = 6;
			};	
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
	class TTT_Kampfhelikopter_Tropentarn : RHS_AH64D {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\kampfhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\kampfhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\kampfhelikopter\camo3.paa"};
		crew = "TTT_Adler1_Tropentarn";
		displayName = "TTT Kampfhelikopter (Tropentarn)";
		typicalCargo[] = {};
		accuracy=1000;

		class TransportWeapons {
			
		};
		class TransportItems {
			
		};
		class TransportMagazines {
			
		};
		class TransportBackpacks {
			class _xx_B_Parachute{
				backpack = "B_Parachute";
				count = 2;
			};
		};
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/
	
	class TTT_Sanitaetshelikopter_Tropentarn : RHS_UH60M {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\sanitaetshelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\sanitaetshelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\sanitaetshelikopter\camo3.paa"};
		crew = "TTT_Weiss3_Tropentarn";
		displayName = "TTT Sanitaetshelikopter (Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			class _xx_cse_atropine {
				name = "cse_atropine";
				count = 10;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 20;
			};
			
			class _xx_cse_epinephrine {
				name = "cse_epinephrine";
				count = 20;
			};
			
			class _xx_cse_morphine {
				name = "cse_morphine";
				count = 20;
			};
			
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 20;
			};
			
			class _xx_cse_bandageElastic {
				name = "cse_bandageElastic";
				count = 20;
			};
			
			class _xx_cse_quikclot {
				name = "cse_quikclot";
				count = 15;
			};
			
			class _xx_cse_saline_iv {
				name = "cse_saline_iv";
				count = 15;
			};
		};
		class TransportMagazines {
			
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Logistikhelikopter
	#############################################################
	*/
	
	class TTT_Logistikhelikopter_Tropentarn : RHS_CH_47F {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_bw";
		vehicleClass = "TTT_Vehicles_bw";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\bw\tropentarn\logistikhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\logistikhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\bw\tropentarn\logistikhelikopter\camo3.paa"};
		crew = "TTT_Bussard1_Tropentarn";
		displayName = "TTT Logistikhelikopter (Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			
		};
		class TransportMagazines {
			
		};
		class TransportBackpacks {
			class _xx_B_Parachute{
				backpack = "B_Parachute";
				count = 30;
			};
		};
	};
