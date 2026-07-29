class CfgVehicles {
    class Land_Sleeping_bag_folded_F;

    class GVAR(tarp_black_item) : Land_Sleeping_bag_folded_F{
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Tarp_Black);
        author = ECSTRING(main,TacticalTrainingTeam);

        //model = "\A3\Weapons_F\Binocular\NVG_proxy.p3d";  
        // ^ Replace with ANY existing model you want on the ground

        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Items";
    };
};
