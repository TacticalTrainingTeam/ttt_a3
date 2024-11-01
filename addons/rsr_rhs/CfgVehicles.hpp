class CfgVehicles {
    
    class RHS_C130J;
    class rsr_c_161: RHS_C130J {
        author = ECSTRING(rsr_core,RSR);
        displayName="C-161 Transall 2"; //ToDo Still translate?
        editorPreview="";
        editorSubcategory="EdSubcat_Planes";
        faction = "rsr";
        hiddenSelectionsTextures[]= {
            QPATHTOEF(data\planes\redd_c_161_body_co.paa),
            QPATHTOFE(data\planes\redd_c_161_wings_co.paa)
        };
    };

    class RHS_C130J_Cargo;
    class rsr_c_161_viv: RHS_C130J_Cargo {
        author = ECSTRING(rsr_core,RSR);
        displayName = "C-161 Transall 2 (VIV)"; //ToDo Still translate?
        editorPreview="";
        editorSubcategory="EdSubcat_Planes";
        faction = "rsr";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\planes\redd_c_161_body_co.paa),
            QPATHTOF(data\planes\redd_c_161_wings_co.paa)
        };
    };
};