class CfgVehicles {

    class Mortar_01_base_F;
    class BWA3_MRS120_base: Mortar_01_base_F {
        class ace_csw {
            allowFireOnLoad = 1;
            /*
            * Available Options:
            *   0 - Disabled
            *   1 - Enabled, togglable on the gun via ACE interact
            *   2 - Enabled, and forced on.
            */
        };
    };

    class Helicopter_Base_F;
    class BWA3_NH90_base: Helicopter_Base_F {
        cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12};
        getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12};
        transportSoldier = 12;
    };

    // Interactions
    // https://ace3.acemod.org/wiki/framework/interactionmenu-framework#22-vehicle-interactions-based-on-animations
    class BWA3_Eagle_hatch_base;
    class BWA3_Eagle_flw100_base;

    class BWA3_Eagle_Fleck: BWA3_Eagle_hatch_base {
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
            };
        };

    class BWA3_Eagle_Tropen: BWA3_Eagle_hatch_base {
        class ace_interaction_anims {
            class backpack_back {
                positions[] = {{-0.3, -3.3, 1.5}};
                items[] = {"BWA3_PatrolPack_Tropen"};
                text = CSTRING(takebackpack);
            };
            class backpack_top {
                positions[] = {{0.8, -1.9, 2.3}};
                items[] = {"BWA3_PatrolPack_Tropen"};
                text = CSTRING(takebackpack);
            };
            };
        };

    class BWA3_Eagle_FLW100_Fleck: BWA3_Eagle_flw100_base {
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
            };
        };

    class BWA3_Eagle_FLW100_Tropen: BWA3_Eagle_flw100_base {
        class ace_interaction_anims {
            class backpack_back {
                positions[] = {{-0.3, -3.3, 1.5}};
                items[] = {"BWA3_PatrolPack_Tropen"};
                text = CSTRING(takebackpack);
            };
            class backpack_top {
                positions[] = {{0.8, -1.9, 2.3}};
                items[] = {"BWA3_PatrolPack_Tropen"};
                text = CSTRING(takebackpack);
            };
            };
        };

    // ACRE
    class Car_F;

    //Eagle IV
    class BWA3_Eagle_base: Car_F {
        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };

            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };

            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"none"};
            };
        };
    };

    //Dingo
     class BWA3_Dingo2_base: Car_F {
        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"none"};
            };
        };
     };

     //Multi
     class BWA3_Multi_base: Car_F {
        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"none"};
            };
        };
     };


    class Tank_F;
    //Puma
    class BWA3_Puma_base: Tank_F {

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(common,BV);
                shortName = ECSTRING(common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 2;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"all"};
            };
        };
    };
    //Skorpion
    class BWA3_Skorpion_base: Tank_F {

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(common,noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(common,BV);
                shortName = ECSTRING(common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 6;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"all"};
            };
        };
    };
    //Leopard 2
    class BWA3_Leopard_base: Tank_F {

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(common,noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(common,BV);
                shortName = ECSTRING(common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"all"};
            };
        };
    };

    //Pzh2000
    class BWA3_Panzerhaubitze2000_base: Tank_F {

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(common,noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(common,BV);
                shortName = ECSTRING(common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"all"};
            };
        };
    };
};
