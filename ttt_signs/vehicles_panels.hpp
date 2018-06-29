	class TTT_Panel_Base : NonStrategic {
		mapSize = 6;
		author = "$STR_Tactical_Training_Team";
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
	
	class TTT_Panel_Protection_180_4 : TTT_Panel_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "TTT Tafel 180°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_180sicherung_co.paa"};
	};
	
	class TTT_Panel_Protection_360_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 360°Sicherung(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_360sicherung_co.paa"};
	};
	
	class TTT_Panel_Column_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_kolonne_co.paa"};
	};
	
	class TTT_Panel_Wedge_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Keil(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_keil_co.paa"};
	};
	
	class TTT_Panel_Chain_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_kette_co.paa"};
	};
	
	class TTT_Panel_Stack_4 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Stack(4)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_4_stack_co.paa"};
	};
	
	class TTT_Panel_Protection_180_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 180°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_180sicherung_co.paa"};
	};
	
	class TTT_Panel_Protection_360_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel 360°Sicherung(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_360sicherung_co.paa"};
	};
	
	class TTT_Panel_Cain_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kette_co.paa"};
	};
	
	class TTT_Panel_Column_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_kolonne_co.paa"};
	};
	
	class TTT_Panel_Stack_6 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Stack(6)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_6_stack_co.paa"};
	};
	
	class TTT_Panel_Wedge_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Keil(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_keil_co.paa"};
	};
	
	class TTT_Panel_Chain_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kette(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_kette_co.paa"};
	};
	
	class TTT_Panel_Column_8 : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(8)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_8_kolonne_co.paa"};
	};
	
	class TTT_Panel_Column_Zug : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne(Zug)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_zug_kolonne_co.paa"};
	};
	
	class TTT_Panel_ColumnWide_Zug : TTT_Panel_Protection_180_4 {
		displayName = "TTT Tafel Kolonne Weit(Zug)";
		hiddenSelectionsTextures[] = {"\ttt_a3\ttt_signs\data\ttt_tafel_weit_zug_kolonne_co.paa"};
	};