	/*
	#############################################################
	### Logistik-Kisten
	#############################################################
	*/
	
	class TTT_Logistik_Waffen_us : Box_NATO_Wps_F {
		author = "Tactical Training Team";
		displayName = "TTT Waffen (US)";
		transportMaxWeapons = 42;
		transportMaxMagazines = 0;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			class _xx_rhs_m4a1_grip_acog3 {
				weapon = "rhs_m4a1_grip_acog3";
				count = 4;
			};
			
			class _xx_rhs_weap_m240b_elcan {
				weapon = "rhs_weap_m240b_elcan";
				count = 1;
			};
			
			class _xx_rhs_weap_m249_pip_L{
				weapon = "rhs_weap_m249_pip_L";
				count = 1;
			};
			
			class _xx_rhs_m4a1_m320_acog3 {
				weapon = "rhs_m4a1_m320_acog3";
				count = 2;
			};
			
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Spezialwaffen_us : Box_NATO_WpsSpecial_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialwaffen (US)";
		transportMaxWeapons = 26;
		transportMaxMagazines = 0;
		
		class TransportMagazines {			
		};
		
		class TransportWeapons {
			
			class _xx_rhsusf_acc_LEUPOLDMK4 {
				weapon = "rhsusf_acc_LEUPOLDMK4";
				count = 1;
			};
			
			class _xx_rhs_m4a1_grip_acog3 {
				weapon = "rhs_m4a1_grip_acog3";
				count = 1;
			};
			
			class _xx_rhs_weap_sr25_ec {
				weapon = "rhs_weap_sr25_ec";
				count = 1;
			};
			
			class _xx_srifle_LRR_LRPS_F {
				weapon = "srifle_LRR_LRPS_F";
				count = 1;
			};	
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Standardmunition_us : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Standardmunition (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 88;
		
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 36;
			};
			
			class _xx_rhsusf_200Rnd_556x45_soft_pouch {
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 4;
			};
			
			class _xx_rhsusf_100Rnd_762x51_m80a1epr {
				magazine = "rhsusf_100Rnd_762x51_m80a1epr";
				count = 4;
			};
			
			class _xx_rhsusf_mag_7x45acp_MHP {
				magazine = "rhsusf_mag_7x45acp_MHP";
				count = 6;
			};
			
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 12;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 12;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				count = 12;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			
			class _xx_UGL_FlareRed_F {
				count = 12;
				magazine = "UGL_FlareRed_F";
			};			
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Spezialmunition_us : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialmunition (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 60;
		
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 24;
			};
			
			class _xx_rhsusf_20Rnd_762x51_m118_special_Mag {
				magazine = "rhsusf_20Rnd_762x51_m118_special_Mag";
				count = 6;
			};
			
			class _xx_7Rnd_408_Mag {
				magazine = "7Rnd_408_Mag";
				count = 6;
			};
			
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Pionierausruestung_us : Box_NATO_AmmoOrd_F {
		author = "Tactical Training Team";
		displayName = "TTT Pionierausruestung (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 12;
		
		class TransportMagazines {

			class _xx_APERSBoundingMine_Range_Mag {
				magazine = "APERSBoundingMine_Range_Mag";
				count = 4;
			};
			
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 4;
			};
			
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_MineDetector {
				name = "MineDetector";
				count = 2;
			};
			class _xx_Toolkit {
				name = "Toolkit";
				count = 2;
			};
		};
	};
	
	class TTT_Logistik_Granaten_us : Box_NATO_Grenades_F {
		author = "Tactical Training Team";
		displayName = "TTT Granaten (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 84;
		
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 12;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 12;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 12;
			};
			
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 12;
			};
			
			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 12;
			};
			
			class _xx_B_IR_Grenade {
				magazine = "B_IR_Grenade";
				count = 12;
			};
			
			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 12;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Ausruestung_us : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Ausruestung (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 6;
		
		class TransportMagazines {
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 1;
			};
		};
		
		class TransportWeapons {
			class _xx_rhsusf_acc_rotex5_grey {
				weapon = "rhsusf_acc_rotex5_grey";
				count = 6;
			};
			
			class _xx_rhsusf_acc_eotech_552 {
				weapon = "rhsusf_acc_eotech_552";
				count = 6;
			};
			
			class _xx_rhsusf_acc_harris_bipod {
				weapon = "rhsusf_acc_harris_bipod";
				count = 6;
			};			
			
			class _xx_rhsusf_acc_anpeq15_light {
				weapon = "rhsusf_acc_anpeq15_light";
				count = 6;
			};
			
			class _xx_rhsusf_acc_ACOG3 {
				weapon = "rhsusf_acc_ACOG3";
				count = 6;
			};
			
			class _xx_rhsusf_acc_ELCAN {
				weapon = "rhsusf_acc_ELCAN";
				count = 6;
			};
			
			class _xx_rhsusf_acc_SR25S {
				weapon = "rhsusf_acc_SR25S";
				count = 6;
			};		
		};
		
		class TransportItems {
			class _xx_BWA3_ItemNaviPad {
				name = "BWA3_ItemNaviPad";
				count = 1;
			};
			
			class _xx_Binocular {
				name = "Binocular";
				count = 5;
			};
			
			class _xx_Rangefinder {
				name = "Rangefinder";
				count = 1;
			};
			
			class _xx_Laserdesignator {
				name = "Laserdesignator";
				count = 1;
			};
			
			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 1;
			};
			
			class _xx_cse_m_tablet {
				name = "cse_m_tablet";
				count = 2;
			};
			
			
			class _xx_B_UavTerminal {
				name = "B_UavTerminal";
				count = 1;
			};
			
			class _xx_ItemMap {
				name = "ItemMap";
				count = 6;
			};
			
			class _xx_ItemCompass {
				name = "ItemCompass";
				count = 6;
			};
			
			class _xx_tf_anprc152 {
				name = "tf_anprc152";
				count = 6;
			};
			
			class _xx_cse_ab_ATragMX {
				name = "cse_ab_ATragMX";
				count = 2;
			};
			
			class _xx_cse_ab_Kestrel4500 {
				name = "cse_ab_Kestrel4500";
				count = 2;
			};
			
			class _xx_cse_Keycuffs {
				name = "cse_Keycuffs";
				count = 3;
			};
			
			class _xx_cse_battery_darter {
				name = "cse_battery_darter";
				count = 2;
			};
			
		};
		
		class TransportBackpacks { 
			class _xx_TTT_Backpack_Funkerfac_Desert {
				backpack = "TTT_Backpack_Funkerfac_Desert";
				count = 1;
			};
			
			class _xx_TTT_Backpack_Funkerfac_Woodland {
				backpack = "TTT_Backpack_Funkerfac_Woodland";
				count = 1;
			};
			
			class _xx_B_UAV_01_backpack_F {
				backpack = "B_UAV_01_backpack_F";
				count = 1;
			};
		};
	};
	
	class TTT_Logistik_Werfer_us : Box_NATO_WpsLaunch_F {
		author = "Tactical Training Team";
		displayName = "TTT Werfer (US)";
		transportMaxWeapons = 4;
		transportMaxMagazines = 2;
		
		class TransportMagazines {
			class _xx_rhs_fim92mag_{
				magazine= "rhs_fim92_mag";
				count = 2;
				
			}
		};
		
		class TransportWeapons {
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
		};
	};
		
	class TTT_Logistik_Medic_us : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Material (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 1;
		
		class TransportMagazines {
			
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_cse_bandage_basic {
				name = "cse_bandage_basic";
				count = 25;
			};
			
			class _xx_cse_packing_bandage {
				name = "cse_packing_bandage";
				count = 25;
			};
			
			class _xx_cse_tourniquet {
				name = "cse_tourniquet";
				count = 25;
			};

			class _xx_cse_plasma_iv {
				name = "cse_plasma_iv";
				count = 25;
			};
				
			class _xx_cse_plasma_iv_500 {
				name = "cse_plasma_iv_500";
				count = 25;
			};
				
			class _xx_cse_plasma_iv_250 {
				name = "cse_plasma_iv_250";
				count = 25;
			};
				
			class _xx_cse_blood_iv {
				name = "cse_blood_iv";
				count = 25;
			};
			
			class _xx_cse_blood_iv_500 {
				name = "cse_blood_iv_500";
				count = 25;
			};
				
			class _xx_cse_blood_iv_250 {
				name = "cse_blood_iv_250";
				count = 25;
			};
				
			class _xx_cse_saline_iv {
				name = "cse_saline_iv";
				count = 25;
			};
				
			class _xx_cse_saline_iv_500 {
				name = "cse_saline_iv_500";
				count = 25;
			};
				
			class _xx_cse_saline_iv_250 {
				name = "cse_saline_iv_250";
				count = 25;
			};
				
			class _xx_cse_morphine {
				name = "cse_morphine";
				count = 25;
			};
				
			class _xx_cse_epinephrine {
				name = "cse_epinephrine";
				count = 25;
			};
				
			class _xx_cse_atropine {
				name = "cse_atropine";
				count = 25;
			};
				
			class _xx_cse_quikclot {
				name = "cse_quikclot";
				count = 25;
			};
								
			class _xx_cse_bandageElastic {
				name = "cse_bandageElastic";
				count = 25;
			};
								
			class _xx_cse_personal_aid_kit {
				name = "cse_personal_aid_kit";
				count = 25;
			};
				
			class _xx_cse_surgical_kit {
				name = "cse_surgical_kit";
				count = 25;
			};
				
			class _xx_cse_itemBodyBag {
				name = "cse_itemBodyBag";
				count = 25;
			};
		};
	};
	
	class TTT_Logistik_Medic_Rucksaecke_us : B_supplyCrate_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Rucksaecke (US)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 1;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {	
		};
		
		class TransportBackpacks {
			class _xx_TTT_Backpack_Gefechtssanitaeter_Woodland {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Woodland";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Gefechtssanitaeter_Desert {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Desert";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Desert {
				backpack = "TTT_Backpack_Feldarzt_Desert";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Woodland {
				backpack = "TTT_Backpack_Feldarzt_Woodland";
				count = 4;			
			};
		};
			
	};