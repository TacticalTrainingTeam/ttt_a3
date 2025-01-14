#include "script_component.hpp"
/*
 * Author: [W] Miller
 * Fügt ACE Interaktionen hinzu
 *
 * Arguments:
 *
 * Return Value:
 * None
 *
 */

if (!hasInterface) exitWith {};
//goggle change action
private _changeGoggles = [
    QGVAR(goggleChange),
    LSTRING(gogglesOnOff),//"Staubschutzbrille auf-/absetzen",
    "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\headgear_ca.paa",
    {
        [_player] call FUNC(switchGoggles);
    },
    {
        (
            ((goggles _player) in ["rhs_ess_black","rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw"]) &&
            (headgear _player in [
                "rhsusf_ach_helmet_ocp",
                "rhsusf_ach_helmet_ocp_alt",
                "rhsusf_ach_helmet_headset_ocp",
                "rhsusf_ach_helmet_headset_ocp_alt",
                "rhsusf_ach_bare_tan",
                "rhsusf_ach_bare_tan_headset",
                "rhsusf_ach_bare_des",
                "rhsusf_ach_bare_des_headset",
                "rhsusf_ach_helmet_ucp_alt",        
                "rhsusf_ach_helmet_ucp",
                "rhsusf_ach_helmet_headset_ucp",
                "rhsusf_ach_helmet_headset_ucp_alt",
                "rhsusf_ach_bare",
                "rhsusf_ach_bare_headset",
                "rhsusf_ach_bare_semi",
                "rhsusf_ach_bare_semi_headset",
                "rhsusf_ach_bare_wood",
                "rhsusf_ach_bare_wood_headset",
                "rhsusf_cvc_green_alt_helmet",
                "rhsusf_cvc_alt_helmet",
                "rhssaf_helmet_m97_black_nocamo",
                "rhssaf_helmet_m97_nostrap_blue",
                "rhssaf_helmet_m97_digital",
                "rhssaf_helmet_m97_md2camo",
                "rhssaf_helmet_m97_oakleaf",
                "rhssaf_helmet_m97_olive_nocamo",
                "rhssaf_helmet_m97_woodland",
                "rhsusf_lwh_helmet_marpatwd",
                "rhsusf_lwh_helmet_marpatwd_headset_blk2",
                "rhsusf_protech_helmet",
                "rhsusf_protech_helmet_rhino",
                "UK3CB_BAF_H_Mk7_Camo_A",
                "UK3CB_BAF_H_Mk7_Camo_B",
                "UK3CB_BAF_H_Mk7_Camo_C",
                "UK3CB_BAF_H_Mk7_Camo_D",
                "UK3CB_BAF_H_Mk7_Net_A",
                "UK3CB_BAF_H_Mk7_Net_B",
                "UK3CB_BAF_H_Mk7_Net_C",
                "UK3CB_BAF_H_Mk7_Net_D",
                "UK3CB_BAF_H_Mk7_Scrim_A",
                "UK3CB_BAF_H_Mk7_Scrim_B",
                "UK3CB_BAF_H_Mk7_Scrim_C"
            ])
        ) ||
        (
            !((goggles _player) in ["rhs_ess_black","rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw"]) &&
            (headgear _player in [
                "rhsusf_ach_helmet_ESS_ocp",
                "rhsusf_ach_helmet_ESS_ocp_alt",
                "rhsusf_ach_helmet_headset_ess_ocp",
                "rhsusf_ach_helmet_headset_ess_ocp_alt",
                "rhsusf_ach_bare_tan_ess",
                "rhsusf_ach_bare_tan_headset_ess",
                "rhsusf_ach_bare_des_ess",
                "rhsusf_ach_bare_des_headset_ess",
                "rhsusf_ach_helmet_ESS_ucp",
                "rhsusf_ach_helmet_ESS_ucp_alt",
                "rhsusf_ach_helmet_headset_ess_ucp",
                "rhsusf_ach_helmet_headset_ess_ucp_alt",
                "rhsusf_ach_bare_ess",
                "rhsusf_ach_bare_headset_ess",
                "rhsusf_ach_bare_semi_ess",
                "rhsusf_ach_bare_semi_headset_ess",
                "rhsusf_ach_bare_wood_ess",
                "rhsusf_ach_bare_wood_headset_ess",
                "rhsusf_cvc_green_ess",
                "rhsusf_cvc_ess",
                "rhssaf_helmet_m97_black_nocamo_black_ess_bare",
                "rhssaf_helmet_m97_nostrap_blue_tan_ess_bare",
                "rhssaf_helmet_m97_digital_black_ess_bare",
                "rhssaf_helmet_m97_md2camo_black_ess_bare",
                "rhssaf_helmet_m97_oakleaf_black_ess_bare",
                "rhssaf_helmet_m97_olive_nocamo_black_ess_bare",
                "rhssaf_helmet_m97_woodland_black_ess_bare",
                "rhsusf_lwh_helmet_marpatwd_blk_ess",
                "rhsusf_lwh_helmet_marpatwd_headset_blk",
                "rhsusf_protech_helmet_ess",
                "rhsusf_protech_helmet_rhino_ess",
                "UK3CB_BAF_H_Mk7_Camo_ESS_A",
                "UK3CB_BAF_H_Mk7_Camo_ESS_B",
                "UK3CB_BAF_H_Mk7_Camo_ESS_C",
                "UK3CB_BAF_H_Mk7_Camo_ESS_D",
                "UK3CB_BAF_H_Mk7_Net_ESS_A",
                "UK3CB_BAF_H_Mk7_Net_ESS_B",
                "UK3CB_BAF_H_Mk7_Net_ESS_C",
                "UK3CB_BAF_H_Mk7_Net_ESS_D",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_A",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_B",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_C"
            ])
        )
    }
] call ACE_interact_menu_fnc_createAction;
[
    player,
    1,
    ["ACE_SelfActions","ACE_Equipment"],
    _changeGoggles
] call ACE_interact_menu_fnc_addActionToObject;

//visor change action
private _changeVisor = [
    QGVAR(visorChange),
    LSTRING(visorOnOff)//"Visor hoch-/runterklappen",
    "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\headgear_ca.paa",
    {
        [_player] call FUNC(switchVisor);
    },
    {
        "rhsusf_hgu56p_" in (headgear _player)
    }
] call ACE_interact_menu_fnc_createAction;
[
    player,
    1,
    ["ACE_SelfActions","ACE_Equipment"],
    _changeVisor
] call ACE_interact_menu_fnc_addActionToObject;