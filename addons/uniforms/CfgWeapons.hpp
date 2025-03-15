class CfgWeapons {

    class Uniform_Base;
    class U_B_CombatUniform_mcam: Uniform_Base { class ItemInfo; };    
    
    //US Desert
    class ttt_Uniform_Base: U_B_CombatUniform_mcam {
        author = ECSTRING(main,TacticalTrainingTeam);
        scope = 0;
        displayName = "TTT Uniform Base";
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Uniform_Base_US";
            containerClass = "Supply60";
        };
    };

    class ttt_Uniform_plain_US_Desert: ttt_Uniform_Base {
        scope = 2;
        displayName = CSTRING(plain_US_desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_Uniform_Base_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_plain_US_Desert";
        };
    };

    class ttt_Uniform_Yellow_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(yellow_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_US_Desert";
        };
    };
    
    class ttt_Uniform_Grey_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(grey_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_US_Desert";
        };
    };
    
    class ttt_Uniform_Gold_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(gold_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_US_Desert";
        };
    };
    class ttt_Uniform_Silver_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(silver_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_silver_US_Desert";
        };
    }; 
    
    class ttt_Uniform_Green_US_Desert: ttt_Uniform_plain_US_Desert {
        author = "Tactical Training Team";
        displayName = CSTRING(green_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_US_Desert";
        };
    };
    
    class ttt_Uniform_Brown_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(brown_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_US_Desert";
        };
    };
    
    class ttt_Uniform_Black_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(black_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_US_Desert";
        };
    };
    
    class ttt_Uniform_Red_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(red_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_US_Desert";
        };
    };    
    
    class ttt_Uniform_Bronze_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(bronze_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_US_Desert";
        };
    };
    
    class ttt_Uniform_Blue_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(blue_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_US_Desert";
        };
    };

    class ttt_Uniform_Violet_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(violet_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_US_Desert";
        };
    };        
    
    class ttt_Uniform_White_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(white_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_US_Desert";
        };
    };

    class ttt_Uniform_Orange_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(orange_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_us_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_US_Desert";
        };
    }; 

    class ttt_Uniform_Platinum_US_Desert: ttt_Uniform_plain_US_Desert {
        displayName = CSTRING(platinum_US_Desert_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_us_ca.paa);
        ACE_GForceCoef = 0.55;

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Platinum_US_Desert";
        };
    }; 

    //BW Fleck
    class ttt_Uniform_plain_BW_Flecktarn: ttt_Uniform_Base {
        scope = 2;
        displayName = CSTRING(plain_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_plain_bw_flecktarn_ca.paa);
            
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_plain_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Yellow_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(yellow_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_flecktarn_ca.paa);
            
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Grey_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(grey_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Orange_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(orange_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_BW_Flecktarn";
        };
    };     
   
    class ttt_Uniform_Gold_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(gold_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_flecktarn_ca.paa);

        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Green_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(green_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_BW_Flecktarn";
        };
    };
    

    class ttt_Uniform_Green_alt_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(green_alt_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_alt_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Brown_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(brown_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Black_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(black_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Red_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(red_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_Bronze_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(bronze_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Blue_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(blue_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_Violet_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(violet_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_BW_Flecktarn";
        };
    };    
    
    class ttt_Uniform_White_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(white_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_flecktarn_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_BW_Flecktarn";
        };
    };
    
    class ttt_Uniform_Silver_BW_Flecktarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(silver_BW_Flecktarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_bw_flecktarn_ca.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Silver_BW_Flecktarn";
        };
    };

    class ttt_Uniform_Platinum_Pilot: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(platinum_pilot_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_platinum_pilot_ca.paa);
        ACE_GForceCoef = 0.55;
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Platinum_Pilot";
        };
    };

    //BW Tropen
    class ttt_Uniform_Yellow_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(yellow_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_yellow_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Yellow_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Grey_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(grey_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_grey_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Grey_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Orange_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(orange_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_orange_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Orange_BW_Tropentarn";
        };
    };       
    
    class ttt_Uniform_Gold_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(gold_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_gold_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Gold_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Green_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(green_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Green_alt_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(green_alt_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_green_alt_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Green_alt_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Brown_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(brown_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_brown_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Brown_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Black_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(black_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_black_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Black_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Red_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(red_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_red_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Red_BW_Tropentarn";
        };
    };    
    
    class ttt_Uniform_Bronze_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(bronze_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_bronze_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Bronze_BW_Tropentarn";
        };
    };
    
    class ttt_Uniform_Blue_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(blue_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_blue_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Blue_BW_Tropentarn";
        };
    };

    class ttt_Uniform_silver_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(silver_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_silver_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_silver_BW_Tropentarn";
        };
    };

    class ttt_Uniform_Violet_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(violet_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_violet_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_Violet_BW_Tropentarn";
        };
    };        
    
    class ttt_Uniform_White_BW_Tropentarn: ttt_Uniform_plain_BW_Flecktarn {
        displayName = CSTRING(white_BW_Tropentarn_DisplayName);
        picture = QPATHTOF(data\pictures\ttt_uniform_white_bw_tropen_ca.paa);
        
        class ItemInfo: ItemInfo {
            uniformClass = "ttt_White_BW_Tropentarn";
        };
    };
};