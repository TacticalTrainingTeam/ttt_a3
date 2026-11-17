#define COMMANDER_TURRET_PATH [0]
#define COMMANDER_HIGHER_TURRET_PATH [1]

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
                class Turrets {};
            };
        };
    };

    class Redd_Tank_Wiesel_1A4_MK20_base: Tank_F {
        maximumLoad = 10000;
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        //enableGPS = 0;

        EGVAR(compat_rnt,commanderTurrets)[] = {{0}, {1}};
        EGVAR(compat_rnt,commanderTurret)[] = {0};
        EGVAR(compat_rnt,commanderHigherTurret)[] = {1};
        EGVAR(compat_rnt,commanderBinoVariable) = "Redd_wieselMk20_Bino_In";

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

        class Components: Components {
            #include "..\vehicleSystemsDisplay.inc.hpp"
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                discreteDistanceInitIndex = 6;
                lockWhenDriverOut = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment1";

                class Components {
                    #include "..\vehicleSystemsDisplay.inc.hpp"
                };
            };

            class wieselMk20_Bino_Turret_Com: NewTurret {
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                class Components {
                    #include "..\vehicleSystemsDisplay.inc.hpp"
                };
            };
        };

        class EventHandlers: EventHandlers {
            getIn = QUOTE(call EFUNC(compat_rnt,handleGetIn));
            getOut = QUOTE(call EFUNC(compat_rnt,handleGetOut));
        };

        class UserActions {
            class Bino_in {
                displayName = "$STR_Hoeher_steigen";
                displayNameDefault = "$STR_Hoeher_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnOut";
                condition = QUOTE((alive this) && {this turretUnit COMMANDER_TURRET_PATH isEqualTo ACE_player} && {this animationSourcePhase 'hatchCommander_Source' > 0});
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getInHigher));
            };

            class Bino_out {
                displayName = "$STR_Tiefer_steigen";
                displayNameDefault = "$STR_Tiefer_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnIn";
                condition = QUOTE((alive this) && {this turretUnit COMMANDER_HIGHER_TURRET_PATH isEqualTo ACE_player});
                statement = QUOTE([ARR_2(this,ACE_player)] call EFUNC(compat_rnt,getOutHigher));
            };

            class fixTurretBug {
                displayName = ECSTRING(compat_rnt,fixGetInSeat);
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                condition = QUOTE(([ARR_2(this,'commander')] call EFUNC(compat_rnt,canGetInSeat)) && {this lockedTurret COMMANDER_TURRET_PATH} && {isNull objectParent ACE_player});
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
