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
    //Vanilla
    // class UAV_01_base_F: Helicopter_Base_F {
    //     class ACE_Actions: ACE_Actions {
    //         class ACE_MainActions: ACE_MainActions {
    //             class GVAR(pack) {
    //                 displayName = "Pack";
    //                 distance = 4;
    //                 condition = QUOTE(alive _target);
    //                 statement = QUOTE([ARR_2(_player,_target)] call FUNC(pack));
    //             };
    //         };
    //     };
    // };
    // class B_UAV_01_F: UAV_01_base_F {
    //     GVAR(case) = QGVAR(B_UAV_01_CASE);
    // };
    // class I_UAV_01_F: UAV_01_base_F {
    //     GVAR(case) = QGVAR(I_UAV_01_CASE);
    // };
    // class O_UAV_01_F: UAV_01_base_F {
    //     GVAR(case) = QGVAR(O_UAV_01_CASE);
    // };

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
        GVAR(case) = QGVAR(B_UAFPV_IED_AP_CASE);
    };
};
