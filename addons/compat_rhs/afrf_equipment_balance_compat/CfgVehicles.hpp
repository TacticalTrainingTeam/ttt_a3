class CfgVehicles {
    class B_AssaultPack_Base;
    class B_Carryall_Base;

    //Kitbag Like Backpacks
    class rhs_assault_umbts: B_AssaultPack_Base {
        BACKPACK_BALANCE(280,50);
    };
    class rhs_rk_sht_30_olive: rhs_assault_umbts {
        BACKPACK_BALANCE(280,50);
    };
    class rhs_sidor: B_AssaultPack_Base {
        BACKPACK_BALANCE(280,50);
    };

    //Assault Packs
    class rhs_rd54: B_AssaultPack_Base {
        BACKPACK_BALANCE(160,20);
    };
    class rhs_rd54_flora1;
    class rhs_rd54_vest_flora1: rhs_rd54_flora1 {
        BACKPACK_BALANCE(160,20);
    };
    class rhs_rd54_flora2;
    class rhs_rd54_vest_flora2: rhs_rd54_flora2 {
        BACKPACK_BALANCE(160,20);
    };
    class rhs_medic_bag: B_AssaultPack_Base {
        BACKPACK_BALANCE(160,20);
    };

    //RPG Backpacks
    class rhs_rpg: B_AssaultPack_Base {
        BACKPACK_BALANCE(220,25);
    };
    class rhs_rpg_empty: rhs_rpg {
        BACKPACK_BALANCE(220,25);
    };
    class rhs_rpg_2: rhs_rpg {
        BACKPACK_BALANCE(220,25);
    };
    class rhs_rpg_6b2: rhs_rpg_2 {
        BACKPACK_BALANCE(220,25);
    };
    class rhs_rpg_6b3: rhs_rpg_2 {
        BACKPACK_BALANCE(220,25);
    };

    //Special
    class rhs_r148: B_AssaultPack_Base {
        BACKPACK_BALANCE(100,10);
    };

    //Carry All type
    class rhs_tortila_grey: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhs_tortila_olive: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhs_tortila_khaki: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhs_tortila_emr: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
    class rhs_tortila_black: B_Carryall_Base {
        BACKPACK_BALANCE(320,60);
    };
};
