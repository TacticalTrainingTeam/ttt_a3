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

    //ToDo ACRE Config Shelter Carrier
    class CUP_nHMMWV_Base;
    class CUP_nM1037sc_Base : CUP_nHMMWV_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Dashboard Left";      // Name displayed in the interaction menu
                shortName = "Left";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC117F
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";                    // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_2 {
                displayName = "Dashboard Right";      // Name displayed in the interaction menu
                shortName = "Right";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
            class Rack_3 {
                displayName = "Dashboard Front";      // Name displayed in the interaction menu
                shortName = "Front";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC110";        // Rack type (able to mount a PRC152)
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";        // Predefined mounted radio
                isRadioRemovable = 1;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };
    };
};

