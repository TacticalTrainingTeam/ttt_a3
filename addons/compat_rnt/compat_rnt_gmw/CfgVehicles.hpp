class XEH_CLASS_BASE;

class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
        class MainTurret;

        class ACE_Actions {
            class ACE_MainActions;
        };
        class ACE_SelfActions;
    };
    class StaticGrenadeLauncher: StaticWeapon {};
    class GMG_TriPod: StaticGrenadeLauncher {};
    class GMG_01_base_F: GMG_TriPod {};

    class rnt_gmw_static: GMG_01_base_F {
        armor = 500000; // Make invincible

        ace_cargo_noRename = 1;
        ace_cargo_canLoad = 0;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                //turretInfoType = QEGVAR(Redd_Main,RSC_MG3);

                gunnerGetInAction = "PlayerCrouch";
                gunnerGetOutAction = "PlayerCrouch";
            };
        };

        class EventHandlers {
            // Readd CBA XEH EventHandlers. (Redd didn't inherit from base eventhandles overwriting all eventhandles including XEH)
            class XEH_CLASS: XEH_CLASS_BASE {};
        };

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
};