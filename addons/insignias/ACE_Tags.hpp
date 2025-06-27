class ACE_Tags {
    class insignia_black {
        displayName = CSTRING(black_emblem_displayName);  // Name of your tag being displayed in the interaction menu
        requiredItem = QGVAR(spraypaint);  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = {QPATHTOF(data\schwarz_ca.paa)};  // List of texture variations (one is randomly selected when tagging)
        icon = QPATHTOF(data\schwarz_ca.paa);  // Icon being displayed in the interaction menu
    };
    
    class insignia_blue: insignia_black {
        displayName = CSTRING(blue_emblem_displayName);
        textures[] = {QPATHTOF(data\blau_ca.paa)};
        icon = QPATHTOF(data\blau_ca.paa);
    };

    class insignia_bronze: insignia_black {
        displayName = CSTRING(bronze_emblem_displayName);
        textures[] = {QPATHTOF(data\bronze_ca.paa)};
        icon = QPATHTOF(data\bronze_ca.paa);  
    };

    class insignia_yellow: insignia_black {
        displayName = CSTRING(yellow_emblem_displayName);
        textures[] = {QPATHTOF(data\gelb_ca.paa)};  
        icon = QPATHTOF(data\gelb_ca.paa); 
    };

    class insignia_orange: insignia_black {
        displayName = CSTRING(orange_emblem_displayName);  
        textures[] = {QPATHTOF(data\orange_ca.paa)}; 
        icon = QPATHTOF(data\orange_ca.paa);
    };

    class insignia_gold: insignia_black {
        displayName = CSTRING(gold_emblem_displayName);  
        textures[] = {QPATHTOF(data\gold_ca.paa)}; 
        icon = QPATHTOF(data\gold_ca.paa);
    };

    class insignia_green: insignia_black {
        displayName = CSTRING(green_emblem_displayName);  
        textures[] = {QPATHTOF(data\gruen_ca.paa)}; 
        icon = QPATHTOF(data\gruen_ca.paa);
    };

    class insignia_red: insignia_black {
        displayName = CSTRING(red_emblem_displayName);  
        textures[] = {QPATHTOF(data\rot_ca.paa)};  
        icon = QPATHTOF(data\rot_ca.paa); 
    };

    class insignia_violet: insignia_black {
        displayName = CSTRING(violet_emblem_displayName);  
        textures[] = {QPATHTOF(data\violet_ca.paa)}; 
        icon = QPATHTOF(data\violet_ca.paa);
    };

    class insignia_white: insignia_black {
        displayName = CSTRING(white_emblem_displayName);  
        textures[] = {QPATHTOF(data\weiss_ca.paa)}; 
        icon = QPATHTOF(data\weiss_ca.paa);  
    };

    class insignia_silver: insignia_black {
        displayName = CSTRING(silver_emblem_displayName); 
        textures[] = {QPATHTOF(data\silber_ca.paa)};  
        icon = QPATHTOF(data\silber_ca.paa); 
    };

    class insignia_platinum: insignia_black {
        displayName = CSTRING(platinum_emblem_displayName);
        textures[] = {QPATHTOF(data\platinum_ca.paa)};  
        icon = QPATHTOF(data\platinum_ca.paa);  
    };

    class insignia_grey: insignia_black {
        displayName = CSTRING(grau_emblem_displayName);
        textures[] = {QPATHTOF(data\grau_ca.paa)};
        icon = QPATHTOF(data\grau_ca.paa); 
    };
};
