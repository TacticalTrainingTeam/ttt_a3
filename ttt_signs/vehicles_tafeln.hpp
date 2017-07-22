	class TTT_Tafel_Base : NonStrategic {
		mapSize = 6;
		author = "Tactical Training Team";
		scope = 0;
		scopeCurator = 0;
		displayName = "TTT Tafel Base";
		model = "\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		icon = "iconObject_5x1";
		vehicleClass = "ttt_boards";
		destrType = "DestructWall";
		cost = 500;
		keepHorizontalPlacement = 1;
		hiddenSelections[] = {"camo"};
	};
	
	class TTT_Tafel_4_180Sicherung : TTT_Tafel_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Tafel 180°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_180sicherung_co.paa"};
	};
	
	class TTT_Tafel_4_360Sicherung : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel 360°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_360sicherung_co.paa"};
	};
	
	class TTT_Tafel_4_Kolonne : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel Kolonne(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_kolonne_co.paa"};
	};
	
	class TTT_Tafel_6_180Sicherung : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel 180°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_180sicherung_co.paa"};
	};
	
	class TTT_Tafel_6_360Sicherung : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel 360°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_360sicherung_co.paa"};
	};
	
	class TTT_Tafel_6_Kette : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel Kette(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kette_co.paa"};
	};
	
	class TTT_Tafel_6_Kolonne : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel Kolonne(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kolonne_co.paa"};
	};
	
	class TTT_Tafel_6_Stack : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel Stack(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_stack_co.paa"};
	};
		
	class TTT_Tafel_Zug_Kolonne : TTT_Tafel_4_180Sicherung {
		displayName = "TTT Tafel Kolonne(Zug)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_zug_kolonne_co.paa"};
	};