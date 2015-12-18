class CfgWeapons {
    class UniformBase;
    class U_B_CombatUniform_mcam : UniformBase{ class ItemInfo; };	// External class reference

    class H_HelmetB_plain_mcamo;
    class H_HelmetSpecB : H_HelmetB_plain_mcamo{ class ItemInfo; };	// External class reference

    class Vest_NoCamo_Base;
    class V_PlateCarrier3_rgr : Vest_NoCamo_Base{ class ItemInfo; };	// External class reference
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base{ class ItemInfo; };	// External class reference

    class V_TacVest_khk;
    class V_TacVest_brn : V_TacVest_khk{ class ItemInfo; };	// External class reference

    #include "misc\weapons.hpp"
};