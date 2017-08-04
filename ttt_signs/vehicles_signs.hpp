	class TTT_Schild_Base : NonStrategic {
		mapSize = 0.83;
		author = "$STR_Tactical_Training_Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Schild Base";
		model = "\A3\Signs_F\Signs_Ad\SignsAd_Sponsor_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "ttt_signs";
		destrType = "DestructWall";
		hiddenSelections[] = {"camo"};
	};
	class TTT_Schild_Blau : TTT_Schild_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Schild Blau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_blau_co.paa"};
	};
	class TTT_Schild_Bronze : TTT_Schild_Blau {
		displayName = "TTT Schild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_bronze_co.paa"};
	};
	class TTT_Schild_Braun : TTT_Schild_Blau {
		displayName = "TTT Schild Braun";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_braun_co.paa"};
	};
	class TTT_Schild_Gelb : TTT_Schild_Blau {
		displayName = "TTT Schild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gelb_co.paa"};
	};
	class TTT_Schild_Gold : TTT_Schild_Blau {
		displayName = "TTT Schild Gold";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gold_co.paa"};
	};
	class TTT_Schild_Grau : TTT_Schild_Blau {
		displayName = "TTT Schild Grau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_grau_co.paa"};
	};
	class TTT_Schild_Gruen : TTT_Schild_Blau {
		displayName = "TTT Schild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_gruen_co.paa"};
	};
	class TTT_Schild_Platin : TTT_Schild_Blau {
		displayName = "TTT Schild Platin";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_platin_co.paa"};
	};
	class TTT_Schild_Rot : TTT_Schild_Blau {
		displayName = "TTT Schild Rot";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_rot_co.paa"};
	};
	class TTT_Schild_Schwarz : TTT_Schild_Blau {
		displayName = "TTT Schild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_schwarz_co.paa"};
	};
	class TTT_Schild_Silber : TTT_Schild_Blau {
		displayName = "TTT Schild Silber";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_silber_co.paa"};
	};
	class TTT_Schild_Violett : TTT_Schild_Blau {
		displayName = "TTT Schild Violett";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_violett_co.paa"};
	};
	class TTT_Schild_Weiss : TTT_Schild_Blau {
		displayName = "TTT Schild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_weiss_co.paa"};
	};
	class TTT_Schild_Logo : TTT_Schild_Blau {
		displayName = "TTT Schild Logo";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa"};
	};