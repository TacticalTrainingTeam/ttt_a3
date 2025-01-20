class CfgWeapons {

    class Uniform_Base;

    class U_B_CombatUniform_mcam: Uniform_Base { class ItemInfo; };    
    
    //US Desert
    class TTT_Uniform_Base_US: U_B_CombatUniform_mcam {
        scope = 0;
        displayName = "TTT Uniform Base US";
        //picture = QPATHTOF(data\pictures\ttt_uniform_base_us.paa);
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
        
        class ItemInfo: ItemInfo {
            uniformClass = "TTT_Uniform_Base_US";
            containerClass = "Supply60";
        };
    };

    class ttt_Uniform_plain_US_Desert: TTT_Uniform_Base_US {
        author = "Tactical Training Team";
        scope = 2;
        displayName = "TTT Uniform (US Desert)";
        picture = QPATHTOF(data\pictures\ttt_uniform_base_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_plain_US_Desert";
        };
    };

    class ttt_Uniform_Yellow_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_US_Desert";
        };
    };
    
    class ttt_Uniform_Grey_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(grey_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_US_Desert";
        };
    };
    
    class ttt_Uniform_Gold_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(gold_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_US_Desert";
        };
    };

/*     class ttt_Uniform_Silver_US_Desert: TT_Uniform_Base_US {
        author = "Tactical Training Team";
        scope = 2;
        displayName = "TTT Uniform Silber (US Desert)";
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_silver_US_Desert";
        };
    }; */
    
    class ttt_Uniform_Green_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(green_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_US_Desert";
        };
    };
    
    class ttt_Uniform_Brown_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(brown_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_US_Desert";
        };
    };
    
    class ttt_Uniform_Black_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(black_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_US_Desert";
        };
    };
    
    class ttt_Uniform_Red_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(red_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_US_Desert";
        };
    };    
    
    class ttt_Uniform_Bronze_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_US_Desert";
        };
    };
    
    class ttt_Uniform_Blue_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(blue_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_US_Desert";
        };
    };

    class ttt_Uniform_Violet_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(violet_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_US_Desert";
        };
    };        
    
    class ttt_Uniform_White_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(white_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_US_Desert";
        };
    };

    class ttt_Uniform_Orange_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(orange_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_us.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_US_Desert";
        };
    }; 

    class ttt_Uniform_Platinum_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_us.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Platinum_US_Desert";
        };
    }; 

    //BW Tropen
    class ttt_Uniform_Base_BW: U_B_CombatUniform_mcam {
        scope = 0;
        displayName = "Tactical Training Team";
        //picture = QPATHTOF(data\pictures\ttt_uniform_plain_bw_tropen.paa);
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Base_BW";
            containerClass = "Supply60";
        };
    };
    

    class ttt_Uniform_Yellow_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Grey_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Orange_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_BW_Tropentarn";
        };
    };   

/*     class ttt_Uniform_silver_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = "TTT Uniform Silber (BW Tropentarn)";
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_silver_BW_Tropentarn";
        };
    };   */   
      
    
    class ttt_Uniform_Gold_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Green_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Green_alt_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_alt_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Brown_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Black_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Red_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_BW_Tropentarn";
        };
    };    
    
    class ttt_Uniform_Bronze_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Blue_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Violet_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_BW_Tropentarn";
        };
    };        
    
    class ttt_Uniform_White_BW_Tropentarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_tropen.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_BW_Tropentarn";
        };
    };

    //BW Fleck
    class ttt_Uniform_plain_BW_Flecktarn: ttt_Uniform_Base_BW {
        author = "Tactical Training Team";
        scope = 2;
        displayName = "TTT Uniform (BW Flecktarn)";
        picture = QPATHTOF(data\pictures\ttt_uniform_plain_bw_flecktarn.paa);
            
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_plain_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Yellow_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_flecktarn.paa);
            
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Grey_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_flecktarn.paa);

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Orange_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_BW_Flecktarn";
        };
    };     
   
    class ttt_Uniform_Gold_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_flecktarn.paa);

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Green_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_BW_Flecktarn";
        };
    };
    

    class ttt_Uniform_Green_alt_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_alt_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Brown_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Black_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Red_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_Bronze_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Blue_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_Violet_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_White_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_flecktarn.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Silver_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_bw_flecktarn.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Silver_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Platinum_Pilot: ttt_Uniform_plain_BW_Flecktarn {
        author = "Tactical Training Team";
        displayName = "TTT Uniform Platin (Pilot)";
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_pilot.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Platinum_Pilot";
        };
    };
};