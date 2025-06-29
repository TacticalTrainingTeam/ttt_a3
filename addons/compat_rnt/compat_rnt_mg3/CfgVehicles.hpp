class XEH_CLASS_BASE;

class CfgVehicles {
    class Bag_Base;
    class rnt_mg3_static_tripod: Bag_Base {
        armor = 500000; // Make invincible

        class assembleInfo {
            primary = 1;
            base = "";
            assembleTo = QGVAR(Tripod);
            dissasembleTo[] = {};
            displayName = SUBCSTRING(lafette_displayname);
        };
    };


    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets;
        class MainTurret;
        class ACE_Actions {
            class ACE_MainActions;
        };
        class ACE_SelfActions;
    };
    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};
    class HMG_01_high_base_F: HMG_01_base_F {};

    class rnt_mg3_static: HMG_01_high_base_F {
        armor = 500000; // Make invincible
        ace_cargo_noRename = 1;
        ace_cargo_canLoad = 0;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = QEGVAR(compat_rnt,RSC_MG3);//removes direction in gunner view

                gunnerGetInAction = "PlayerProne";
                gunnerGetOutAction = "PlayerProne";
            };
        };

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "Redd_MG3_Static"; // Adjusted in CfgWeapons
            magazineLocation = "_target selectionPosition 'machinegun_eject_pos'";
            disassembleWeapon = "";
            disassembleTurret = QGVAR(Tripod);
            desiredAmmo = 250;
            ammoLoadTime = 5;
            ammoUnloadTime = 4;
        };

        class ACE_Actions: ACE_Actions {
            delete MG3_load;

            class ACE_MainActions: ACE_MainActions {
                displayName = SUBCSTRING(lafette_displayname);

                class GVAR(disassemble) {
                    displayName = CSTRING(disassemble);
                    condition = "(crew _target) isEqualTo []";
                    statement = QUOTE(call EFUNC(compat_rnt,disassembleMG));
                };
                
                class MG_hoehe_justieren {
                    condition = "true";

                    class MG3_up_ext {
                        condition = QUOTE([ARR_2(_target,'up')] call EFUNC(compat_rnt,canAdjustHeight));
                        statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                    };

                    class MG3_down_ext {
                        condition = QUOTE([ARR_2(_target,'down')] call EFUNC(compat_rnt,canAdjustHeight));
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
            delete MG3_load;

            condition = "alive _target";

            class MG_hoehe_justieren {
                condition = "alive _target";

                class MG3_up_int {
                    condition = QUOTE([ARR_2(_target,'up')] call EFUNC(compat_rnt,canAdjustHeight));
                    statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                };

                class MG3_down_int {
                    condition = QUOTE([ARR_2(_target,'down')] call EFUNC(compat_rnt,canAdjustHeight));
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

        class EventHandlers {
            // Readd CBA XEH EventHandlers. (Redd didn't inherit from base event handles overwriting all event handles including XEH)
            class XEH_CLASS: XEH_CLASS_BASE {};
        };
    };

    class ace_csw_sag30Tripod;
    class GVAR(Tripod): ace_csw_sag30Tripod {
        displayName = SUBCSTRING(lafette_displayname);
        scope = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 2, 0};
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 2, 0};

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ACE_CSW_genericTripod_displayName";
                selection = "";
                distance = 2.5;
                condition = "alive _target";

                class GVAR(mountWeapon) {
                    displayName = CSTRING(mount);
                    condition = QUOTE(call EFUNC(compat_rnt,canMountMG));
                    icon = "\Redd_Backpacks\pictures\rnt_mg3_static_barell_ui_pre_ca.paa";
                    statement = QUOTE(call EFUNC(compat_rnt,mountMG));
                };
                class GVAR(pickup) {
                    displayName = "$STR_ACE_CSW_Pickup_displayName";
                    condition = "(backpack _player) isEqualTo ''";
                    icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\backpack_ca.paa";
                    statement = QUOTE(call EFUNC(compat_rnt,pickupMGTripod));
                };
            };
        };
    };
};
