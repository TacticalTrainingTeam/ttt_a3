class CfgVehicles {
    class CUP_Creatures_Military_CHDKZ_Soldier_04;
    class rnt_bw_wintertarn_uniform: CUP_Creatures_Military_CHDKZ_Soldier_04 {
        author = ECSTRING(rsr_core,rnt);
        uniformClass = "rnt_bw_wintertarn_uniform_item";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniform\rnt_winter_jacke_co.paa),
            QPATHTOF(data\uniform\rnt_winter_hose_co.paa)
        };
    };

    class CUP_B_C130J_USMC;
    class rsr_c_161: CUP_B_C130J_USMC {
        author = ECSTRING(rsr_core,rsr);
        displayName = CSTRING(C161_Transall_2);
        editorPreview = QPATHTOF(data\uniform\previews\rsr_c_161_preview.jpg);
        editorSubcategory = "EdSubcat_Planes";
        faction = "rsr";
        hiddenSelectionsTextures[] =  {
            QPATHTOF(data\planes\redd_c_161_body_co.paa),
            QPATHTOF(data\planes\redd_c_161_wings_co.paa)
        };
    };
    class CUP_B_C130J_Cargo_USMC;
    class rsr_c_161_viv: CUP_B_C130J_Cargo_USMC {
        author = ECSTRING(rsr_core,RSR);
        displayName = CSTRING(C161_Transall_2_VIV);
        editorPreview = QPATHTOF(data\uniform\previews\rsr_c_161_preview.jpg);
        faction = "rsr";
        editorSubcategory = "EdSubcat_Planes";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\planes\redd_c_161_body_co.paa),
            QPATHTOF(data\planes\redd_c_161_wings_co.paa)
        };
    };
};