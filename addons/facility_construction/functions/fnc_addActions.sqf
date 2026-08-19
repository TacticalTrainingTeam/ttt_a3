#include "..\script_component.hpp"
/*
* Author: EinStein, Andx
*
* Registers/unregisters the construct and deconstruct ACE self-interactions for one
* facility_construction consumer (e.g. medic_vehicle, repair_vehicle). Called by the
* consuming addon's own FUNC(addActions) every time it (re)builds its context, so
* settings changes are picked up the same way as before.
*
* Arguments:
* 0: Context <HASHMAP> - per-consumer configuration, built fresh by the calling addon's own
*    FUNC(addActions) every time it (re)builds its context. Expected keys (see readme.md for
*    the full description of each):
*      - "varPrefix" <STRING> - prefix for all object variables this framework sets/reads
*        (e.g. "ttt_medic_vehicle"), combined with suffixes like _hasFacility, _vehicle,
*        _facility, _inUse, _fuel.
*      - "legacyHasFacilityVar" <STRING> (optional, default "") - pre-refactor per-addon
*        variable name (e.g. "ttt_medic_vehicle_hasTent") still honored as a first-read
*        fallback in FUNC(canConstruct) when the varPrefix-based variable isn't set yet.
*      - "enable" <BOOLEAN> - whether the actions should be (re)added; when false, only the
*        removal step below runs and nothing is attached.
*      - "supportedVehicles" <ARRAY of STRING> - vehicle class names the construct action is
*        attached to.
*      - "facilityObject" <STRING> - class name of the object created on construct; also the
*        class the deconstruct action is attached to.
*      - "buildTime" <NUMBER> - seconds the ACE progress bar takes for construct/deconstruct.
*      - "useAnimation" <BOOLEAN> - whether the caller plays "buildAnimation" during the
*        progress bar.
*      - "buildAnimation" <STRING> - animation played via playMove while useAnimation is true.
*      - "facilityMarkerVar" <STRING> - global object variable set to true on the facility once
*        constructed (e.g. "ace_medical_isMedicalFacility"), used by other systems (e.g. ACE
*        medical/repair) to recognize the object.
*      - "actionIdConstruct" <STRING> - unique ACE self-interaction action id for the construct
*        action; also used as the removal key when unregistering.
*      - "actionIdDeconstruct" <STRING> - unique ACE self-interaction action id for the
*        deconstruct action; also used as the removal key when unregistering.
*      - "strings" <HASHMAP> - display text, with keys "actionConstruct"/"actionDeconstruct"
*        (action menu labels), "abort" (shown when a progress bar is cancelled),
*        "hintErrorNoSpace" (shown when there isn't enough room to construct), and
*        "hintLoaded" (shown on deconstruct).
*      - "extraConstructFx" <CODE> (optional, default {}) - called with [_facility] after
*        construction for consumer-specific setup, e.g. the medic tent's door/roof/solar-panel
*        animations.
*
* Return Value:
* None
*
* Example:
* [_context] call ttt_facility_construction_fnc_addActions;
*
* Public: Yes
*/

params ["_context"];

private _supportedVehicles = _context get "supportedVehicles";
private _facilityObject = _context get "facilityObject";
private _actionIdConstruct = _context get "actionIdConstruct";
private _actionIdDeconstruct = _context get "actionIdDeconstruct";

{
    [_x, 0, ["ACE_MainActions", _actionIdConstruct]] call ace_interact_menu_fnc_removeActionFromClass;
} forEach _supportedVehicles;

[_facilityObject, 0, ["ACE_MainActions", _actionIdDeconstruct]] call ace_interact_menu_fnc_removeActionFromClass;

if !(_context get "enable") exitWith {};

private _strings = _context get "strings";

private _constructAction =
[
    _actionIdConstruct,
    _strings get "actionConstruct",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
    {[_this] call FUNC(progressbarConstruct)},
    {[_this] call FUNC(canConstruct)},
    {},
    _context
] call ace_interact_menu_fnc_createAction;

private _deconstructAction =
[
    _actionIdDeconstruct,
    _strings get "actionDeconstruct",
    "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
    {[_this] call FUNC(progressbarDeconstruct)},
    {[_this] call FUNC(canDeconstruct)},
    {},
    _context
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _constructAction] call ace_interact_menu_fnc_AddActionToClass;
} forEach _supportedVehicles;

[_facilityObject, 0, ["ACE_MainActions"], _deconstructAction] call ace_interact_menu_fnc_AddActionToClass;
