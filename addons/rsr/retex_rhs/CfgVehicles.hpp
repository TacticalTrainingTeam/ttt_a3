class CfgVehicles {
    
    class RHS_C130J;
    class rsr_c_161: RHS_C130J {
        author = ECSTRING(rsr,RSR);
        displayName = CSTRING(C161Transall2);
        editorPreview = QPATHTOF(data\planes\previews\rsr_c_161_preview.jpg);
        editorSubcategory="EdSubcat_Planes";
        faction = "rsr";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\planes\redd_c_161_body_co.paa),
            QPATHTOF(data\planes\redd_c_161_wings_co.paa)
        };
    };

    class RHS_C130J_Cargo;
    class rsr_c_161_viv: RHS_C130J_Cargo {
        author = ECSTRING(rsr,RSR);
        displayName = CSTRING(C161Transall2VIV);
        editorPreview = QPATHTOF(data\planes\previews\rsr_c_161_preview.jpg);
        editorSubcategory="EdSubcat_Planes";
        faction = "rsr";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\planes\redd_c_161_body_co.paa),
            QPATHTOF(data\planes\redd_c_161_wings_co.paa)
        };
    };
};