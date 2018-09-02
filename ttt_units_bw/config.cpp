#include "\ttt_a3\ttt_main\macros.hpp"

class CfgPatches {
	class TTT_Units_BW {
		units[] = {};
		weapons[] = {
			//Uniformen Tropentarn
			"TTT_Uniform_Yellow_BW_Tropentarn",
			"TTT_Uniform_Green_BW_Tropentarn",
			"TTT_Uniform_Brown_BW_Tropentarn",
			"TTT_Uniform_Red_BW_Tropentarn",
			"TTT_Uniform_Black_BW_Tropentarn",
			"TTT_Uniform_Violet_BW_Tropentarn",
			"TTT_Uniform_White_BW_Tropentarn",
			"TTT_Uniform_Blue_BW_Tropentarn",
			"TTT_Uniform_Grey_BW_Tropentarn",
			"TTT_Uniform_Gold_BW_Tropentarn",
			"TTT_Uniform_Silver_BW_Tropentarn",
			"TTT_Uniform_Orange_BW_Tropentarn",
			
			//Uniformen Flecktarn
			"TTT_Uniform_Yellow_BW_Flecktarn",
			"TTT_Uniform_Green_BW_Flecktarn",
			"TTT_Uniform_Brown_BW_Flecktarn",
			"TTT_Uniform_Red_BW_Flecktarn",
			"TTT_Uniform_Black_BW_Flecktarn",
			"TTT_Uniform_Blue_BW_Flecktarn",
			"TTT_Uniform_Violet_BW_Flecktarn",
			"TTT_Uniform_White_BW_Flecktarn",
			"TTT_Uniform_Grey_BW_Flecktarn",
			"TTT_Uniform_Gold_BW_Flecktarn",
			"TTT_Uniform_Silver_BW_Flecktarn",
			"TTT_Uniform_Orange_BW_Flecktarn",
			
			//Helme Tropentarn
			"TTT_Helmet_1_BW_Tropentarn",
			"TTT_Helmet_2_BW_Tropentarn",
			"TTT_Helmet_3_BW_Tropentarn",
			"TTT_Helmet_4_BW_Tropentarn",
			"TTT_Helmet_5_BW_Tropentarn",
			"TTT_Helmet_6_BW_Tropentarn",
			"TTT_Helmet_7_BW_Tropentarn",
			"TTT_Helmet_8_BW_Tropentarn",
			
			//Helme Flecktarn
			"TTT_Helmet_1_BW_Flecktarn",
			"TTT_Helmet_2_BW_Flecktarn",
			"TTT_Helmet_3_BW_Flecktarn",
			"TTT_Helmet_4_BW_Flecktarn",
			"TTT_Helmet_5_BW_Flecktarn",
			"TTT_Helmet_6_BW_Flecktarn",
			"TTT_Helmet_7_BW_Flecktarn",
			"TTT_Helmet_8_BW_Flecktarn"
		};
		requiredAddons[] = {"ttt_main"};
	};
};

class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference
    class TTT_Helmet_Base;
	
	class TTT_Uniform_Base_BW : U_B_CombatUniform_mcam {
			scope = 0;
			displayName = "$STR_TTT_Uniform_Base_BW";
			picture = "\ttt_a3\ttt_units_base\data\TTT_uniform_icon_bw.paa";
			model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
			
			class ItemInfo : ItemInfo
			{
				uniformClass = "TTT_Base_BW";
				containerClass = "Supply60";
			};
		};
	#include "\ttt_a3\ttt_units_bw\weapons_tropentarn.hpp"
	#include "\ttt_a3\ttt_units_bw\weapons_flecktarn.hpp"
};

class CfgVehicles {
	/*
	#############################################################
	### External class references
	#############################################################
	*/
	class B_Soldier_base_F;									
	class B_Helipilot_F;
	
	#include "\ttt_a3\ttt_units_bw\units_base_class.hpp"
};
