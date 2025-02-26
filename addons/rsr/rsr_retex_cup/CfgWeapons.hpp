class CfgWeapons {
    class InventoryItem_Base_F;
    class ItemCore;
    class CUP_U_O_CHDKZ_Kam_01;

    class UniformItem: InventoryItem_Base_F {
        type=801;
    };

    class rnt_bw_wintertarn_uniform_item: CUP_U_O_CHDKZ_Kam_01 {
        author = ECSTRING(rsr,rnt);
        displayName = SUBCSTRING(snowCamoDisplayName);
        //picture = QPATHTOF(retex_cup\data\uniform\rnt_winter_uniform_ui_pre_ca.paa);
        picture = QPATHTOF(rsr_retex_cup\data\uniform\pictures\rnt_winter_uniform.paa);
        model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";

        class ItemInfo: UniformItem {
            uniformModel="";
            uniformClass = QUOTE(rnt_bw_wintertarn_uniform);
            containerClass="Supply40";
            mass=15;
        };
    };
    
    class CUP_H_USMC_LWH_DES;
    class rnt_bw_wintertarn_helm_item: CUP_H_USMC_LWH_DES {
        author = ECSTRING(rsr,rnt);
        displayName = SUBCSTRING(snowHelmetDisplayName);
        picture = QPATHTOF(rsr_retex_cup\data\helmet\rnt_winter_helm_ui_pre_ca.paa);
        scope = 0; //Base Helmet is no longer in CUP => hide it
        hiddenSelectionsTextures[]= {
            QPATHTOF(rsr_retex_cup\data\helmet\rnt_winter_helm_co.paa)
        };
    };
};