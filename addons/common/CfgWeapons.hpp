class CfgWeapons {

    //Tragbare Flaggen
    class ace_flags_white;
    class GVAR(flag_logo): ace_flags_white {
        author = "Andx";
        displayName = "Flag (TTT-Logo)"; // Item/Flag name
        //picture = "\addon_prefix\data\pictures\my_flag_inventory_pic.paa"; // Path to the picture for the inventory item

        ace_flags_texture = QPATHTOF(data\ttt_logo_flag_ca.paa); // Path to the flag texture
        ace_flags_carrier = QGVAR(flag_logo_carrier); // Classname of the corresponding vehicle that gets placed.
        
        // Path to the icon for the place action. Do not overwrite for default white icon (inherited by ace_flags_white).
        //ace_flags_actionIconPlace = "\addon_prefix\data\icons\my_flag_place_icon.paa";
        // Path to the icon for the carry action. Do not overwrite for default white icon (inherited by ace_flags_white).
        //ace_flags_actionIconCarry = "\addon_prefix\data\pictures\my_flag_carry_icon.paa";
    };
};