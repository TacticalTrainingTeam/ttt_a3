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

    class Car_F;
    class CUP_nHMMWV_Base: Car_F {
        class CargoTurret;
    };

    class CUP_nM1037sc_Base: CUP_nHMMWV_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "Radio Set";      // Name displayed in the interaction menu
                shortName = "Radio";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {"driver", {"cargo", 0}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_2 {
                displayName = "Dashboard Left 1";      // Name displayed in the interaction menu
                shortName = "D.L1";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_3 {
                displayName = "Dashboard Left 2";      // Name displayed in the interaction menu
                shortName = "D.L2";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_PRC117F";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_4 {
                displayName = "Dashboard Left 3";      // Name displayed in the interaction menu
                shortName = "D.R1";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC103";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 1;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_6 {
                displayName = "Dashboard Right 1";      // Name displayed in the interaction menu
                shortName = "D.R3";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_SEM90";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_SEM70";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_7 {
                displayName = "Dashboard Right 2";      // Name displayed in the interaction menu
                shortName = "D.R4";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_SEM90";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "ACRE_SEM70";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 0;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
            class Rack_8 {
                displayName = "Dashboard Right 3";      // Name displayed in the interaction menu
                shortName = "D.R4";                   // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_SEM90";        // Able to mount a PRC152
                allowedPositions[] = {{"cargo", 1}}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};             // Who cannot access the radio (default: {})
                defaultComponents[] = {};             // Use this to attach simple components like Antennas, they will first attempt to fill empty connectors but will overide existing connectors. Not yet fully implemented. (default: {})
                mountedRadio = "";        // Predefined mounted radio (default: "", meaning none)
                isRadioRemovable = 1;                 // Radio can be removed (default: 0)
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface) (default: {})
            };
        };
    };

    // all below made by: AChesheireCat and PabstMirror
    // source: https://github.com/BourbonWarfare/POTATO/blob/master/addons/miscFixes/patchCUP/config.cpp

    // Fix broken artillery computer on FV432 Mortar (shows artillery computer for 7.62mg)
    class CUP_B_FV432_Bulldog_GB_D;
    class CUP_B_FV432_Base: CUP_B_FV432_Bulldog_GB_D {
        class Turrets;
    };
    class CUP_B_FV432_GB_GPMG: CUP_B_FV432_Base {
        class NewTurret;
        class Turrets: Turrets {
            class MainTurret;
            class Commander;
        };
    };
    class CUP_B_FV432_Mortar: CUP_B_FV432_GB_GPMG {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                primaryGunner = 0;
            };
            class Commander: Commander {
                primaryGunner = 0;
            };
            class MortarTurret: NewTurret {
                primaryGunner = 1; // this breaks "stow gpmg" user action
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
            };
        };
        class UserActions {}; // clear all user actions (not a big deal)
    };

    // Fix the M1038 back seat
    class CUP_nM1038_Base: CUP_nHMMWV_Base {
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "CUP_HMMWV_bench_gunner_1";
            };
        };
    };

    // Tweaks to the GTK Boxer's handling (accel/braking) + countermeasures move to gunner
    class Wheeled_APC_F: Car_F {
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {};
            };
        };
    };

    class CUP_Boxer_Base: Wheeled_APC_F {
        class AnimationSources;
    };

    class CUP_Boxer_Base_HMG: CUP_Boxer_Base {
        class CargoTurret;
        class Turrets {
            class MainTurret: NewTurret {
                weapons[] = {"CUP_Vhmg_M2_veh","SmokeLauncher"};
                magazines[] = {"CUP_200Rnd_TE1_Red_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "SmokeLauncherMag"}; // was CUP_200Rnd_TE1_Red_Tracer_127x99_M
            };

            class CommanderTurret: NewTurret {
                weapons[] = {}; // was "SmokeLauncher"
                magazines[] = {}; // was "SmokeLauncherMag"
            };
        };

        accelAidForceCoef = 2.3; // was 1.4
        accelAidForceSpd = 25; // was 5
        brakeIdleSpeed = 1.78; // was 0
        maxFordingDepth = 1.0; // was 1.5
        class Wheels {
            class wheel_1_1 {
                maxBrakeTorque = 20000; // was 12500
                maxHandBrakeTorque = 30000; // was 25000
            };
        };

        // class AnimationSources: AnimationSources {
        //     class main_gun_muzzle_rot {
        //         weapon = "CUP_Vhmg_M3P_veh";
        //     };
        //     class main_gun_reload {
        //         weapon="CUP_Vhmg_M3P_veh";
        //     };
        //     class main_gun_reload_mag {
        //         weapon="CUP_Vhmg_M3P_veh";
        //     };
        //     class main_gun_revolving {
        //         weapon="CUP_Vhmg_M3P_veh";
        //     };
        // };
    };

    class CUP_Boxer_Base_GMG: CUP_Boxer_Base_HMG {
        class CargoTurret;
        class Turrets {
            class MainTurret: NewTurret {
                weapons[] = {"CUP_Vgmg_HKGMG_veh","SmokeLauncher"}; // added smoke launcher
                magazines[] = {"CUP_32Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","SmokeLauncherMag"}; // added smoke mag
            };
            class CommanderTurret: NewTurret {
                weapons[] = {}; // was "SmokeLauncher"
                magazines[] = {}; // was "SmokeLauncherMag"
            };
        };
    };

    // CUP-ACE_Viewports compat
    class CUP_BTR80_Common_Base: Wheeled_APC_F {
        class ace_viewports {
            class view_0 {
                camLocation[] = {0.734863, 0.143927, -0.291199};
                camAttach = 45;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_1 {
                camLocation[] = {0.950684, -0.00122738, -0.344391};
                camAttach = 90;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_2 {
                camLocation[] = {0.932129, -0.729811, -0.319};
                camAttach = 90;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_3 {
                camLocation[] = {-0.963379, -0.749183, -0.351501};
                camAttach = -90;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_4 {
                camLocation[] = {-0.973145, 0.0148516, -0.364868};
                camAttach = -90;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_5 {
                camLocation[] = {-0.73584, 0.119176, -0.291229};
                camAttach = -45;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
        };
    };
    class CUP_BTR90_Base: Wheeled_APC_F {
        class ace_viewports {
            class view_0 {
                camLocation[] = {0.533417, 2.4613, -0.309951};
                camAttach = 0;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_1 {
                camLocation[] = {0.877106, 2.38684, -0.306068};
                camAttach = 30;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_2 {
                camLocation[] = {1.04312, 0.0909424, -0.281996};
                camAttach = 60;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_3 {
                type = "";
                camLocation[] = {1.03799, -0.928223, -0.282196};
                camAttach = 80;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_4 {
                type = "";
                camLocation[] = {-0.90097, -0.913086, -0.282192};
                camAttach = -80;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
            class view_5 {
                type = "";
                camLocation[] = {-0.939301, 0.109985, -0.281992};
                camAttach = -60;
                compartments[]={"Compartment1"};
                roles[]={"cargo"};
            };
        };
    };
    class CUP_BTR90_HQ_Base: CUP_BTR90_Base { delete ace_viewports; }; // no cargo seats

    class CUP_M2Bradley_Base: Tank_F {
        ace_hunterkiller = 1;
        class ace_viewports {
            class view_0 {
                camLocation[] = {0.987915, -0.324707, -0.0673385};
                camAttach = 70;
                roles[]={"cargo"};
            };
            class view_1 {
                camLocation[] = {0.90979, -0.970215, -0.043139};
                camAttach = 120;
                roles[]={"cargo"};
            };
            class view_2 {
                camLocation[] = {0.328003, -1.87402, -0.0408039};
                camAttach = 160;
                roles[]={"cargo"};
            };
            class view_3 {
                camLocation[] = {-0.357178, -1.89063, -0.0480237};
                camAttach = 175;
                roles[]={"cargo"};
            };
            class view_4 {
                camLocation[] = {-0.752075, -1.87061, -0.0522318};
                camAttach = 190;
                roles[]={"cargo"};
            };
            class view_5 {
                camLocation[] = {-0.936401, -0.0942383, -0.107764};
                camAttach = -75;
                roles[]={"cargo"};
            };
            class SLD { // suppose to only be only on A3, but the A2s have the screen on the model?
                screenLocation[] = {0.729126,-0.191597,-0.573349};
                maxDistance = 5;
                type = "screen";
                camLocation[] = {0,0,0.05};
                camAttach[] = {0,0};
                roles[]={"cargo"};
            };
        };
    };
};

