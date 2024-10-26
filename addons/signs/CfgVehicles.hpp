class CfgVehicleClasses {
	class TTT_Flags {
		displayName = "TTT Flaggen"; 		
		priority = 25; 						
	};
	class signs_Small {
		displayName = "TTT Schilder (klein)";
		priority = 26;
	};
	class signs_Large {
		displayName = "TTT Schilder (groß)"; 		
		priority = 27; 						
	};
};

class CfgVehicles {
	/*
	#############################################################
	### Flaggen
	#############################################################
	*/
	class FlagCarrierCore;
	class TTT_Flag_Base : FlagCarrierCore {
		author = "Tactical Training Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Flagge Base";
		model = "\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		vehicleClass = "TTT_Flags";
		icon = "iconObject_circle";
		keepHorizontalPlacement = 1;
		accuracy = 1000;
		animated = 0;
		nameSound = "obj_flag";
		supplyRadius = 2;
	};

	class TTT_Flag_Logo : TTT_Flag_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Flagge Logo";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_sign_co.paa'";
		};
	};

	class TTT_Flag_Blue : TTT_Flag_Logo {
		displayName = "TTT Flagge Blau";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_blau_co.paa'";
		};
	};

	class TTT_Flag_Brown : TTT_Flag_Logo {
		displayName = "TTT Flagge Braun";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_braun_co.paa'";
		};
	};

	class TTT_Flag_Bronze : TTT_Flag_Logo {
		displayName = "TTT Flagge Bronze";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_bronze_co.paa'";
		};
	};

	class TTT_Flag_Yellow : TTT_Flag_Logo {
		displayName = "TTT Flagge Gelb";
		
		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_gelb_co.paa'";
		};
	};

	class TTT_Flag_Gold : TTT_Flag_Logo {
		displayName = "TTT Flagge Gold";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_gold_co.paa'";
		};
	};

	class TTT_Flag_Grey : TTT_Flag_Logo {
		displayName = "TTT Flagge Grau";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_grau_co.paa'";
		};
	};

	class TTT_Flag_Green : TTT_Flag_Logo {
		displayName = "TTT Flagge Gruen";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_gruen_co.paa'";
		};
	};

	class TTT_Flag_Platinum : TTT_Flag_Logo {
		displayName = "TTT Flagge Platin";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_platin_co.paa'";
		};
	};

	class TTT_Flag_Red : TTT_Flag_Logo {
		displayName = "TTT Flagge Rot";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_rot_co.paa'";
		};
	};

	class TTT_Flag_Black : TTT_Flag_Logo {
		displayName = "TTT Flagge Schwarz";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_schwarz_co.paa'";
		};
	};

	class TTT_Flag_Silver : TTT_Flag_Logo {
		displayName = "TTT Flagge Silber";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_silber_co.paa'";
		};
	};

	class TTT_Flag_Violet : TTT_Flag_Logo {
		displayName = "TTT Flagge Violett";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_violett_co.paa'";
		};
	};

	class TTT_Flag_White : TTT_Flag_Logo {
		displayName = "TTT Flagge Weiss";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_weiss_co.paa'";
		};
	};

	class TTT_Flag_Orange : TTT_Flag_Logo {
		displayName = "TTT Flagge Orange";

		class EventHandlers {
			init = "(_this select 0) setFlagTexture '\signs\data\ttt_logo_orange_co.pa'";
		};
	};

	/*
	#############################################################
	### Schilder Klein
	#############################################################
	*/
	class NonStrategic;
	class TTT_Sign_Small_Base : NonStrategic {
		mapSize = 0.83;
		author = "Tactical Training Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT S Base";
		model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "signs_Small";
		destrType = "DestructWall";
		hiddenSelections[] = {"board"};
	};

	class TTT_Sign_Small_Blue : TTT_Sign_Small_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Schild Blau (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_blau_co.paa"};
	};

	class TTT_Sign_Small_Bronze : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Bronze (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_bronze_co.paa"};
	};

	class TTT_Sign_Small_Brown : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Braun (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_braun_co.paa"};
	};

	class TTT_Sign_Small_Yellow : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Gelb (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gelb_co.paa"};
	};

	class TTT_Sign_Small_Gold : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Gold (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gold_co.paa"};
	};

	class TTT_Sign_Small_Grey : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Grau (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_grau_co.paa"};
	};

	class TTT_Sign_Small_Green : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Grün (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gruen_co.paa"};
	};

	class TTT_Sign_Small_Platinum : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Platin (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_platin_co.paa"};
	};

	class TTT_Sign_Small_Red : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Rot (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_rot_co.paa"};
	};

	class TTT_Sign_Small_Black : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Schwarz (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Sign_Small_Silver : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Silber (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_silber_co.paa"};
	};

	class TTT_Sign_Small_Violet : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Violett (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_violett_co.paa"};
	};

	class TTT_Sign_Small_White : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Weiss (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_weiss_co.paa"};
	};

	class TTT_Sign_Small_Logo : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Logo (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_sign_co.paa"};
	};

	class TTT_Sign_Small_Orange : TTT_Sign_Small_Blue {
		displayName = "TTT Schild Orange (klein)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_orange_co.paa"};
	};

	/*
	#############################################################
	### Schilder (groß)
	#############################################################
	*/
	class TTT_Sign_Large_Base : NonStrategic {
		mapSize = 0.83;
		author = "Tactical Training Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Schild Base";
		model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "signs_large";
		destrType = "DestructWall";
		hiddenSelections[] = {"camo"};
	};

	class TTT_Sign_Large_Blue : TTT_Sign_Large_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Schild Blau (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_blau_co.paa"};
	};

	class TTT_Sign_Large_Bronze : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Bronze (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_bronze_co.paa"};
	};

	class TTT_Sign_Large_Brown : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Braun (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_braun_co.paa"};
	};

	class TTT_Sign_Large_Yellow : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Gelb (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gelb_co.paa"};
	};

	class TTT_Sign_Large_Gold : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Gold (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gold_co.paa"};
	};

	class TTT_Sign_Large_Grey : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Grau (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_grau_co.paa"};
	};

	class TTT_Sign_Large_Green : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Grün (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_gruen_co.paa"};
	};

	class TTT_Sign_Large_Platinum : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Platin (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Sign_Large_Red : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Rot (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_rot_co.paa"};
	};

	class TTT_Sign_Large_Black : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Schwarz (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_schwarz_co.paa"};
	};

	class TTT_Sign_Large_Silver : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Silber (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_silber_co.paa"};
	};

	class TTT_Sign_Large_Violet : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Violett (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_violett_co.paa"};
	};

	class TTT_Sign_Large_White : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Weiss (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_weiss_co.paa"};
	};

	class TTT_Sign_Large_Logo : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Logo (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_sign_co.paa"};
	};

	class TTT_Sign_Large_Orange : TTT_Sign_Large_Blue {
		displayName = "TTT Schild Orange (groß)";
		hiddenSelectionsTextures[] = {"\signs\data\ttt_logo_orange_co.paa"};
	};
};