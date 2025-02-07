class CfgVehicles {

    //MG3 und GMW
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
        class ACE_SelfActions;
    };
    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};
    class HMG_01_high_base_F: HMG_01_base_F {};

    class rnt_mg3_static: HMG_01_high_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                condition = "alive _target";
                position = "";

                class MG_hoehe_justieren {
                    condition = "true";

                    class MG3_up_ext {
                        condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                    };

                    class MG3_down_ext {
                        condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'down'] spawn redd_fnc_mg3_adjust_height";
                    };
                };

                class MG_hoehe_drehen {
                    condition = "true";

                    class MG3_left_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'left'] spawn redd_fnc_mg3_turn";
                    };

                    class MG3_right_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'right'] spawn redd_fnc_mg3_turn";
                    };
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            class MG_hoehe_justieren {
                condition = "alive _target";

                class MG3_up_int {
                    condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                };

                class MG3_down_int {
                    condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'down'] spawn redd_fnc_mg3_adjust_height";
                };
            };

            class MG_hoehe_drehen {
                condition = "alive _target";

                class MG3_left_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'left'] spawn redd_fnc_mg3_turn";
                };

                class MG3_right_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'right'] spawn redd_fnc_mg3_turn";
                };
            };
        };
    };

    class StaticGrenadeLauncher: StaticWeapon {};
    class GMG_TriPod: StaticGrenadeLauncher {};
    class GMG_01_base_F: GMG_TriPod {};

    class rnt_gmw_static: GMG_01_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                condition = "alive _target";
                position = "";

                class MG_hoehe_justieren {
                    condition = "true";

                    class gmw_up_ext {
                        condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'up'] spawn redd_fnc_gmw_adjust_height";
                    };

                    class gmw_down_ext {
                        condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'down'] spawn redd_fnc_gmw_adjust_height";
                    };
                };

                class MG_hoehe_drehen {
                    condition = "true";

                    class gmw_left_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'left'] spawn redd_fnc_gmw_turn";
                    };

                    class gmw_right_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'right'] spawn redd_fnc_gmw_turn";
                    };
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            class MG_hoehe_justieren {
                condition = "alive _target";

                class gmw_up_int {
                    condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'up'] spawn redd_fnc_gmw_adjust_height";
                };

                class gmw_down_int {
                    condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'down'] spawn redd_fnc_gmw_adjust_height";
                };
            };

            class MG_hoehe_drehen {
                condition = "alive _target";

                class gmw_left_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'left'] spawn redd_fnc_gmw_turn";
                };

                class gmw_right_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'right'] spawn redd_fnc_gmw_turn";
                };
            };
        };
    };

    class Car_F;
    //Fuchs
    class Wheeled_APC_F: Car_F
    {
        class NewTurret;

        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Turrets;
            };
        };
    };

    class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F
    {
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(common,BV);
                shortName = ECSTRING(common,BVShort);
                allowedPositions[] = {"driver", "gunner", {"turret", {0,3}}};
                disabledPositions[] = {};
                limitedPositions[] = {"commander", {"turret", {1}}, {"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 8;
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
        acre_infantryPhonePosition[] = {-1.1, -3.3, -0.4};

        class AcreRacks
        {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
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
                allowedPositions[] = {"inside"};
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
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"all"};
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                class Turrets: Turrets {
                    class commander_hatch: NewTurret {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";
                    };

                    class fake_gunner_turret: commander_hatch {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment1";
                    };
                };
            };

            class Fuchs_Bino_Turret_Com: NewTurret {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
            };

            class Fuchs_Milan_Turret: NewTurret {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";
            };
        };
    };
};
