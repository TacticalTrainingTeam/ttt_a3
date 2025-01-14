#include "script_component.hpp"
/*
 * Author: [W] Miller
 * Erlaubt das herauf-/herunterklappen des Helmvisiers
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

private _currHeadgear = headgear _player;

//Needs expanding for Russian Helmets
switch (_currHeadgear) do {
    case "rhsusf_hgu56p_black":                     { _player addHeadgear "rhsusf_hgu56p_visor_black";};
    case "rhsusf_hgu56p_visor_black":               { _player addHeadgear "rhsusf_hgu56p_black";};
    case "rhsusf_hgu56p_mask_black":                { _player addHeadgear "rhsusf_hgu56p_visor_mask_black";};
    case "rhsusf_hgu56p_visor_mask_black":          { _player addHeadgear "rhsusf_hgu56p_mask_black";};
    case "rhsusf_hgu56p_mask_Empire_black":         { _player addHeadgear "rhsusf_hgu56p_visor_mask_Empire_black";};
    case "rhsusf_hgu56p_visor_mask_Empire_black":   { _player addHeadgear "rhsusf_hgu56p_mask_Empire_black";};
    case "rhsusf_hgu56p_mask_black_skull":          { _player addHeadgear "rhsusf_hgu56p_visor_mask_black_skull";};
    case "rhsusf_hgu56p_visor_mask_black_skull":    { _player addHeadgear "rhsusf_hgu56p_mask_black_skull";};

    case "rhsusf_hgu56p_green":                     { _player addHeadgear "rhsusf_hgu56p_visor_green";};
    case "rhsusf_hgu56p_visor_green":               { _player addHeadgear "rhsusf_hgu56p_green";};
    case "rhsusf_hgu56p_mask_green":                { _player addHeadgear "rhsusf_hgu56p_visor_mask_green";};
    case "rhsusf_hgu56p_visor_mask_green":          { _player addHeadgear "rhsusf_hgu56p_mask_green";};
    case "rhsusf_hgu56p_mask_green_mo":             { _player addHeadgear "rhsusf_hgu56p_visor_mask_green_mo";};
    case "rhsusf_hgu56p_visor_mask_green_mo":       { _player addHeadgear "rhsusf_hgu56p_mask_green_mo";};
    case "rhsusf_hgu56p_mask_smiley":               { _player addHeadgear "rhsusf_hgu56p_visor_mask_smiley";};
    case "rhsusf_hgu56p_visor_mask_smiley":         { _player addHeadgear "rhsusf_hgu56p_mask_smiley";};

    case "rhsusf_hgu56p":                           { _player addHeadgear "rhsusf_hgu56p_visor";};
    case "rhsusf_hgu56p_visor":                     { _player addHeadgear "rhsusf_hgu56p";};
    case "rhsusf_hgu56p_mask":                      { _player addHeadgear "rhsusf_hgu56p_visor_mask";};
    case "rhsusf_hgu56p_visor_mask":                { _player addHeadgear "rhsusf_hgu56p_mask";};
    case "rhsusf_hgu56p_mask_mo":                   { _player addHeadgear "rhsusf_hgu56p_visor_mask_mo";};
    case "rhsusf_hgu56p_visor_mask_mo":             { _player addHeadgear "rhsusf_hgu56p_mask_mo";};
    case "rhsusf_hgu56p_mask_skull":                { _player addHeadgear "rhsusf_hgu56p_visor_mask_skull";};
    case "rhsusf_hgu56p_visor_mask_skull":          { _player addHeadgear "rhsusf_hgu56p_mask_skull";};

    case "rhsusf_hgu56p_tan":                       { _player addHeadgear "rhsusf_hgu56p_visor_tan";};
    case "rhsusf_hgu56p_visor_tan":                 { _player addHeadgear "rhsusf_hgu56p_tan";};
    case "rhsusf_hgu56p_mask_tan":                  { _player addHeadgear "rhsusf_hgu56p_visor_mask_tan";};
    case "rhsusf_hgu56p_visor_mask_tan":            { _player addHeadgear "rhsusf_hgu56p_mask_tan";};

    case "rhsusf_hgu56p_pink":                      { _player addHeadgear "rhsusf_hgu56p_visor_pink";};
    case "rhsusf_hgu56p_visor_pink":                { _player addHeadgear "rhsusf_hgu56p_pink";};
    case "rhsusf_hgu56p_mask_pink":                 { _player addHeadgear "rhsusf_hgu56p_visor_mask_pink";};
    case "rhsusf_hgu56p_visor_mask_pink":           { _player addHeadgear "rhsusf_hgu56p_mask_pink";};

    case "rhsusf_hgu56p_saf":                       { _player addHeadgear "rhsusf_hgu56p_visor_saf";};
    case "rhsusf_hgu56p_visor_saf":                 { _player addHeadgear "rhsusf_hgu56p_saf";};
    case "rhsusf_hgu56p_mask_saf":                  { _player addHeadgear "rhsusf_hgu56p_visor_mask_saf";};
    case "rhsusf_hgu56p_visor_mask_saf":            { _player addHeadgear "rhsusf_hgu56p_mask_saf";};

    case "rhsusf_hgu56p_white":                     { _player addHeadgear "rhsusf_hgu56p_visor_white";};
    case "rhsusf_hgu56p_visor_white":               { _player addHeadgear "rhsusf_hgu56p_white";};

    case "rhsusf_hgu56p_usa":                       { _player addHeadgear "rhsusf_hgu56p_visor_usa";};
    case "rhsusf_hgu56p_visor_usa":                 { _player addHeadgear "rhsusf_hgu56p_usa";};
};