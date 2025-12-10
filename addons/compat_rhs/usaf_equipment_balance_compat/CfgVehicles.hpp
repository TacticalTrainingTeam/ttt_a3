class CfgVehicles {
    class B_AssaultPack_Base;
    class B_AssaultPack_rgr;
    class B_Carryall_cbr;
    //Balance Changes by Bluefield
    //PACKS

    //Kitbag Like Backpacks 280/50
    class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base {
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp {
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_engineer: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_engineer: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_medic: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_medic: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_demo: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_demo: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_ar: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_ar: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_mg: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_mg: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_at: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_at: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ucp_maaws: rhsusf_assault_eagleaiii_ucp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_ocp_maaws: rhsusf_assault_eagleaiii_ocp { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy: rhsusf_assault_eagleaiii_ucp {
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_engineer: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_demo: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_eod: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_m27: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_ar: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_mg: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_assaultman: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_at: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };
    class rhsusf_assault_eagleaiii_coy_aa: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(280,50);
    };

    //Assault Packs
    class rhsusf_falconii: B_AssaultPack_rgr {
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_coy: B_AssaultPack_rgr {
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_mc: B_AssaultPack_rgr {
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_gr: rhsusf_falconii {
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_coy_gr: rhsusf_falconii_coy { //not in Arsenal
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_gr_m32: rhsusf_falconii_coy { //not in Arsenal
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_breach: rhsusf_falconii { //not in Arsenal
        BACKPACK_BALANCE(160,20);
    };
    class rhsusf_falconii_recon: rhsusf_falconii_coy { //not in Arsenal
        BACKPACK_BALANCE(160,20);
    };

    //
    class rhsusf_pack_slackman_m240: B_Carryall_cbr { //not in Arsenal
        BACKPACK_BALANCE(440,25);
    };
    class rhsusf_pack_slackman_m249: B_Carryall_cbr { //not in Arsenal
        BACKPACK_BALANCE(440,25);
    };
    class rhsusf_assault_eagleaiii_coy_medic: rhsusf_assault_eagleaiii_coy { //not in Arsenal
        BACKPACK_BALANCE(440,25);
        scope = 2;
    };
    class rhsusf_falconii_sarc: rhsusf_falconii { //not in Arsenal
        BACKPACK_BALANCE(440,25);
    };
};
