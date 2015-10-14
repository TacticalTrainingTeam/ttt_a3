	class NonStrategic;
	class TTT_Notizschild_Base : NonStrategic {
		mapSize = 0.83;
		author = "Tactical Training Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Notizschild Base";
		model = "\A3\Structures_F\Civ\InfoBoards\Noticeboard_F.p3d";
		icon = "iconObject_4x1";
		vehicleClass = "ttt_noticboards";
		destrType = "DestructWall";
		hiddenSelections[] = {"board"};
	};
	class TTT_Notizschild_Blau : TTT_Notizschild_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Notizschild Blau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_blau_co.paa"};
	};
	class TTT_Notizschild_Bronze : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Bronze";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_bronze_co.paa"};
	};
	class TTT_Notizschild_Braun : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Braun";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_braun_co.paa"};
	};
	class TTT_Notizschild_Gelb : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Gelb";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_gelb_co.paa"};
	};
	class TTT_Notizschild_Gold : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Gold";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_gold_co.paa"};
	};
	class TTT_Notizschild_Grau : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Grau";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_grau_co.paa"};
	};
	class TTT_Notizschild_Gruen : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Gruen";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_gruen_co.paa"};
	};
	class TTT_Notizschild_Rot : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Rot";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_rot_co.paa"};
	};
	class TTT_Notizschild_Schwarz : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Schwarz";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_schwarz_co.paa"};
	};
	class TTT_Notizschild_Silber : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Silber";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_silber_co.paa"};
	};
	class TTT_Notizschild_Violett : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Violett";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_violett_co.paa"};
	};
	class TTT_Notizschild_Weiss : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Weiss";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_weiss_co.paa"};
	};
	class TTT_Notizschild_Logo : TTT_Notizschild_Blau {
		displayName = "TTT Notizschild Logo";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\ttt_logos\ttt_logo_co.paa"};
	};