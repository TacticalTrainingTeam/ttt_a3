class CfgWeapons {

    class Uniform_Base;

    class U_B_CombatUniform_mcam : Uniform_Base { class ItemInfo; };    
    
    //US Desert
    class TT_Uniform_Base_US : U_B_CombatUniform_mcam {
        scope = 0;
        author = QUOTE(Tactical Training Team);
        displayName = QUOTE(TTT Uniform Base US);
        picture = QPATHTOF(data\TTT_uniform_icon_us.paa);
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F.p3d";
        
        class ItemInfo : ItemInfo {
            uniformClass = "TT_Uniform_Base_US";
            containerClass = "Supply60";
        };
    };

    class TTT_Uniform_Yellow_US_Desert : TT_Uniform_Base_US {
        scope = 2;
        displayName = CSTRING(yellowDisplayName);
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Yellow_US_Desert";
        };
    };
    
    class TTT_Uniform_Grey_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Grau (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Grey_US_Desert";
        };
    };
    
    class TTT_Uniform_Gold_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Gold (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Gold_US_Desert";
        };
    };
    
    class TTT_Uniform_Green_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Grün (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Green_US_Desert";
        };
    };
    
    class TTT_Uniform_Brown_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Braun (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Brown_US_Desert";
        };
    };
    
    class TTT_Uniform_Black_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Schwarz (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Black_US_Desert";
        };
    };
    
    class TTT_Uniform_Red_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Rot (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Red_US_Desert";
        };
    };    
    
    class TTT_Uniform_Bronze_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Bronze (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Bronze_US_Desert";
        };
    };
    
    class TTT_Uniform_Blue_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Blau (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Blue_US_Desert";
        };
    };

    class TTT_Uniform_Violet_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Violett (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Violet_US_Desert";
        };
    };        
    
    class TTT_Uniform_White_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Weiss (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_White_US_Desert";
        };
    };

    class TTT_Uniform_Orange_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Orange (US Desert));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Orange_Us_Desert";
        };
    }; 

    class TTT_Uniform_Platinum_US_Desert : TTT_Uniform_Yellow_US_Desert {
        displayName = QUOTE(TTT Uniform Platin (US Desert));
        ACE_GForceCoef = 0.55;

        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Platinum_Us_Desert";
        };
    }; 

    //BW Tropen
    class TTT_Uniform_Base_BW : U_B_CombatUniform_mcam {
        scope = 0;
        displayName = QUOTE(Tactical Training Team);
        picture = QPATHTOF(data\TTT_uniform_icon_bw.paa);
        model = "\A3\characters_f\Common\Suitpacks\suitpack_universal_F";
        author = ECSTRING(main,Tactical Training Team);
        
        class ItemInfo : ItemInfo
        {
            uniformClass = "TTT_Base_BW";
            containerClass = "Supply60";
        };
    };

    class TTT_Uniform_Yellow_BW_Tropentarn : TTT_Uniform_Base_BW {
        scope = 2;
        displayName = QUOTE(TTT Uniform Gelb (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Yellow_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Grey_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Grau (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Grey_BW_Tropentarn";
        };
    };

    class TTT_Uniform_Orange_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Orange (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Orange_Bw_Tropentarn";
        };
    };     
    
    class TTT_Uniform_Gold_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Gold (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Gold_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Green_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Grün (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Green_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Brown_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Braun (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Brown_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Black_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Schwarz (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Black_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Red_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Rot (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Red_BW_Tropentarn";
        };
    };    
    
    class TTT_Uniform_Bronze_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Bronze (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Bronze_BW_Tropentarn";
        };
    };
    
    class TTT_Uniform_Blue_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Blau (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Blue_BW_Tropentarn";
        };
    };

    class TTT_Uniform_Violet_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Violett (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Violet_BW_Tropentarn";
        };
    };        
    
    class TTT_Uniform_White_BW_Tropentarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Weiss (BW Tropentarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_White_BW_Tropentarn";
        };
    };

    //BW Fleck
    class TTT_Uniform_Yellow_BW_Flecktarn : TTT_Uniform_Yellow_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Gelb (Flecktarn));
            
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Yellow_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Grey_BW_Flecktarn : TTT_Uniform_Grey_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Grau (Flecktarn));

        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Grey_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Orange_BW_Flecktarn : TTT_Uniform_Orange_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Orange (BW Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Orange_Bw_Flecktarn";
        };
    };     
    
    class TTT_Uniform_Gold_BW_Flecktarn : TTT_Uniform_Gold_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Gold (Flecktarn));

        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Gold_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Green_BW_Flecktarn : TTT_Uniform_Green_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Grün (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Green_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Brown_BW_Flecktarn : TTT_Uniform_Brown_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Braun (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Brown_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Black_BW_Flecktarn : TTT_Uniform_Black_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Schwarz (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Black_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Red_BW_Flecktarn : TTT_Uniform_Red_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Rot (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Red_BW_Flecktarn";
        };
    };    
    
    class TTT_Uniform_Bronze_BW_Flecktarn : TTT_Uniform_Bronze_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Bronze (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Bronze_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Blue_BW_Flecktarn : TTT_Uniform_Blue_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Blau (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Blue_BW_Flecktarn";
        };
    };    
    
    class TTT_Uniform_Violet_BW_Flecktarn : TTT_Uniform_Violet_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Violett (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Violet_BW_Flecktarn";
        };
    };    
    
    class TTT_Uniform_White_BW_Flecktarn : TTT_Uniform_White_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Weiss (Flecktarn));
        
        class ItemInfo : ItemInfo {
            uniformClass = "TTT_White_BW_Flecktarn";
        };
    };
    
    class TTT_Uniform_Silver_BW_Flecktarn : TTT_Uniform_White_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Silber (Flecktarn));
        ACE_GForceCoef = 0.55;

        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Silver_BW_Flecktarn";
        };
    };

    class TTT_Uniform_Platinum_Pilot : TTT_Uniform_White_BW_Tropentarn {
        displayName = QUOTE(TTT Uniform Platin (Pilot));
        ACE_GForceCoef = 0.55;

        class ItemInfo : ItemInfo {
            uniformClass = "TTT_Platinum_Pilot";
        };
    };
};