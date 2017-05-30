class CfgPatches {
	class ttt_signs {
		requiredAddons[] = {"ttt_main"};
		units[] = {
			"TTT_Flagge_Logo",
			"TTT_Flagge_Blau",
			"TTT_Flagge_Braun",
			"TTT_Flagge_Bronze",
			"TTT_Flagge_Gelb",
			"TTT_Flagge_Gold",
			"TTT_Flagge_Gruen",
			"TTT_Flagge_Rot",
			"TTT_Flagge_Schwarz",
			"TTT_Flagge_Silber",
			"TTT_Flagge_Platin",
			"TTT_Flagge_Violett",
			"TTT_Flagge_Weiss",
			"TTT_Notizschild_Blau",
			"TTT_Notizschild_Bronze",
			"TTT_Notizschild_Braun",
			"TTT_Notizschild_Gelb",
			"TTT_Notizschild_Gold",
			"TTT_Notizschild_Grau",
			"TTT_Notizschild_Gruen",
			"TTT_Notizschild_Rot",
			"TTT_Notizschild_Schwarz",
			"TTT_Notizschild_Silber",
			"TTT_Notizschild_Platin",
			"TTT_Notizschild_Violett",
			"TTT_Notizschild_Weiss",
			"TTT_Notizschild_Logo",
			"TTT_Schild_Blau",
			"TTT_Schild_Bronze",
			"TTT_Schild_Braun",
			"TTT_Schild_Gelb",
			"TTT_Schild_Gold",
			"TTT_Schild_Grau",
			"TTT_Schild_Gruen",
			"TTT_Schild_Rot",
			"TTT_Schild_Schwarz",
			"TTT_Schild_Silber",
			"TTT_Schild_Platin",
			"TTT_Schild_Violett",
			"TTT_Schild_Weiss",
			"TTT_Schild_Logo",
			"TTT_Tafel_4_180Sicherung",
			"TTT_Tafel_4_360Sicherung",
			"TTT_Tafel_4_Kolonne",
			"TTT_Tafel_6_180Sicherung",
			"TTT_Tafel_6_360Sicherung",
			"TTT_Tafel_6_Kette",
			"TTT_Tafel_6_Kolonne",
			"TTT_Tafel_6_Stack",
			"TTT_Tafel_Zug_Kolonne"
			};
		weapons[] = {};
	};
};

class CfgVehicleClasses {
	class ttt_flags {
		displayName = "TTT Flaggen"; 		
		priority = 25; 						
	};
	class ttt_noticboards {
		displayName = "TTT Notizschilder";
		priority = 26;
	};
	class ttt_signs {
		displayName = "TTT Schilder"; 		
		priority = 27; 						
	};
	class ttt_boards {
		displayName = "TTT Tafeln"; 		
		priority = 28; 						
	};	
};

class CfgVehicles {
	#include "\ttt_a3\ttt_signs\vehicles_flags.hpp"
	#include "\ttt_a3\ttt_signs\vehicles_notizschilder.hpp"
	#include "\ttt_a3\ttt_signs\vehicles_signs.hpp"
	#include "\ttt_a3\ttt_signs\vehicles_tafeln.hpp"
};