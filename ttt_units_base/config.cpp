class CfgPatches {
	class TTT_Units_Base {
		units[] = {};
		weapons[] = {
			"TTT_Helmet_Buzzard",
			"TTT_Helmet_Hawk",
			"TTT_Helmet_Falcon",
			"TTT_Helmet_Eagle",
			"TTT_Helmet1_Vehiclecrew",
			"TTT_Helmet2_Vehiclecrew",
			"TTT_Helmet3_Vehiclecrew",
			"TTT_Helmet4_Vehiclecrew",
			"TTT_Helmet5_Vehiclecrew",
			"TTT_Helmet6_Vehiclecrew"
			};
		requiredAddons[] = {"ttt_main"};
	};
};

class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference

    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB : H_HelmetB_plain_mcamo{ class ItemInfo; };	// External class reference

    class Vest_NoCamo_Base;
    class V_PlateCarrier3_rgr : Vest_NoCamo_Base{ class ItemInfo; };	// External class reference
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base{ class ItemInfo; };	// External class reference

    class V_TacVest_brn;
	
	class BWA3_CrewmanKSK_Tropen_Headset;

	#include "\ttt_a3\ttt_units_base\weapons.hpp"
};