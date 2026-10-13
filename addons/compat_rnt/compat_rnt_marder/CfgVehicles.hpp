class CBA_Extended_EventHandlers_base;

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
                class ViewOptics;
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Redd_Marder_1A5_base: Tank_F {

        ace_vehicles_engineStartDelay = 5;

        class TransportBackpacks {
            delete _xx_B_AssaultPack_rgr;
        };
        class TransportItems {
            delete _xx_Toolkit;
        };

        // Gunner and commander can fire the smoke launcher (the gunner needs it as weapon)
        EGVAR(smoke_launcher,muzzle) = QEGVAR(compat_rnt,SmokeLauncher);

        EGVAR(compat_rnt,commanderTurrets)[] = {{0, 0}, {1}, {2}};
        EGVAR(compat_rnt,commanderTurret)[] = {0, 0};
        EGVAR(compat_rnt,commanderHigherTurret)[] = {2};
        EGVAR(compat_rnt,commanderBinoVariable) = "Redd_Marder_Bino_In";
        EGVAR(compat_rnt,commanderResetVariables)[] = {"Redd_Marder_Commander_Up", "Redd_Marder_Commander_Winkelspiegel"};

        // Map on the rear ramp (requires Metis Enhanced)
        EGVAR(compat_rnt,mapActionPosition)[] = {0.0012, -3.5815, -1.83};
        EGVAR(compat_rnt,mapActionOrientation)[] = {{1, 0, 0}, {0, -0.193627, 0.981075}};
        EGVAR(compat_rnt,mapActionAnimation) = "heck_luke_rotation";
        EGVAR(compat_rnt,mapActionAnimationPhase) = 1;

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

        class Components: Components {
            #include "..\vehicleSystemsDisplay.inc.hpp"
        };

        class Turrets: Turrets {

            class MainTurret: MainTurret {

                discreteDistanceInitIndex = 6; // Set initial gun zeroing to 800 m
                lockWhenDriverOut = 0; // Don't lock turret when driver is turned out
                stabilizedInAxes = 0; // Turret is not stabilized
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                // Smoke launcher moves from the commander to the gunner
                weapons[] += {QEGVAR(compat_rnt,SmokeLauncher)};
                magazines[] += {"Redd_SmokeLauncherMag"};

                // No NVG
                class ViewOptics: ViewOptics {
                    visionMode[] = {"Normal", "TI"};
                };

                // No NVG
                class OpticsIn {
                    class Day1 {
                        visionMode[] = {"Normal"};
                    };

                    class Day2 {
                        visionMode[] = {"Normal"};
                    };
                };

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment3";

                        weapons[] = {};
                        magazines[] = {};

                        // No NVG
                        class ViewOptics: ViewOptics {
                            visionMode[] = {"Normal", "TI"};
                        };

                        class OpticsIn {
                            class Day1 {
                                visionMode[] = {"Normal"};
                            };

                            class Day2 {
                                visionMode[] = {"Normal"};
                            };
                        };
                    };
                };

                class CargoTurret_Links: NewTurret {
                    stabilizedInAxes = 0;
                    disableSoundAttenuation = 0;
                    soundAttenuationTurret = "TankAttenuation";
                    gunnerCompartments= "Compartment2";
                };
            };


            class Redd_Milan: NewTurret {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment4";

                // No NVG
                class OpticsIn {
                    class Day1 {
                        visionMode[] = {"Normal"};
                    };

                    class Day2 {
                        visionMode[] = {"Normal"};
                    };
                };
            };

            class Luchs_Bino_Turret_Com: NewTurret {
                stabilizedInAxes = 0;
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
            fired = QUOTE(call EFUNC(compat_rnt,handleMarderFired));
            getIn = QUOTE(call EFUNC(compat_rnt,handleGetIn));
            getOut = QUOTE(call EFUNC(compat_rnt,handleGetOut));
        };
    
        class UserActions {
            class heckluke_auf {
                displayName = SUBCSTRING(openRamp);
                displayNameDefault = SUBCSTRING(openRamp);
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = QUOTE([ARR_3(this,ACE_player,true)] call EFUNC(compat_rnt,canToggleRamp));
                statement = QUOTE(this call EFUNC(compat_rnt,openRamp));
            };

            class heckluke_zu {
                displayName = SUBCSTRING(closeRamp);
                displayNameDefault = SUBCSTRING(closeRamp);
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = QUOTE([ARR_3(this,ACE_player,false)] call EFUNC(compat_rnt,canToggleRamp));
                statement = QUOTE(this call EFUNC(compat_rnt,closeRamp));
            };

            class Bino_in {
                displayName = "$STR_Hoeher_steigen";
                displayNameDefault = "$STR_Hoeher_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnOut";
                condition = QUOTE((alive this) && {this turretUnit MARDER_COMMANDER_TURRET_PATH isEqualTo ACE_player} && {this animationSourcePhase 'hatchCommander' > 0});
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,getInHigher));
            };

            class Bino_out {
                displayName = "$STR_Tiefer_steigen";
                displayNameDefault = "$STR_Tiefer_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnIn";
                condition = QUOTE((alive this) && {this turretUnit MARDER_COMMANDER_HIGHER_TURRET_PATH isEqualTo ACE_player});
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,getOutHigher));
            };

            class GetOutHatchCommander {
                displayName = SUBCSTRING(getOutHatch);
                displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2 />";
                position = "actionsPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                priority = 6.2;
                shortcut = "GetOut";
                condition = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,canGetOutHatch));
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call EFUNC(compat_rnt,getOutHatch));
            };

            class GetOutHatchDriver: GetOutHatchCommander {
                condition = QUOTE([ARR_3(this,ACE_player,'driver')] call EFUNC(compat_rnt,canGetOutHatch));
                statement = QUOTE([ARR_3(this,ACE_player,'driver')] call EFUNC(compat_rnt,getOutHatch));
            };

            class GetOutHatchLeft: GetOutHatchCommander {
                condition = QUOTE([ARR_3(this,ACE_player,'left')] call EFUNC(compat_rnt,canGetOutHatch));
                statement = QUOTE([ARR_3(this,ACE_player,'left')] call EFUNC(compat_rnt,getOutHatch));
            };

            class GetOutHatchRight: GetOutHatchCommander {
                condition = QUOTE([ARR_3(this,ACE_player,'right')] call EFUNC(compat_rnt,canGetOutHatch));
                statement = QUOTE([ARR_3(this,ACE_player,'right')] call EFUNC(compat_rnt,getOutHatch));
            };

            class GetOutHatchMiddle: GetOutHatchCommander {
                condition = QUOTE([ARR_3(this,ACE_player,'middle')] call EFUNC(compat_rnt,canGetOutHatch));
                statement = QUOTE([ARR_3(this,ACE_player,'middle')] call EFUNC(compat_rnt,getOutHatch));
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

            class fixTurretBug {
                displayName = ECSTRING(compat_rnt,fixGetInSeat);
                condition = QUOTE(([ARR_2(this,'commander')] call EFUNC(compat_rnt,canGetInSeat)) && {this lockedTurret MARDER_COMMANDER_TURRET_PATH} && {isNull objectParent ACE_player});
                statement = QUOTE(this call EFUNC(compat_rnt,fixGetInBug));
            };

            // Replaced by the ramp actions above
            delete heckluke_auf_2;
            delete heckluke_zu_2;

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

        class Attributes {
            class EGVAR(compat_rnt,RampAttribute) {
                displayName = SUBCSTRING(openRamp);
                tooltip = SUBCSTRING(openRamp3DENTooltip);
                property = QEGVAR(compat_rnt,RampAttribute);
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "BOOL";
            };
        };
    };
};
