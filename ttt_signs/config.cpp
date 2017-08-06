class CfgPatches {
	class ttt_signs {
		requiredAddons[] = {"ttt_main"};
		units[] = {
			"TTT_Flag_Logo",
			"TTT_Flag_Blue",
			"TTT_Flag_Brown",
			"TTT_Flag_Bronze",
			"TTT_Flag_Yellow",
			"TTT_Flag_Gold",
			"TTT_Flag_Green",
			"TTT_Flag_Red",
			"TTT_Flag_Black",
			"TTT_Flag_Silver",
			"TTT_Flag_Platinum",
			"TTT_Flag_Violet",
			"TTT_Flag_White",
			"TTT_Sign_Small_Blue",
			"TTT_Sign_Small_Bronze",
			"TTT_Sign_Small_Brown",
			"TTT_Sign_Small_Yellow",
			"TTT_Sign_Small_Gold",
			"TTT_Sign_Small_Grey",
			"TTT_Sign_Small_Green",
			"TTT_Sign_Small_Red",
			"TTT_Sign_Small_Black",
			"TTT_Sign_Small_Silver",
			"TTT_Sign_Small_Platinum",
			"TTT_Sign_Small_Violet",
			"TTT_Sign_Small_White",
			"TTT_Sign_Small_Logo",
			"TTT_Sign_Blue",
			"TTT_Sign_Bronze",
			"TTT_Sign_Brown",
			"TTT_Sign_Yellow",
			"TTT_Sign_Gold",
			"TTT_Sign_Grey",
			"TTT_Sign_Green",
			"TTT_Sign_Red",
			"TTT_Sign_Black",
			"TTT_Sign_Silver",
			"TTT_Sign_Platinum",
			"TTT_Sign_Violet",
			"TTT_Sign_White",
			"TTT_Sign_Logo",
			"TTT_Panel_Protection_180_4",
			"TTT_Panel_Protection_180_6",
			"TTT_Panel_Protection_360_4",
			"TTT_Panel_Protection_360_6",
			"TTT_Panel_Column_4",
			"TTT_Panel_Column_6",
			"TTT_Panel_Column_Zug",
			"TTT_Panel_Cain_6",
			"TTT_Panel_Stack_6"
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