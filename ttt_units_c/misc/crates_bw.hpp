	/*
	#############################################################
	### Logistik-Kisten
	#############################################################
	*/
	
	class TTT_Logistik_Waffen_bw : Box_NATO_Wps_F {
		author = "Tactical Training Team";
		displayName = "TTT Waffen (BW)";
		transportMaxWeapons = 7;
		transportMaxMagazines = 0;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			class _xx_BWA3_G36_equipped {
				weapon = "BWA3_G36_equipped";
				count = 4;
			};
			
			class _xx_BWA3_MG5_Tan_equipped {
				weapon = "BWA3_MG5_Tan_equipped";
				count = 1;
			};
			
			class _xx_BWA3_MG4_equipped {
				weapon = "BWA3_MG4_equipped";
				count = 1;
			};
			
			class _xx_BWA3_G36_AG_equipped {
				weapon = "BWA3_G36_AG_equipped";
				count = 2;
			};
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Spezialwaffen_bw : Box_NATO_WpsSpecial_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialwaffen";
		transportMaxWeapons = 3;
		transportMaxMagazines = 0;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
			class _xx_BWA3_G27_AG_equipped {
				weapon = "BWA3_G27_AG_equipped";
				count = 1;
			};
			
			class _xx_BWA3_G28_Standard_equipped {
				weapon = "BWA3_G28_Standard_equipped";
				count = 1;
			};
			
			class _xx_srifle_LRR_LRPS_F {
				weapon = "srifle_LRR_LRPS_F";
				count = 1;
			};
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Standardmunition_bw : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Standardmunition";
		transportMaxWeapons = 0;
		transportMaxMagazines = 92;
		
		class TransportMagazines {
			class _xx_BWA3_30Rnd_556x45_G36_AP {
				magazine = "BWA3_30Rnd_556x45_G36_AP";
				count = 36;
			};
			
			class _xx_BWA3_120Rnd_762x51 {
				magazine = "BWA3_120Rnd_762x51";
				count = 4;
			};
			
			class _xx_BWA3_200Rnd_556x45 {
				magazine = "BWA3_200Rnd_556x45";
				count = 4;
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
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Spezialmunition_bw : Box_NATO_Ammo_F {
		author = "Tactical Training Team";
		displayName = "TTT Spezialmunition";
		transportMaxWeapons = 0;
		transportMaxMagazines = 60;
		
		class TransportMagazines {
			class _xx_BWA3_30Rnd_556x45_G36_SD {
				magazine = "BWA3_30Rnd_556x45_G36_SD";
				count = 24;
			};
			
			class _xx_BWA3_20Rnd_762x51_G28_AP {
				magazine = "BWA3_20Rnd_762x51_G28_AP";
				count = 6;
			};
			
			class _xx_BWA3_20Rnd_762x51_G28_SD {
				magazine = "BWA3_20Rnd_762x51_G28_SD";
				count = 6;
			};
			
			class _xx_BWA3_10Rnd_762x51_G28_AP {
				magazine = "BWA3_10Rnd_762x51_G28_AP";
				count = 6;
			};
			
			class _xx_BWA3_10Rnd_762x51_G28_SD {
				magazine = "BWA3_10Rnd_762x51_G28_SD";
				count = 6;
			};
			
			class _xx_BWA3_10Rnd_762x51_G28_LR {
				magazine = "BWA3_10Rnd_762x51_G28_LR";
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
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Pionierausruestung_bw : Box_NATO_AmmoOrd_F {
		author = "Tactical Training Team";
		displayName = "TTT Pionierausruestung (BW)";
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
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Granaten_bw : Box_NATO_Grenades_F {
		author = "Tactical Training Team";
		displayName = "TTT Granaten (BW)";
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
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 12;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Ausruestung_bw : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Ausruestung (BW)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 6;
		
		class TransportMagazines {
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 1;
			};
		};
		
		class TransportWeapons {
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
			
			class _xx_BWA3_muzzle_snds_G28 {
				name = "BWA3_muzzle_snds_G28";
				count = 1;
			};
			
			class _xx_BWA3_muzzle_snds_G36 {
				name = "BWA3_muzzle_snds_G36";
				count = 6;
			};
			
			class _xx_BWA3_acc_LLM01_irlaser {
				name = "BWA3_acc_LLM01_irlaser";
				count = 6;
			};
			
			class _xx_BWA3_optic_NSA80 {
				name = "BWA3_optic_NSA80";
				count = 2;
			};
			
			class _xx_BWA3_optic_NSV600 {
				name = "BWA3_optic_NSV600";
				count = 6;
			};
			
			class _xx_BWA3_optic_20x50 {
				name = "BWA3_optic_20x50";
				count = 1;
			};
			
			class _xx_BWA3_optic_Shortdot {
				name = "BWA3_optic_Shortdot";
				count = 1;
			};
			
			class _xx_BWA3_optic_ZO4x30 {
				name = "BWA3_optic_ZO4x30";
				count = 6;
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
			
			class _xx_ACE_ATragMX {
				name = "ACE_ATragMX";
				count = 2;
			};
			
			class _xx_cse_ab_Kestrel4500 {
				name = "cse_ab_Kestrel4500";
				count = 2;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 3;
			};
			
			class _xx_ACE_UAVBattery {
				name = "ACE_UAVBattery";
				count = 2;
			};
		};
		
		class TransportBackpacks { 
			class _xx_TTT_Backpack_Funkerfac_Tropentarn {
				backpack = "TTT_Backpack_Funkerfac_Tropentarn";
				count = 1;
			};
			
			class _xx_TTT_Backpack_Funkerfac_Flecktarn {
				backpack = "TTT_Backpack_Funkerfac_Flecktarn";
				count = 1;
			};
			
			class _xx_B_UAV_01_backpack_F {
				backpack = "B_UAV_01_backpack_F";
				count = 1;
			};
		};
	};
	
	class TTT_Logistik_Werfer_bw : Box_NATO_WpsLaunch_F {
		author = "Tactical Training Team";
		displayName = "TTT Werfer BW";
		transportMaxWeapons = 4;
		transportMaxMagazines = 0;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
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
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Werfermunition_bw : Box_NATO_WpsLaunch_F {
		author = "Tactical Training Team";
		displayName = "TTT Werfermunition (BW)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 6;
		
		class TransportMagazines {
			class _xx_BWA3_Pzf3_IT {
				magazine = "BWA3_Pzf3_IT";
				count = 2;
			};
			
			class _xx_BWA3_Fliegerfaust_Mag {
				magazine = "BWA3_Fliegerfaust_Mag";
				count = 4;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
		};
	};
	
	class TTT_Logistik_Medic_bw : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Material (BW)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 1;
		
		class TransportMagazines {
			
		};
		
		class TransportWeapons {
		};
		
		class TransportBackpacks{
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
	
	class TTT_Logistik_Medic_Rucksaecke_bw : B_supplyCrate_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Rucksaecke (BW)";
		transportMaxWeapons = 0;
		transportMaxMagazines = 1;
		
		class TransportMagazines {
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {	
		};
		
		class TransportBackpacks {
			class _xx_TTT_Backpack_Gefechtssanitaeter_Flecktarn {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Flecktarn";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Gefechtssanitaeter_Tropentarn {
				backpack = "TTT_Backpack_Gefechtssanitaeter_Tropentarn";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Tropentarn {
				backpack = "TTT_Backpack_Feldarzt_Tropentarn";
				count = 4;			
			};
			
			class _xx_TTT_Backpack_Feldarzt_Flecktarn {
				backpack = "TTT_Backpack_Feldarzt_Flecktarn";
				count = 4;			
			};
		};
			
	};
