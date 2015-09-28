/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
	class TTT_Truppfahrzeug_Mg_Desert : BW_Dingo_Des {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Desert";
		displayName = "TTT Truppfahrzeug MG (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
			//Werfer
			class _xx_rhs_weap_M136 {
				weapon = "rhs_weap_M136";
				count = 2;
			};
			
			class _xx_rhs_weap_fim92 {
				weapon = "rhs_weap_fim92";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
				count = 2;
			};
		};
		class TransportMagazines {
			
			//Standardmunition
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 10;
			};
			
				class _xx_rhsusf_200Rnd_556x45_soft_pouch {
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 4;
			};
			
			class _xx_rhsusf_100Rnd_762x51_m80a1epr {
				magazine = "rhsusf_100Rnd_762x51_m80a1epr";
				count = 5;
			};
			
			class _xx_rhsusf_mag_7x45acp_MHP {
				magazine = "rhsusf_mag_7x45acp_MHP";
				count = 6;
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
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 6;
			};
			
			class _xx_ACE_IR_Strobe_Item {
				magazine = "ACE_IR_Strobe_Item";
				count = 6;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};	
			
			//Stinger
			class _xx_rhs_fim92_mag {
				magazine = "rhs_fim92_mag";
				count = 2;
			};	
		};
		class TransportBackpacks {
			
		};
	};

	
	class TTT_Truppfahrzeug_Gl_Desert : BW_Dingo_GL_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Desert";
		displayName = "TTT Truppfahrzeug GL (Desert)";
		typicalCargo[] = {};

		class TransportWeapons {
			
			//Werfer
			class _xx_rhs_weap_M136 {
				weapon = "rhs_weap_M136";
				count = 2;
			};
			
			class _xx_rhs_weap_fim92 {
				weapon = "rhs_weap_fim92";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
				count = 2;
			};
		};
		class TransportMagazines {
			
			//Standardmunition
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 10;
			};
			
				class _xx_rhsusf_200Rnd_556x45_soft_pouch {
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 4;
			};
			
			class _xx_rhsusf_100Rnd_762x51_m80a1epr {
				magazine = "rhsusf_100Rnd_762x51_m80a1epr";
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
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 6;
			};
			
			class _xx_ACE_IR_Strobe_Item {
				magazine = "ACE_IR_Strobe_Item";
				count = 6;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};
			//Stinger
			class _xx_rhs_fim92_mag {
				magazine = "rhs_fim92_mag";
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
	
	class TTT_Oplfahrzeug_Desert : rhsusf_m998_w_4dr_fulltop {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles\us\desert\oplfahrzeug\camo10.paa"};
		crew = "TTT_Gelb1_Desert";
		displayName = "TTT OPL-Fahrzeug (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			//Sanitaetsmaterial
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
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
	### TTT Sanitaetsfahrzeug
	#############################################################
	*/
	
	class TTT_Sanitaetsfahrzeug_Desert : rhsusf_m998_d_2dr_fulltop {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetsfahrzeug\camo10.paa"};
		crew = "TTT_Weiss1_Desert";
		displayName = "TTT Sanitaetsfahrzeug (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			class _xx_ACE_atropine {
				name = "ACE_atropine";
				count = 10;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 20;
			};
			
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 20;
			};
			
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 20;
			};
			
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};
			
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 20;
			};
			
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 15;
			};
			
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
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
	### TTT Transporter leicht (offen)
	#############################################################
	*/
	
	class TTT_TransporterLeichtOffen_Desert : rhsusf_m998_w_2dr {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo4.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo5.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo6.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo7.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo8.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo9.paa", "\ttt_a3\ttt_vehicles\us\desert\transporterLeichtOffen\camo10.paa"};
		crew = "TTT_Schwarz1_Desert";
		displayName = "TTT Transporter leicht (offen) (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
				count = 2;
			};
		};
		class TransportMagazines {
			
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Schützenpanzer
	#############################################################
	*/
	
	class TTT_Schuetzenpanzer_Desert : RHS_M2A3_BUSKIII {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\schuetzenpanzer\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\schuetzenpanzer\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\schuetzenpanzer\camo3.paa", "\ttt_a3\ttt_vehicles\us\desert\schuetzenpanzer\camo4.paa"};
		crew = "TTT_Bronze1_Desert";
		displayName = "TTT Schuetzenpanzer (Desert)";
		typicalCargo[] = {};
		damageResistance = 0.02;
		radarType = 8;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		class TransportWeapons {
			
			//Werfer
			class _xx_rhs_weap_M136 {
				weapon = "rhs_weap_M136";
				count = 2;
			};			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
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
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 6;
			};
			
			class _xx_ACE_IR_Strobe_Item {
				magazine = "ACE_IR_Strobe_Item";
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
	
	class TTT_Kampfpanzer_Desert : rhsusf_m1a2sep1tuskiid_usarmy {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		// hiddenSelections sind noch nicht implementiert, deswegen muss mit model gearbeitet werden
		//hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\kampfpanzer\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\kampfpanzer\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\kampfpanzer\camo3.paa"};
		crew = "TTT_Bronze1_Desert";
		displayName = "TTT Kampfpanzer (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
			//Werfer
			class _xx_rhs_weap_M136 {
				weapon = "rhs_weap_M136";
				count = 2;
			};			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
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
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 6;
			};
			
			class _xx_ACE_IR_Strobe_Item {
				magazine = "ACE_IR_Strobe_Item";
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
	
	class TTT_Kampfhelikopter_Desert : RHS_AH64D {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\kampfhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\kampfhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\kampfhelikopter\camo3.paa"};
		crew = "TTT_Adler1_Desert";
		displayName = "TTT Kampfhelikopter (Desert)";
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
	
	class TTT_Sanitaetshelikopter_Desert : RHS_UH60M {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\sanitaetshelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetshelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\sanitaetshelikopter\camo3.paa"};
		crew = "TTT_Weiss3_Desert";
		displayName = "TTT Sanitaetshelikopter (Desert)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			class _xx_ACE_atropine {
				name = "ACE_atropine";
				count = 10;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 20;
			};
			
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 20;
			};
			
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 20;
			};
			
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};
			
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 20;
			};
			
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 15;
			};
			
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
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
	
	class TTT_Logistikhelikopter_Desert : RHS_CH_47F {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles\us\desert\logistikhelikopter\camo1.paa", "\ttt_a3\ttt_vehicles\us\desert\logistikhelikopter\camo2.paa", "\ttt_a3\ttt_vehicles\us\desert\logistikhelikopter\camo3.paa"};
		crew = "TTT_Bussard1_Desert";
		displayName = "TTT Logistikhelikopter (Desert)";
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
		
	/*
	#############################################################
	### TTT Aufklärungsdrohne
	#############################################################
	*/
	
	class TTT_Aufklaerungsdrohne_Desert : USAF_RQ4A {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_us";
		vehicleClass = "TTT_Vehicles_us";
		displayName = "TTT Aufklaerungsdrohne (Desert)";
	};
