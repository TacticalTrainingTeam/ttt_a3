class CfgVehicles {
    class Tank_F;
    class CUP_M113New_Base: Tank_F {
        //https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations
        class ace_interaction_anims {
            class hide_Deployment {
                positions[] = {{1.8, 0.35, -0.8},{-1.4, 0.9, -1.2}};
                items[] = {"CUP_Weapon_launch_M136", "CUP_B_USPack_Coyote", "CUP_B_USPack_Coyote", "CUP_B_USPack_Coyote"};
                text = "Removing backpacks and AT4...";
            };
        };
    };

    //ToDo ACRE Config Shelter Carrier
    class CUP_nHMMWV_Base;
    class CUP_nM1037sc_Base : CUP_nHMMWV_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Upper";      // Name displayed in the interaction menu
                shortName = "D.Up";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC110";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "";                    // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 1;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        };
    };
};

