#include "\ttt_a3\ttt_units_us\macros.hpp"

class CfgPatches {
	class TTT_Units_US {
		units[] = {	
			//Logistik Kisten
			"TTT_Crate_Weapons_US",
			"TTT_Crate_Weapons_Special_US",
			"TTT_Crate_Ammo_Standard_US",
			"TTT_Crate_Ammo_Special_US",
			"TTT_Crate_Equipment_Pioneer_US",
			"TTT_Crate_Ammo_Grenade_US",
			"TTT_Crate_Equipment_US",
			"TTT_Crate_Weapons_Luncher_US",
			"TTT_Crate_Medic_Doctor_US",
			"TTT_Crate_Ammo_Luncher_US",
			"TTT_Crate_Small_US",
			"TTT_Crate_Large_US"
		};
		weapons[] = {
			//Uniformen Desert
			"TTT_Uniform_Yellow_US_Desert",
			"TTT_Uniform_Green_US_Desert",
			"TTT_Uniform_Brown_US_Desert",
			"TTT_Uniform_Red_US_Desert",
			"TTT_Uniform_Black_US_Desert",
			"TTT_Uniform_Violet_US_Desert",
			"TTT_Uniform_White_US_Desert",
			"TTT_Uniform_Blue_US_Desert",
			"TTT_Uniform_Grey_US_Desert",
			"TTT_Uniform_Gold_US_Desert",
			"TTT_Uniform_Silver_US_Desert",
			"TTT_Uniform_Orange_US_Desert", 

			//Uniformen Woodland
			"TTT_Uniform_Yellow_US_Woodland",
			"TTT_Uniform_Green_US_Woodland",
			"TTT_Uniform_Brown_US_Woodland",
			"TTT_Uniform_Red_US_Woodland",
			"TTT_Uniform_Black_US_Woodland",
			"TTT_Uniform_Blue_US_Woodland",
			"TTT_Uniform_Violet_US_Woodland",
			"TTT_Uniform_White_US_Woodland",
			"TTT_Uniform_Grey_US_Woodland",
			"TTT_Uniform_Gold_US_Woodland",
			"TTT_Uniform_Silver_US_Woodland",
			"TTT_Uniform_Orange_US_Woodland",
			
			//Helme Desert
			"TTT_Helmet_1_US_Desert",
			"TTT_Helmet_2_US_Desert",
			"TTT_Helmet_3_US_Desert",
			"TTT_Helmet_4_US_Desert",
			"TTT_Helmet_5_US_Desert",
			"TTT_Helmet_6_US_Desert",
			"TTT_Helmet_7_US_Desert",
			"TTT_Helmet_8_US_Desert",
			
			//Helme Woodland
			"TTT_Helmet_1_US_Woodland",
			"TTT_Helmet_2_US_Woodland",
			"TTT_Helmet_3_US_Woodland",
			"TTT_Helmet_4_US_Woodland",
			"TTT_Helmet_5_US_Woodland",
			"TTT_Helmet_6_US_Woodland",
			"TTT_Helmet_7_US_Woodland",
			"TTT_Helmet_8_US_Woodland",

			//Westen Desert
			"TTT_Vest_Heavy_Yellow_US_Desert",
			"TTT_Vest_Lite_Yellow_US_Desert",
			"TTT_Vest_Heavy_Green_US_Desert",
			"TTT_Vest_Lite_Green_US_Desert",
			"TTT_Vest_Heavy_Brown_US_Desert",
			"TTT_Vest_Lite_Brown_US_Desert",
			"TTT_Vest_Heavy_Blue_US_Desert",
			"TTT_Vest_Lite_Blue_US_Desert",
			"TTT_Vest_Heavy_Red_US_Desert",
			"TTT_Vest_Lite_Red_US_Desert",
			"TTT_Vest_Heavy_Black_US_Desert",
			"TTT_Vest_Lite_Black_US_Desert",
			"TTT_Vest_Heavy_Violet_US_Desert",
			"TTT_Vest_Lite_Violet_US_Desert",
			"TTT_Vest_Heavy_Gold_US_Desert",
			"TTT_Vest_Lite_Gold_US_Desert",
			"TTT_Vest_Heavy_Grey_US_Desert",
			"TTT_Vest_Lite_Grey_US_Desert",		
			"TTT_Vest_Heavy_Orange_US_Desert",			
			"TTT_Vest_Lite_Orange_US_Desert",
			"TTT_Vest_Crew_US_Desert",			

			//Westen Woodland
			"TTT_Vest_Heavy_Yellow_US_Woodland",
			"TTT_Vest_Lite_Yellow_US_Woodland",
			"TTT_Vest_Heavy_Green_US_Woodland",
			"TTT_Vest_Lite_Green_US_Woodland",
			"TTT_Vest_Heavy_Brown_US_Woodland",
			"TTT_Vest_Lite_Brown_US_Woodland",
			"TTT_Vest_Heavy_Blue_US_Woodland",
			"TTT_Vest_Lite_Blue_US_Woodland",
			"TTT_Vest_Heavy_Red_US_Woodland",
			"TTT_Vest_Lite_Red_US_Woodland",
			"TTT_Vest_Heavy_Black_US_Woodland",
			"TTT_Vest_Lite_Black_US_Woodland",
			"TTT_Vest_Heavy_Violet_US_Woodland",
			"TTT_Vest_Lite_Violet_US_Woodland",
			"TTT_Vest_Heavy_Gold_US_Woodland",
			"TTT_Vest_Lite_Gold_US_Woodland",
			"TTT_Vest_Heavy_Grey_US_Woodland",
			"TTT_Vest_Lite_Grey_US_Woodland",
			"TTT_Vest_Heavy_Orange_US_Woodland",
			"TTT_Vest_Lite_Orange_US_Woodland",
			"TTT_Vest_Crew_US_Woodland"
		};
		requiredAddons[] = {"ttt_main", "ttt_units_base"};
	};
};

class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference
    class TTT_Vest_Heavy_Base;	// External class reference
    class TTT_Vest_Lite_Base;	// External class reference
    class TTT_Vest_Crew_Base;	// External class reference
    class TTT_Helmet_Base;

	class TTT_Uniform_Base_US : U_B_CombatUniform_mcam {
			scope = 0;
			displayName = "TTT Uniform Base US";
			picture = "\ttt_a3\ttt_units_base\data\TTT_uniform_icon_us.paa";
			model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
			
			class ItemInfo : ItemInfo
			{
				uniformClass = "TTT_Base_US";
				containerClass = "Supply60";
			};
		};	
	
	#include "\ttt_a3\ttt_units_us\weapons_desert.hpp"
	#include "\ttt_a3\ttt_units_us\weapons_woodland.hpp"
};

class CfgVehicles {
	/*
	#############################################################
	### External class references
	#############################################################
	*/
	class B_Soldier_base_F;			
	class B_Helipilot_F;			
	class Box_NATO_Wps_F;			
	class Box_NATO_WpsSpecial_F;	
	class Box_NATO_Ammo_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_Support_F;
	class Box_NATO_WpsLaunch_F;
	class B_supplyCrate_F;
	
	#include "\ttt_a3\ttt_units_us\vehicles_us.hpp"
	#include "\ttt_a3\ttt_units_us\crates_us.hpp"	
};
