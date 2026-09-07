class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(assemble) {
                    displayName = CSTRING(assemble);
                    condition = QUOTE([_player] call FUNC(action_canAssemble));
                    insertChildren = QUOTE([_player] call FUNC(action_insertChildren));
                    statement = "";
                };
            };
        };
    };

    //FPV
    class Helicopter_Base_F;
    class drone_base_F: Helicopter_Base_F {
        class ACE_Actions;
    };
    class ARMAFPV_Crocus_AT_Base: drone_base_F {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class B_Crocus_AT: ARMAFPV_Crocus_AT_Base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(pack) {
                    displayName = CSTRING(pack);
                    distance = 4;
                    condition = QUOTE(alive _target);
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(pack));
                };
            };
        };

        GVAR(case) = QCLASS(B_Crocus_AT_CASE);
    };

    class B_Crocus_AT_TI: B_Crocus_AT {
        GVAR(case) = QCLASS(B_Crocus_AT_TI_CASE);
    };

    class ARMAFPV_Crocus_AP_Base: drone_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
    };
    class B_Crocus_AP: ARMAFPV_Crocus_AP_Base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class GVAR(pack) {
                    displayName = CSTRING(pack);
                    distance = 4;
                    condition = QUOTE(alive _target);
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(pack));
                };
            };
        };

        GVAR(case) = QCLASS(B_Crocus_AP_CASE);
    };

    class B_Crocus_AP_TI: B_Crocus_AP {
        GVAR(case) = QCLASS(B_Crocus_AP_TI_CASE);
    };
};
