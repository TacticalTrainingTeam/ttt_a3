class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(assemble) {
                    displayName = "Assemble";
                    condition = QUOTE([_player] call FUNC(action_canAssemble));
                    insertChildren = QUOTE([_player] call FUNC(action_insertChildren));
                    statement = "";
                };
            };
        };
    };

    class Air;
    class Helicopter: Air {
        class ACE_Actions;
    };
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };

    //FPV
    class ua_drone_base_F: Helicopter_Base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(pack) {
                    displayName = "Pack";
                    distance = 4;
                    condition = QUOTE(alive _target);
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(pack));
                };
            };
        };
    };

    class B_UAFPV_IED_AP: ua_drone_base_F {
        GVAR(case) = QCLASS(B_UAFPV_IED_AP_CASE);
    };

    class B_UAFPV_OG7V_AP: ua_drone_base_F {
        GVAR(case) = QCLASS(B_UAFPV_OG7V_AP_CASE);
    };

    class B_UAFPV_PG7VL_AT: ua_drone_base_F {
        GVAR(case) = QCLASS(B_UAFPV_PG7VL_AT_CASE);
    };

    class B_UAFPV_RKG_AP: ua_drone_base_F {
        GVAR(case) = QCLASS(B_UAFPV_RKG_AP_CASE);
    };
};
