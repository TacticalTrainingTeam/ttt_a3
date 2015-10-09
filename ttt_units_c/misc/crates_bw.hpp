	/*
	#############################################################
	### Logistik-Kisten
	#############################################################
	*/
	
	class TTT_Logistik_Waffen_bw : Box_NATO_Wps_F {
		author = "Tactical Training Team";
		displayName = "TTT Waffen (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
				count = 6;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			
			class _xx_1Rnd_SmokeRed_Grenade_shell {
				count = 6;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				count = 12;
				magazine = "1Rnd_HE_Grenade_shell";
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
            class _xx_ACE_DefusalKit {
                name = "ACE_DefusalKit";
                count = 2;
            };
            class _xx_ACE_M26_Clacker {
                name = "ACE_M26_Clacker";
                count = 2;
            };
            class _xx_ACE_Clacker {
                name = "ACE_Clacker";
                count = 2;
            };
		};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Granaten_bw : Box_NATO_Grenades_F {
		author = "Tactical Training Team";
		displayName = "TTT Granaten (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
			
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
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
			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 12;
			};			};
		
		class TransportBackpacks{
		};
	};
	
	class TTT_Logistik_Ausruestung_bw : Box_NATO_Support_F {
		author = "Tactical Training Team";
		displayName = "TTT Ausruestung (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 1;
			};
		};
		
		class TransportWeapons {
		};
		
		class TransportItems {
			class _xx_ACE_microDAGR {
				name = "ACE_microDAGR";
				count = 1;
			};
			
			class _xx_Binocular {
				name = "Binocular";
				count = 5;
			};
			
			class _xx_ACE_Yardage450 {
				name = "ACE_Yardage450";
				count = 3;
			};
			
			class _xx_ACE_Vector {
				name = "ACE_Vector";
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
			
			class _xx_ACE_GD300_b {
				name = "ACE_GD300_b";
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
			
			class _xx_ACE_Kestrel4500 {
				name = "ACE_Kestrel4500";
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
		class TransportMagazines {
			
		};
		
		class TransportWeapons {
		};
		
		class TransportBackpacks{
		};
		
		class TransportItems {
			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 25;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 25;
			};
			
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 25;
			};

			class _xx_ACE_plasmaIV {
				name = "ACE_plasmaIV";
				count = 25;
			};
				
			class _xx_ACE_plasmaIV_500 {
				name = "ACE_plasmaIV_500";
				count = 25;
			};
				
			class _xx_ACE_plasmaIV_250 {
				name = "ACE_plasmaIV_250";
				count = 25;
			};
				
			class _xx_ACE_bloodIV {
				name = "ACE_bloodIV";
				count = 25;
			};
			
			class _xx_ACE_bloodIV_500 {
				name = "ACE_bloodIV_500";
				count = 25;
			};
				
			class _xx_ACE_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 25;
			};
				
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 25;
			};
				
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 25;
			};
				
			class _xx_ACE_salineIV_250 {
				name = "ACE_salineIV_250";
				count = 25;
			};
				
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 25;
			};
				
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 25;
			};
				
			class _xx_ACE_atropine {
				name = "ACE_atropine";
				count = 25;
			};
				
			class _xx_ACE_quikclot {
				name = "ACE_quikclot";
				count = 25;
			};
								
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 25;
			};
								
			class _xx_ACE_personalAidKit {
				name = "ACE_personalAidKit";
				count = 25;
			};
				
			class _xx_ACE_surgicalKit {
				name = "ACE_surgicalKit";
				count = 25;
			};
				
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 25;
			};
		};
	};
	
	class TTT_Logistik_Medic_Rucksaecke_bw : B_supplyCrate_F {
		author = "Tactical Training Team";
		displayName = "TTT Medic Rucksaecke (BW)";
		transportMaxWeapons = 99;
		transportMaxMagazines = 99;
		
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
