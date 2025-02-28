class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class LandVehicle;

    class Tank: LandVehicle {
        class NewTurret;
    };

    class Tank_F: Tank {
        class Components;
        class EventHandlers;
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

    class Redd_Marder_1A5_base: Tank_F {

        ace_vehicles_engineStartDelay = 5;

        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};

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

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(common,noApiFunction);
        acre_infantryPhonePosition[] = {-1.23, -3.37, -0.78};

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

                lockWhenDriverOut = 0; // Don't lock turret when driver is turned out
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment3";
                    };
                };

                class CargoTurret_Links: NewTurret {
                    disableSoundAttenuation = 0;
                    soundAttenuationTurret = "TankAttenuation";
                    gunnerCompartments= "Compartment2";
                };
            };


            class Redd_Milan: NewTurret {
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment4";
            };

            class Luchs_Bino_Turret_Com: NewTurret {
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment4";
            };
        };

        class AnimationSources {
            class heck_luke_rotation {
                source = "user";
                initPhase = 0;
                animPeriod = 3;
                sound = "Redd_Heckluke_sound";
                soundPosition = "HecklukePoint";
            };

            class Spiegel_Source {
                source = "user";
                initPhase = 1; // fold in
                animPeriod = 2;
            };

            class Redd_Sandsacke_Links {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_Sandsacke_Rechts {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_sandsackrolle_links {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_sandsackrolle_rechts {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
        };

        class EventHandlers: EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
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
                condition = "(this turretUnit [0, 0] isEqualTo ACE_player) && (this animationSourcePhase 'hatchCommander' > 0) && (alive this)";
                statement = "ACE_player action ['moveToTurret', this, [2]]; [this, [[0, 0], true]] remoteExecCall ['lockTurret']; this setVariable ['Redd_Marder_Bino_In', true, true];";
            };

            class Bino_out {
                displayName = "$STR_Tiefer_steigen";
                displayNameDefault = "$STR_Tiefer_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnIn";
                condition = "(this turretUnit [2] isEqualTo ACE_player) && (alive this)";
                statement = "ACE_player action ['moveToTurret', this, [0,0]]; [this, [[0, 0], false]] remoteExecCall ['lockTurret']; this setVariable ['Redd_Marder_Bino_In', false, true];";
            };
            class MovePassengerOneToHatchLeft {
                displayName = SUBCSTRING(moveToHatch);
                displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
                position = "actionsPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                priority = 1.35;
                shortcut = "SwapGunner";
                condition = "(alive this) && (this getCargoIndex ACE_player isEqualTo 1) && (isNull (this turretunit [0, 1]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 1]]";
            };

            class MovePassengerTwoToHatchLeft: MovePassengerOneToHatchLeft {
                condition = "(alive this) && (this getCargoIndex player isEqualTo 2) && (isNull (this turretunit [0, 1]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 1]]";
            };

            class MovePassengerThreeToHatchRight: MovePassengerOneToHatchLeft {
                condition = "(alive this) && (this getCargoIndex ACE_player isEqualTo 3) && (isNull (this turretunit [0, 2]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 2]]";
            };
        };

    };
};