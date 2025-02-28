#include "..\script_component.hpp"
/*
 * Author: [W] Miller
 * Erlaubt das auf-/absetzten einer Staubschutzbrille
 *
 * Arguments:
 * 0: UNIT
 *
 * Return Value:
 * None
 *
 */

params ["_player"];

if (!local _player) exitWith {};

//expand for 3CB and maybe Russian Helmets
private _currHeadgear = headgear _player;
private _currGoggles = goggles _player;

if (_currGoggles in ["rhs_ess_black","rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw"]) then {
    
    _player setVariable [QGVAR(goggleCache), _currGoggles];
    removeGoggles _player;
    switch (_currHeadgear) do {
        case "rhsusf_ach_helmet_ocp":                   { _player addHeadgear "rhsusf_ach_helmet_ESS_ocp"};
        case "rhsusf_ach_helmet_ocp_alt":               { _player addHeadgear "rhsusf_ach_helmet_ESS_ocp_alt"};
        case "rhsusf_ach_helmet_headset_ocp":           { _player addHeadgear "rhsusf_ach_helmet_headset_ess_ocp"};
        case "rhsusf_ach_helmet_headset_ocp_alt":       { _player addHeadgear "rhsusf_ach_helmet_headset_ess_ocp_alt"};
        case "rhsusf_ach_bare_tan":                     { _player addHeadgear "rhsusf_ach_bare_tan_ess"};
        case "rhsusf_ach_bare_tan_headset":             { _player addHeadgear "rhsusf_ach_bare_tan_headset_ess"};
        case "rhsusf_ach_bare_des":                     { _player addHeadgear "rhsusf_ach_bare_des_ess"};
        case "rhsusf_ach_bare_des_headset":             { _player addHeadgear "rhsusf_ach_bare_des_headset_ess"};

        case "rhsusf_ach_helmet_ucp_alt":               { _player addHeadgear "rhsusf_ach_helmet_ESS_ucp_alt"};
        case "rhsusf_ach_helmet_ucp":                   { _player addHeadgear "rhsusf_ach_helmet_ESS_ucp"};
        case "rhsusf_ach_helmet_headset_ucp":           { _player addHeadgear "rhsusf_ach_helmet_headset_ess_ucp"};
        case "rhsusf_ach_helmet_headset_ucp_alt":       { _player addHeadgear "rhsusf_ach_helmet_headset_ess_ucp_alt"};
        case "rhsusf_ach_bare":                         { _player addHeadgear "rhsusf_ach_bare_ess"};
        case "rhsusf_ach_bare_headset":                 { _player addHeadgear "rhsusf_ach_bare_headset_ess"};
        case "rhsusf_ach_bare_semi":                    { _player addHeadgear "rhsusf_ach_bare_semi_ess"};
        case "rhsusf_ach_bare_semi_headset":            { _player addHeadgear "rhsusf_ach_bare_semi_headset_ess"};
        case "rhsusf_ach_bare_wood":                    { _player addHeadgear "rhsusf_ach_bare_wood_ess"};
        case "rhsusf_ach_bare_wood_headset":            { _player addHeadgear "rhsusf_ach_bare_wood_headset_ess"};
        case "rhsusf_cvc_green_alt_helmet":             { _player addHeadgear "rhsusf_cvc_green_ess"};
        case "rhsusf_cvc_alt_helmet":                   { _player addHeadgear "rhsusf_cvc_ess"};

        case "rhssaf_helmet_m97_black_nocamo":          { _player addHeadgear "rhssaf_helmet_m97_black_nocamo_black_ess_bare"};
        case "rhssaf_helmet_m97_nostrap_blue":          { _player addHeadgear "rhssaf_helmet_m97_nostrap_blue_tan_ess_bare"};
        case "rhssaf_helmet_m97_digital":               { _player addHeadgear "rhssaf_helmet_m97_digital_black_ess_bare"};
        case "rhssaf_helmet_m97_md2camo":               { _player addHeadgear "rhssaf_helmet_m97_md2camo_black_ess_bare"};
        case "rhssaf_helmet_m97_oakleaf":               { _player addHeadgear "rhssaf_helmet_m97_oakleaf_black_ess_bare"};
        case "rhssaf_helmet_m97_olive_nocamo":          { _player addHeadgear "rhssaf_helmet_m97_olive_nocamo_black_ess_bare"};
        case "rhssaf_helmet_m97_woodland":              { _player addHeadgear "rhssaf_helmet_m97_woodland_black_ess_bare"};
        case "rhsusf_lwh_helmet_marpatwd":              { _player addHeadgear "rhsusf_lwh_helmet_marpatwd_blk_ess"};
        case "rhsusf_lwh_helmet_marpatwd_headset_blk2": { _player addHeadgear "rhsusf_lwh_helmet_marpatwd_headset_blk"};
        case "rhsusf_protech_helmet":                   { _player addHeadgear "rhsusf_protech_helmet_ess"};
        case "rhsusf_protech_helmet_rhino":             { _player addHeadgear "rhsusf_protech_helmet_rhino_ess"};

        case "UK3CB_BAF_H_Mk7_Camo_A":                  { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_A"};
        case "UK3CB_BAF_H_Mk7_Camo_B":                  { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_B"};
        case "UK3CB_BAF_H_Mk7_Camo_C":                  { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_C"};
        case "UK3CB_BAF_H_Mk7_Camo_D":                  { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_D"};

        case "UK3CB_BAF_H_Mk7_Net_A":                   { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_ESS_A"};
        case "UK3CB_BAF_H_Mk7_Net_B":                   { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_ESS_B"};
        case "UK3CB_BAF_H_Mk7_Net_C":                   { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_ESS_C"};
        case "UK3CB_BAF_H_Mk7_Net_D":                   { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_ESS_D"};

        case "UK3CB_BAF_H_Mk7_Scrim_A":                 { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_A"};
        case "UK3CB_BAF_H_Mk7_Scrim_B":                 { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_B"};
        case "UK3CB_BAF_H_Mk7_Scrim_C":                 { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_ESS_C"};
    };
} else {
    if (_currGoggles != "") then { _player unassignItem _currGoggles };
    _player addGoggles (_player getVariable [QGVAR(goggleCache), "rhs_ess_black"]);

    switch (_currHeadgear) do {
        case "rhsusf_ach_helmet_ESS_ocp":                       { _player addHeadgear "rhsusf_ach_helmet_ocp"};
        case "rhsusf_ach_helmet_ESS_ocp_alt":                   { _player addHeadgear "rhsusf_ach_helmet_ocp_alt"};
        case "rhsusf_ach_helmet_headset_ess_ocp":               { _player addHeadgear "rhsusf_ach_helmet_headset_ocp"};
        case "rhsusf_ach_helmet_headset_ess_ocp_alt":           { _player addHeadgear "rhsusf_ach_helmet_headset_ocp_alt"};
        case "rhsusf_ach_bare_tan_ess":                         { _player addHeadgear "rhsusf_ach_bare_tan"};
        case "rhsusf_ach_bare_tan_headset_ess":                 { _player addHeadgear "rhsusf_ach_bare_tan_headset"};
        case "rhsusf_ach_bare_des_ess":                         { _player addHeadgear "rhsusf_ach_bare_des"};
        case "rhsusf_ach_bare_des_headset_ess":                 { _player addHeadgear "rhsusf_ach_bare_des_headset"};

        case "rhsusf_ach_helmet_ESS_ucp":                       { _player addHeadgear "rhsusf_ach_helmet_ucp"};
        case "rhsusf_ach_helmet_ESS_ucp_alt":                   { _player addHeadgear "rhsusf_ach_helmet_ucp_alt"};
        case "rhsusf_ach_helmet_headset_ess_ucp":               { _player addHeadgear "rhsusf_ach_helmet_headset_ucp"};
        case "rhsusf_ach_helmet_headset_ess_ucp_alt":           { _player addHeadgear "rhsusf_ach_helmet_headset_ucp_alt"};
        case "rhsusf_ach_bare_ess":                             { _player addHeadgear "rhsusf_ach_bare"};
        case "rhsusf_ach_bare_headset_ess":                     { _player addHeadgear "rhsusf_ach_bare_headset"};
        case "rhsusf_ach_bare_semi_ess":                        { _player addHeadgear "rhsusf_ach_bare_semi"};
        case "rhsusf_ach_bare_semi_headset_ess":                { _player addHeadgear "rhsusf_ach_bare_semi_headset"};
        case "rhsusf_ach_bare_wood_ess":                        { _player addHeadgear "rhsusf_ach_bare_wood"};
        case "rhsusf_ach_bare_wood_headset_ess":                { _player addHeadgear "rhsusf_ach_bare_wood_headset"};
        case "rhsusf_cvc_green_ess":                            { _player addHeadgear "rhsusf_cvc_green"};
        case "rhsusf_cvc_ess":                                  { _player addHeadgear "rhsusf_cvc"};

        case "rhssaf_helmet_m97_black_nocamo_black_ess_bare":   { _player addHeadgear "rhssaf_helmet_m97_black_nocamo"};
        case "rhssaf_helmet_m97_nostrap_blue_tan_ess_bare":     { _player addHeadgear "rhssaf_helmet_m97_nostrap_blue"};
        case "rhssaf_helmet_m97_digital_black_ess_bare":        { _player addHeadgear "rhssaf_helmet_m97_digital"};
        case "rhssaf_helmet_m97_md2camo_black_ess_bare":        { _player addHeadgear "rhssaf_helmet_m97_md2camo"};
        case "rhssaf_helmet_m97_oakleaf_black_ess_bare":        { _player addHeadgear "rhssaf_helmet_m97_oakleaf"};
        case "rhssaf_helmet_m97_olive_nocamo_black_ess_bare":   { _player addHeadgear "rhssaf_helmet_m97_olive_nocamo"};
        case "rhssaf_helmet_m97_woodland_black_ess_bare":       { _player addHeadgear "rhssaf_helmet_m97_woodland"};
        case "rhsusf_lwh_helmet_marpatwd_blk_ess":              { _player addHeadgear "rhsusf_lwh_helmet_marpatwd"};
        case "rhsusf_lwh_helmet_marpatwd_headset_blk":          { _player addHeadgear "rhsusf_lwh_helmet_marpatwd_headset_blk2"};
        case "rhsusf_protech_helmet_ess":                       { _player addHeadgear "rhsusf_protech_helmet"};
        case "rhsusf_protech_helmet_rhino_ess":                 { _player addHeadgear "rhsusf_protech_helmet_rhino"};

        case "UK3CB_BAF_H_Mk7_Camo_ESS_A":                      { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_A"};
        case "UK3CB_BAF_H_Mk7_Camo_ESS_B":                      { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_B"};
        case "UK3CB_BAF_H_Mk7_Camo_ESS_C":                      { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_C"};
        case "UK3CB_BAF_H_Mk7_Camo_ESS_D":                      { _player addHeadgear "UK3CB_BAF_H_Mk7_Camo_D"};

        case "UK3CB_BAF_H_Mk7_Net_ESS_A":                       { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_A"};
        case "UK3CB_BAF_H_Mk7_Net_ESS_B":                       { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_B"};
        case "UK3CB_BAF_H_Mk7_Net_ESS_C":                       { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_C"};
        case "UK3CB_BAF_H_Mk7_Net_ESS_D":                       { _player addHeadgear "UK3CB_BAF_H_Mk7_Net_D"};

        case "UK3CB_BAF_H_Mk7_Scrim_ESS_A":                     { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_A"};
        case "UK3CB_BAF_H_Mk7_Scrim_ESS_B":                     { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_B"};
        case "UK3CB_BAF_H_Mk7_Scrim_ESS_C":                     { _player addHeadgear "UK3CB_BAF_H_Mk7_Scrim_C"};
    };
};