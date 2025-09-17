class CfgWeapons {
    //Made by martin509
    class rockets_230mm_GAT;
    class CUP_Vmlauncher_GRAD_veh: rockets_230mm_GAT {
        class Close;
    };
    class CUP_Vmlauncher_technical: CUP_Vmlauncher_GRAD_veh {
        class Close: Close {
            artilleryDispersion = 8;
        };
    };
    class CUP_Vmlauncher_ub32_technical: CUP_Vmlauncher_GRAD_veh {
        class Close: Close {
            artilleryDispersion = 12;
            aiRateOfFire=0.35;
            aiRateOfFireDistance=1054;
        };
    };
};
