class CfgVehicles {
    class B_Carryall_Base;
    class B_FieldPack_khk;
    class B_FieldPack_cbr;
    class B_TacticalPack_blk;
    class Bag_Base;
    class B_TacticalPack_oli;
    class B_AssaultPack_blk;
    class rhsusf_falconii;
    class B_Carryall_oli;
    //PACKS

    class rhsgref_ins_pack: B_FieldPack_khk {
        BACKPACK_BALANCE(320,320);
    };
    class rhsgref_tortila_specter: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhsgref_hidf_alicepack: Bag_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhsgref_wdl_alicepack: rhsgref_hidf_alicepack {
        BACKPACK_BALANCE(320,60);
    };
    class rhsgref_ttsko_alicepack: rhsgref_hidf_alicepack {
        BACKPACK_BALANCE(320,60);
    };

    //Hidden Items
    class rhsgref_cdf_backpack_mg: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_cdf_backpack_mg2: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_cdf_backpack_mg3: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_cdf_backpack_engineer: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_cdf_backpack_medic: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_nat_backpack_mg: B_AssaultPack_blk {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_nat_backpack_mg42: rhsusf_falconii {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_nat_backpack_engineer: B_Carryall_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_nat_backpack_medic: B_TacticalPack_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_nat_backpack_explosives: B_TacticalPack_oli {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_ins_pack_GR: B_FieldPack_cbr {
        BACKPACK_BALANCE(440,25);
    };
    class rhsgref_ins_packMG: B_TacticalPack_blk {
        BACKPACK_BALANCE(440,25);
    };
};
