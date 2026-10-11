#include "..\script_component.hpp"
/*
 * Author: Andy
 *
 * Module handler for "Set as BFT Jammer". Registers the synced object (or a spawned
 * Crows_dataterminal, if none is synced - mirrors CrowsEW's own "Set as Jammer" module)
 * as a CrowsEW jammer via CrowsEW's own public event, tagged with a BFT-only capability.
 * CrowsEW doesn't recognize the tag, so it just carries it along in its jamMap/broadcasts -
 * this is the entire integration surface, nothing in CrowsEW is modified.
 *
 * The Spectrum beacon (detectability) is not added here - fnc_onUpdateJammersServer.sqf
 * reconciles it from crowsEW_main_updateJammers, which also fires once this event completes.
 * It reads its frequency back off the jammer object (QGVAR(frequency)), set below, since
 * CrowsEW's jamMap entry format has no room for it.
 *
 * Arguments:
 * Arma 3 Module Function Parameters
 * https://community.bistudio.com/wiki/Modules#Configuring_the_Module_Function
 *
 * Return Value:
 * true
 *
 * Public: No
 */

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {true};

private _unit = objNull;
if (count _units < 1) then {
    private _posAGL = ASLToAGL getPosASL _logic;
    _unit = createVehicle ["Crows_dataterminal", _posAGL, [], 0, "NONE"];
    ["zen_common_addObjects", [[_unit], objNull]] call CBA_fnc_serverEvent;
} else {
    _unit = _units select 0;
};

private _jamType = _logic getVariable [QGVAR(addBftJammer_jamType), BFT_JAM_TYPE_BLACKOUT];
private _radEffective = _logic getVariable [QGVAR(addBftJammer_effectiveRadius), 200];
private _radFalloff = _logic getVariable [QGVAR(addBftJammer_falloffRadius), 400];
private _frequency = _logic getVariable [QGVAR(addBftJammer_frequency), 805];
private _isActiveAtMissionStart = _logic getVariable [QGVAR(addBftJammer_isActiveAtMissionStart), true];

private _capabilities = [[BFT_JAM_CAP_BLACKOUT, BFT_JAM_CAP_DRIFT, BFT_JAM_CAP_MIXED] select _jamType];

_unit setVariable [QGVAR(frequency), _frequency];

[CROWSEW_ADD_JAMMER_EVENT, [_unit, _radFalloff, _radEffective, _isActiveAtMissionStart, _capabilities]] call CBA_fnc_serverEvent;

true;
