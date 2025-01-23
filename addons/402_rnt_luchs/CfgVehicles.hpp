class CfgVehicles {
    class Wheeled_APC_F;
    class rnt_sppz_2a2_luchs_Base: Wheeled_APC_F {
        //maximumLoad = 10000;
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        //enableGPS = 0;

        class AcreIntercoms {
            class Intercom_1 {
                displayName = ECSTRING(402_common,BV);
                shortName = ECSTRING(402_common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(402_common,noApiFunction);
        acre_infantryPhonePosition[] = {};

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(402_common,RackA);
                shortName = ECSTRING(402_common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {1}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_2 {//mit rückwärts fahrer prüfen
                displayName = ECSTRING(402_common,RackB);
                shortName = ECSTRING(402_common,RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {{"turret", {1}}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };
    };
};