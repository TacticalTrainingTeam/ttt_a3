#include "..\script_component.hpp"
/*
* Author: Timi007, Andx
* Updates the smoke launcher ammo counter of the local player: visibility, text color and ammo count.
*
* Arguments:
* None
*
* Return Value:
* Nothing
*
* Example:
* [] call ttt_smoke_launcher_fnc_updateDisplay
*
* Public: No
*/


private _vehicle = vehicle ace_player;
private _display = uiNamespace getVariable [QGVAR(display), displayNull];

// Restart display if null (this happens periodically)
if (isNull _display) then {
    ([QGVAR(RscDisplay)] call BIS_fnc_rscLayer) cutRsc [QGVAR(RscDisplay), "PLAIN", 1, false];
    GVAR(lastAmmoCount) = -1;

    _display = uiNamespace getVariable [QGVAR(display), displayNull];
    if (isNull _display) exitWith {};

    // Save original text color
    _display setVariable [QGVAR(textColor), ctrlTextColor (_display displayCtrl IDC_AMMO)];
};
if (isNull _display) exitWith {};

private _ctrlAmmo = _display displayCtrl IDC_AMMO;

// Hide ammo count when turned out, in the pause menu, Zeus, a dialog or with hidden HUD
if (
    isTurnedOut ace_player ||
    {GVAR(turret) isEqualTo [2]} || // Commander in the highest seat
    {!isNull (findDisplay IDD_INTERRUPT)} ||
    {!isNull (findDisplay IDD_RSCDISPLAYCURATOR)} ||
    {dialog} ||
    {uiNamespace getVariable ["RscDisplayCurator_screenshotMode", false]}
) exitWith {
    _ctrlAmmo ctrlShow false;
};
_ctrlAmmo ctrlShow true;

private _smokeLauncher = [typeOf _vehicle] call FUNC(getSmokeLauncher);

private _targetColor = if ([_vehicle] call FUNC(canFireSmoke) && {GVAR(lastFireSuccess)}) then {
    _display getVariable [QGVAR(textColor), [1, 1, 1, 1]]
} else {
    [0.9, 0, 0, 1]
};
if ((ctrlTextColor _ctrlAmmo) isNotEqualTo _targetColor) then {
    _ctrlAmmo ctrlSetTextColor _targetColor;
};

private _ammo = _vehicle ammo _smokeLauncher;
if (_ammo isNotEqualTo GVAR(lastAmmoCount)) then {
    _ctrlAmmo ctrlSetText format [LLSTRING(ammoCount), _ammo];
    GVAR(lastAmmoCount) = _ammo;
};
