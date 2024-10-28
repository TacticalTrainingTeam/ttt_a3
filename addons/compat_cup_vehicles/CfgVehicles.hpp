//https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations

class CfgVehicles {
    class Tank_F;
    class CUP_M113New_Base: Tank_F {
        class ace_interaction_anims {
            class hide_Deployment { //Not Working
                positions[] = {{1.8, 0.35, -0.8},{-1.4, 0.9, -1.2}};
                items[] = {"CUP_Weapon_launch_M136", "CUP_B_USPack_Coyote", "CUP_B_USPack_Coyote", "CUP_B_USPack_Coyote"};
                text = "Removing backpacks and AT4...";
            };
        };
    };

    class Car_F;
    CUP_nHMMWV_Base: Car_F {
        class ace_interaction_anims {
            class hide_jerrycans { 
                positions[] = {{-1.0, -2.7, -1.2}};
                items[] = {"Land_CanisterFuel_F", "Land_CanisterFuel_F"};
                text = "Removing Jerry Cans...";
            };
            class hide_jerrycans { 
                positions[] = {{0.25, -2.7, -1.2}};
                items[] = {"hide_spare_wheel"};
                text = "Removing Jerry Cans...";
            };
        };
    };
};