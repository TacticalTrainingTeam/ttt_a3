/*
	#############################################################
	### TTT Truppfahrzeug
	#############################################################
	*/
	
    class TTT_Truppfahrzeug_Mg_Bw_Tropentarn : CUP_B_Dingo_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug MG (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};
			
			class _xx_BWA3_Fliegerfabwt {
				weapon = "BWA3_Fliegerfabwt";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
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
            class _xx_ACE_IR_Strobe_Item {
                name = "ACE_IR_Strobe_Item";
                count = 6;
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
			
			//Pionierabwruestung			
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
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};
			
			//Werfermunition	
			class _xx_BWA3_Fliegerfabwt_Mag {
				magazine = "BWA3_Fliegerfabwt_Mag";
				count = 2;
			};		
		};
		class TransportBackpacks {
			
		};
	};

	
    class TTT_Truppfahrzeug_Gl_Bw_Tropentarn : CUP_B_Dingo_GL_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\truppfahrzeug\camo4.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug GL (BW Tropentarn)";
		typicalCargo[] = {};

		class TransportWeapons {
			
			//Werfer
			class _xx_BWA3_Pzf3 {
				weapon = "BWA3_Pzf3";
				count = 2;
			};
			
			class _xx_BWA3_Fliegerfabwt {
				weapon = "BWA3_Fliegerfabwt";
				count = 2;
			};
			
		};
		class TransportItems {
			
			//Sanitaetsmaterial
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
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
            class _xx_ACE_IR_Strobe_Item {
                name = "ACE_IR_Strobe_Item";
                count = 6;
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
			
			//Pionierabwruestung			
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
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 6;
			};
			
			//Werfermunition			
			class _xx_BWA3_Fliegerfabwt_Mag {
				magazine = "BWA3_Fliegerfabwt_Mag";
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
	
	class TTT_Oplfahrzeug_Bw_Tropentarn : rhsusf_m998_w_4dr_fulltop {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\oplfahrzeug\camo10.paa"};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT OPL-Fahrzeug (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
			
		};
		class TransportItems {
			//Sanitaetsmaterial
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
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

    class TTT_Sanitaetsfahrzeug_Bw_Tropentarn : rhsusf_m998_d_2dr_fulltop {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetsfahrzeug\camo10.paa" };
        crew = "TTT_Weiss1_Bw_Tropentarn";
        displayName = "TTT Sanitaetsfahrzeug (BW Tropentarn)";
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

            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
                count = 20;
            };

            class _xx_ACE_fieldDressing {
                name = "ACE_fieldDressing";
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

    class TTT_TransporterLeichtOffen_Bw_Tropentarn : rhsusf_m998_w_2dr {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo1.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo2.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo3.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo4.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo5.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo6.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo7.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo8.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo9.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporterLeichtOffen\camo10.paa" };
        crew = "TTT_Schwarz1_Bw_Tropentarn";
        displayName = "TTT Transporter leicht (offen) (BW Tropentarn)";
        typicalCargo[] = {};

        class TransportWeapons {

        };
        class TransportItems {
            class _xx_ACE_elasticBandage {
                name = "ACE_elasticBandage";
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
	
    class TTT_Schuetzenpanzer_Bw_Tropentarn : BWA3_Puma_Tropen {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\schuetzenpanzer\camo3_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Schuetzenpanzer (BW Tropentarn)";
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
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
            class _xx_ACE_IR_Strobe_Item {
                name = "ACE_IR_Strobe_Item";
                count = 6;
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
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Kampfpanzer
	#############################################################
	*/
	
    class TTT_Kampfpanzer_Bw_Tropentarn : BWA3_Leopard2A6M_Tropen {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo3_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo4_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfpanzer\camo5_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Kampfpanzer (BW Tropentarn)";
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
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 15;
			};
			
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 10;
			};
            class _xx_ACE_IR_Strobe_Item {
                name = "ACE_IR_Strobe_Item";
                count = 6;
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
		};
		class TransportBackpacks {
			
		};
	};
	
	/*
	#############################################################
	### TTT Kampfhelikopter
	#############################################################
	*/
	
    class TTT_Kampfhelikopter_Bw_Tropentarn : BWA3_Tiger_RMK_Universal {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo3_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo4_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo5_ca.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\kampfhelikopter\camo6_ca.paa", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)", "#(argb,8,8,3)color(0,0,0,0,CO)" };
		crew = "TTT_Adler1_Bw_Tropentarn";
		displayName = "TTT Kampfhelikopter (BW Tropentarn)";
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
	
    class TTT_Sanitaetshelikopter_Bw_Tropentarn : CUP_B_UH1D_GER_KSK {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetshelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetshelikopter\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\sanitaetshelikopter\camo3_co.paa"};
		crew = "TTT_Weiss3_Bw_Tropentarn";
		displayName = "TTT Sanitaetshelikopter (BW Tropentarn)";
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
	
    class TTT_Logistikhelikopter_Bw_Tropentarn : CUP_B_CH53E_GER {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_vehicles_bw\tropentarn\logistikhelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\logistikhelikopter\camo2_co.paa"};
		crew = "TTT_Bussard1_Bw_Tropentarn";
		displayName = "TTT Logistikhelikopter (BW Tropentarn)";
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
    ### TTT Transporthelikopter
    #############################################################
    */

    class TTT_Transporthelikopter_Bw_Tropentarn : CUP_B_UH1D_GER_KSK_Des {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        hiddenSelectionsTextures[] = { "\ttt_a3\ttt_vehicles_bw\tropentarn\transporthelikopter\camo1_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporthelikopter\camo2_co.paa", "\ttt_a3\ttt_vehicles_bw\tropentarn\transporthelikopter\camo3_co.paa" };
        crew = "TTT_Habicht1_Bw_Tropentarn";
        displayName = "TTT Transporthelikopter (BW Tropentarn)";
        typicalCargo[] = {};

        class TransportWeapons {

        };
        class TransportItems {

        };
        class TransportMagazines {

        };
        class TransportBackpacks {

        };
    };


    /*
    #############################################################
    ### TTT Aufklärungsdrohne
    #############################################################
    */

    class TTT_Aufklaerungsdrohne_Bw_Tropentarn : CUP_B_USMC_MQ9 {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        displayName = "TTT Aufklaerungsdrohne (BW Tropentarn)";
    };
