class ACE_Tags {

    class insignia_black {
        displayName = ECSTRING(insignias,black_emblem_displayName);  // Name of your tag being displayed in the interaction menu
        requiredItem = "TTT_Spraypaint";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {QPATHTOEF(insignias,data\schwarz.paa)};  // List of texture variations (one is randomly selected when tagging)
        materials[] = {}; // Optional: List of material variations (one is randomly selected). Keep empty if you don't need a custom material.
        icon = QPATHTOEF(insignias,data\schwarz.paa);  // Icon being displayed in the interaction menu
        //tagModel = "UserTexture1m_F"; // Optional: The 3D Model that will be spawned with the texture on it, can either be CfgVehicles classname or P3D file path.
    };
    
    class insignia_blue: insignia_black {
        displayName = ECSTRING(insignias,blue_emblem_displayName);
        textures[] = {QPATHTOEF(insignias,data\blau.paa)};
        icon = QPATHTOEF(insignias,data\blau.paa);
    };

    class insignia_bronze: insignia_black {
        displayName = ECSTRING(insignias,bronze_emblem_displayName);
        textures[] = {QPATHTOEF(insignias,data\bronze.paa)};
        icon = QPATHTOEF(insignias,data\bronze.paa);  
    };

    class insignia_yellow: insignia_black {
        displayName = ECSTRING(insignias,yellow_emblem_displayName);
        textures[] = {QPATHTOEF(insignias,data\gelb.paa)};  
        icon = QPATHTOEF(insignias,data\gelb.paa); 
    };

    class insignia_orange: insignia_black {
        displayName = ECSTRING(insignias,orange_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\orange.paa)}; 
        icon = QPATHTOEF(insignias,data\orange.paa);
    };

    class insignia_gold: insignia_black {
        displayName = ECSTRING(insignias,gold_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\gold.paa)}; 
        icon = QPATHTOEF(insignias,data\gold.paa);
    };

    class insignia_green: insignia_black {
        displayName = ECSTRING(insignias,green_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\gruen.paa)}; 
        icon = QPATHTOEF(insignias,data\gruen.paa);
    };

    class insignia_red: insignia_black {
        displayName = ECSTRING(insignias,red_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\rot.paa)};  
        icon = QPATHTOEF(insignias,data\rot.paa); 
    };

    class insignia_violet: insignia_black {
        displayName = ECSTRING(insignias,violet_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\violet.paa)}; 
        icon = QPATHTOEF(insignias,data\violet.paa);
    };

    class insignia_white: insignia_black {
        displayName = ECSTRING(insignias,white_emblem_displayName);  
        textures[] = {QPATHTOEF(insignias,data\weiss.paa)}; 
        icon = QPATHTOEF(insignias,data\weiss.paa);  
    };

    class insignia_silver: insignia_black {
        displayName = ECSTRING(insignias,silver_emblem_displayName); 
        textures[] = {QPATHTOEF(insignias,data\silber.paa)};  
        icon = QPATHTOEF(insignias,data\silber.paa); 
    };

    class insignia_platinum: insignia_black {
        displayName = ECSTRING(insignias,platinum_emblem_displayName);
        textures[] = {QPATHTOEF(insignias,data\platinum.paa)};  
        icon = QPATHTOEF(insignias,data\platinum.paa);  
    };

    class insignia_grey: insignia_black {
        displayName = ECSTRING(insignias,grau_emblem_displayName);
        textures[] = {QPATHTOEF(insignias,data\grau.paa)};
        icon = QPATHTOEF(insignias,data\grau.paa); 
    };
};