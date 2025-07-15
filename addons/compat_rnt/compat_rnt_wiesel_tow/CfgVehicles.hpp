class CfgVehicles {
    class LandVehicle;

    class Tank: LandVehicle {
        class NewTurret;
        class CommanderOptics;
    };

    class Tank_F: Tank {
        class Components;
        class ViewOptics;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Redd_Tank_Wiesel_1A2_TOW_base: Tank_F {
        //maximumLoad = 10000;
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        //enableGPS = 0;

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

        acre_hasInfantryPhone = 0;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(common,noApiFunction);
        acre_infantryPhonePosition[] = {};

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

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                lockWhenDriverOut = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                class Turrets: Turrets {
                    class CommanderOptic: CommanderOptics {
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";

                    };
                };
            };

        class Loader_MG3: NewTurret {
            lockWhenDriverOut = 0;
            stabilizedInAxes = 0;
            turretInfoType = QEGVAR(compat_rnt,RSC_MG3);
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";
        };
        class Bino_Turret_Com: NewTurret {
            stabilizedInAxes = 0;
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

        };

        class Bino_Turret_Loader: NewTurret {
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";
            };
        };
    };
};
