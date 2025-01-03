//https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations

class CfgVehicles {
    class Car_F;
    class BWA3_Eagle_base: Car_F {
        class ace_interaction_anims {
            class backpack_back {
                positions[] = {{-0.3, -3.3, 1.5}};
                items[] = {"BWA3_PatrolPack_Fleck"};
                text = CSTRING(takebackpack);
            };
            class backpack_top { 
                positions[] = {{0.8, -1.9, 2.3}};
                items[] = {"BWA3_PatrolPack_Fleck"};
                text = CSTRING(takebackpack);
            };
            /*
            This is already done by BWA3, but doenst yield a rope
            class hide_rope {
                selections[] = {"vhc_bags"};
                items[] = {"ACE_Rope12"};
                text = "Removing Rope...";
            }*/
        };
        class AcreRacks {
            //Rack_1 and Rack_2 are already defined in BWA3
            class Rack_3 {
                displayName = "Dash Upper II";      // Name displayed in the interaction menu
                shortName = "D.Up2";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        }; 
    };
};