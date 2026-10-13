class CfgVehicles {
    class LandVehicle;

    class Tank: LandVehicle {
        class NewTurret;
    };

    class Tank_F: Tank {
        class Components;
        class EventHandlers;
        class Turrets {
            class MainTurret: NewTurret {
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

        EGVAR(compat_rnt,commanderTurrets)[] = {{0, 0}, {0}, {2}};
        EGVAR(compat_rnt,commanderTurret)[] = {0, 0};
        EGVAR(compat_rnt,commanderHigherTurret)[] = {2};
        EGVAR(compat_rnt,commanderBinoVariable) = "Redd_WieselTOW_Bino_In";
        EGVAR(compat_rnt,loaderTurrets)[] = {{0, 1}, {1}, {3}};
        EGVAR(compat_rnt,loaderTurret)[] = {0, 1};
        EGVAR(compat_rnt,loaderHigherTurret)[] = {3};
        EGVAR(compat_rnt,loaderBinoVariable) = "Redd_WieselTOW_Bino2_In";

        class TransportBackpacks {
            delete _xx_B_AssaultPack_rgr;

            // One Milan tube is one TOW shot
            class _xx_milan_Bag {
                backpack = "Redd_Milan_Static_Barrel";
                count = 5;
            };
        };
        class TransportItems {delete _xx_Toolkit;};

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

        class EventHandlers: EventHandlers {
            fired = QUOTE(call EFUNC(compat_rnt,handleTOWFired));
            getIn = QUOTE(call EFUNC(compat_rnt,handleGetIn));
            getOut = QUOTE(call EFUNC(compat_rnt,handleGetOut));
        };

        class Components: Components {
            #include "..\vehicleSystemsDisplay.inc.hpp"
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                lockWhenDriverOut = 0;
                stabilizedInAxes = 0;
                turretInfoType = QEGVAR(compat_rnt,RSC_Milan);
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
                magazines[] = {"Redd_TOW_Mag"};

                class Components {
                    #include "..\vehicleSystemsDisplay.inc.hpp"
                };

                class OpticsIn {
                    class Day1 {
                        visionMode[] = {"Normal"}; // No NVG
                    };

                    class Day2 {
                        visionMode[] = {"Normal"}; // No NVG
                    };
                };

                class Turrets: Turrets {
                    class CommanderOptic: CommanderOptics {
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";

                        class Components {
                            #include "..\vehicleSystemsDisplay.inc.hpp"
                        };
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

            class Components {
                #include "..\vehicleSystemsDisplay.inc.hpp"
            };
        };
        class Bino_Turret_Com: NewTurret {
            stabilizedInAxes = 0;
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

            class Components {
                #include "..\vehicleSystemsDisplay.inc.hpp"
            };
        };

        class Bino_Turret_Loader: NewTurret {
            stabilizedInAxes = 0;
            disableSoundAttenuation = 0;
            soundAttenuationTurret = "TankAttenuation";
            gunnerCompartments = "Compartment3";

            class Components {
                #include "..\vehicleSystemsDisplay.inc.hpp"
            };
        };
        };

        class UserActions {
            class Bino_in {
                shortcut = "turnOut";
                condition = QUOTE((alive this) && {this turretUnit WIESEL_TOW_COMMANDER_TURRET_PATH isEqualTo ACE_player} && {this animationSourcePhase 'Hatch_L_Rear_Source' > 0});
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,getInHigher));
            };

            class Bino_out {
                shortcut = "turnIn";
                condition = QUOTE((alive this) && {this turretUnit WIESEL_TOW_COMMANDER_HIGHER_TURRET_PATH isEqualTo ACE_player});
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,getOutHigher));
            };

            class Bino2_in {
                shortcut = "turnOut";
                condition = QUOTE((alive this) && {this turretUnit WIESEL_TOW_LOADER_TURRET_PATH isEqualTo ACE_player} && {this animationSourcePhase 'Hatch_R_Rear_Source' > 0});
                statement = QUOTE([ARR_3(this,ACE_player,'loader')] call EFUNC(compat_rnt,getInHigher));
            };

            class Bino2_out {
                shortcut = "turnIn";
                condition = QUOTE((alive this) && {this turretUnit WIESEL_TOW_LOADER_HIGHER_TURRET_PATH isEqualTo ACE_player});
                statement = QUOTE([ARR_3(this,ACE_player,'loader')] call EFUNC(compat_rnt,getOutHigher));
            };

            class TOW_in {
                condition = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,canGetInTOW));
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getInTOW));
            };

            class TOW_aus {
                condition = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,canGetOutTOW));
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getOutTOW));
            };

            class MG3_in {
                condition = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,canGetInMG3));
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getInMG3));
            };

            class MG3_aus {
                condition = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,canGetOutMG3));
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getOutMG3));
            };

            class fixTurretBug {
                displayName = ECSTRING(compat_rnt,fixGetInSeat);
                condition = QUOTE((isNull objectParent ACE_player) && {((this lockedTurret WIESEL_TOW_COMMANDER_TURRET_PATH) && {[ARR_2(this,'commander')] call EFUNC(compat_rnt,canGetInSeat)}) || {(this lockedTurret WIESEL_TOW_LOADER_TURRET_PATH) && {[ARR_2(this,'loader')] call EFUNC(compat_rnt,canGetInSeat)}}});
                statement = QUOTE(this call EFUNC(compat_rnt,fixGetInBug));
            };

            // Camonet is set up automatically
            delete Redd_removeflag;
            delete Redd_redFlag;
            delete Redd_greenFlag;
            delete Redd_blueFlag;

            delete Tarnnetz_Fzg_aufbauen;
            delete Tarnnetz_Fzg_abbauen;
            delete Tarnnetz_Boden_aufbauen;
            delete Tarnnetz_Boden_abbauen;
        };
    };
};
