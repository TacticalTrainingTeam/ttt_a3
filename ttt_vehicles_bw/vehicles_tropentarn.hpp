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
		hiddenSelectionsTextures[] = {
			"\ttt_a3\ttt_vehicles_bw\truppfahrzeug_tropentarn_camo1.paa", 
			"", 
			"", 
			""};	
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug MG (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
		};
	};

	
    class TTT_Truppfahrzeug_Gl_Bw_Tropentarn : CUP_B_Dingo_GL_Wdl {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		hiddenSelectionsTextures[] = {
			"\ttt_a3\ttt_vehicles_bw\truppfahrzeug_tropentarn_camo1.paa", 
			"", 
			"", 
			""};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT Truppfahrzeug GL (BW Tropentarn)";
		typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
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
		hiddenSelectionsTextures[] = {
			"", 
			"", 
			"", 
			"", 
			"", 
			"", 
			"", 
			"", 
			"\ttt_a3\ttt_vehicles_bw\oplfahrzeug_camo9.paa", 
			""};
		crew = "TTT_Schwarz1_Bw_Tropentarn";
		displayName = "TTT OPL-Fahrzeug (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {		
		};	
		class TransportBackpacks {
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
        crew = "TTT_Weiss1_Bw_Tropentarn";
        displayName = "TTT Sanitaetsfahrzeug (BW Tropentarn)";
        typicalCargo[] = {};

        class TransportWeapons {

        };
        class TransportItems {
			item_xx(ToolKit,1);
			//Sanitaetsmaterial
			item_xx(ACE_packingBandage,20);
			item_xx(ACE_elasticBandage,20);
			item_xx(ACE_fieldDressing,20);
			item_xx(ACE_quikclot,15);
			item_xx(ACE_atropine,10);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);
			item_xx(ACE_salineIV,15);
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
        crew = "TTT_Schwarz1_Bw_Tropentarn";
        displayName = "TTT Transporter leicht (offen) (BW Tropentarn)";
        typicalCargo[] = {};
        ace_cargo_space = 8;

        class TransportWeapons {
        };
        class TransportItems {
			item_xx(ToolKit,1);
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
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Schuetzenpanzer (BW Tropentarn)";
		typicalCargo[] = {};
		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
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
		crew = "TTT_Bronze1_Bw_Tropentarn";
		displayName = "TTT Kampfpanzer (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {	
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
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
		crew = "TTT_Adler1_Bw_Tropentarn";
		displayName = "TTT Kampfhelikopter (BW Tropentarn)";
		typicalCargo[] = {};
		accuracy=1000;

		class TransportWeapons {	
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {	
		};
		class TransportBackpacks {
			backpack_xx(B_Parachute,2);
		};
	};
	
	/*
	#############################################################
	### TTT Sanitaetshelikopter
	#############################################################
	*/
	
    class TTT_Sanitaetshelikopter_Bw_Tropentarn : NH90Armed {
		author = "Tactical Training Team";
		scope = 2;
		faction = "TTT_faction_Bw";
		vehicleClass = "TTT_Vehicles_Bw";
		crew = "TTT_Weiss3_Bw_Tropentarn";
		displayName = "TTT Sanitaetshelikopter (BW Tropentarn)";
		typicalCargo[] = {};
		
		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
			//Sanitaetsmaterial
			item_xx(ACE_packingBandage,20);
			item_xx(ACE_elasticBandage,20);
			item_xx(ACE_fieldDressing,20);
			item_xx(ACE_quikclot,15);
			item_xx(ACE_atropine,10);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);
			item_xx(ACE_salineIV,15);
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
		crew = "TTT_Bussard1_Bw_Tropentarn";
		displayName = "TTT Logistikhelikopter (BW Tropentarn)";
		typicalCargo[] = {};
        ace_cargo_space = 16;

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {	
		};
		class TransportBackpacks {
			backpack_xx(B_Parachute,30);
		};
	};

    /*
    #############################################################
    ### TTT Transporthelikopter
    #############################################################
    */

    class TTT_Transporthelikopter_Bw_Tropentarn : NH90Armed {
        author = "Tactical Training Team";
        scope = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        crew = "TTT_Habicht1_Bw_Tropentarn";
        displayName = "TTT Transporthelikopter (BW Tropentarn)";
        typicalCargo[] = {};
        weapons[] = { "CMFlareLauncher" };
        magazines[] = { "300Rnd_CMFlare_Chaff_Magazine" };
        LockDetectionSystem = 2 + 8 + 4;
        incomingMissileDetectionSystem = 16;
        ace_cargo_space = 8;

        class TransportWeapons {
        };
        class TransportItems {
			item_xx(ToolKit,1);
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


    /*
    #############################################################
    ### TTT Jet
    #############################################################
    */

    class TTT_Kampfjet_Bw_Tropentarn : EAWS_EF2000_GER_SS {
        author = "Tactical Training Team";
        scope = 2;
        scopeCurator = 2;
        faction = "TTT_faction_Bw";
        vehicleClass = "TTT_Vehicles_Bw";
        displayName = "TTT Kampfjet (BW Tropentarn)";
        crew = "TTT_Platin1_Bw_Tropentarn";
        typicalCargo[] = {};

		class TransportWeapons {
		};
		class TransportItems {
			item_xx(ToolKit,1);
		};
		class TransportMagazines {
		};
		class TransportBackpacks {
			backpack_xx(B_Parachute,1);
		};		
    };
