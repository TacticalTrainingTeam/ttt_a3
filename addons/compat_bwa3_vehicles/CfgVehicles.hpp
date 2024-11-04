//https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations

class CfgVehicles {
    class Car_F;
    class BWA3_Eagle_base: Car_F {
        class ace_interaction_anims {
            class backpack_back {
                positions[] = {{-0.3, -3.3, 1.5}};
                items[] = {"BWA3_PatrolPack_Fleck"};
                text = CSTRING(STR_ttt_compat_bwa3_takebackpack);
            };
            class backpack_top { 
                positions[] = {{0.8, -1.9, 2.3}};
                items[] = {"BWA3_PatrolPack_Fleck"};
                text = CSTRING(STR_ttt_compat_bwa3_takebackpack);
            };
            /*
            This is already done by BWA3, but doenst yield a rope
            class hide_rope {
                selections[] = {"vhc_bags"};
                items[] = {"ACE_Rope12"};
                text = "Removing Rope...";
            }*/
        };
    };
};