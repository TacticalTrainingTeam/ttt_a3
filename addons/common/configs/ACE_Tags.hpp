class ACE_Tags {
    class GVAR(propertyOfTTT) {
        displayName = "TTT";
        requiredItem = "ACE_SpraypaintBlack";
        textures[] = {QPATHTOF(data\p_propertyOfTTT_ca.paa)};
        icon = QPATHTOF(data\p_propertyOfTTT_ca.paa);
    };

    class GVAR(nett) {
        displayName = CSTRING(meme_netthier_displayName);  // Name of your tag being displayed in the interaction menu
        requiredItem = QGVAR(spraypaintMemes);  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {QPATHTOF(data\p_nettHier_ca.paa)};  // List of texture variations (one is randomly selected when tagging)
        materials[] = {}; // Optional: List of material variations (one is randomly selected). Keep empty if you don't need a custom material.
        icon = QPATHTOF(cdata\p_nettHier_ca.paa);  // Icon being displayed in the interaction menu
        //tagModel = "UserTexture1m_F"; // Optional: The 3D Model that will be spawned with the texture on it, can either be CfgVehicles classname or P3D file path.
    };

    class GVAR(wantYou): GVAR(nett) {
        displayName = CSTRING(meme_wantyou_displayName);
        textures[] = {QPATHTOF(data\p_wantYou_ca.paa)};  
        icon = QPATHTOF(data\p_wantYou_ca.paa);  
    };

    class GVAR(rollator): GVAR(nett) {
        displayName = CSTRING(meme_rollatorgang_displayName);
        textures[] = {QPATHTOF(data\p_rollatorgang_ca.paa)};  
        icon = QPATHTOF(data\p_rollatorgang_ca.paa);  
    };
};