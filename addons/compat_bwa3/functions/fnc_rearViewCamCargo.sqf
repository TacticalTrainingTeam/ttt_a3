#include "..\script_component.hpp"
/**
 *  Author: commy2, Max, Timi007
 *  Source: PzGrenBtl402 addons/BwMod_Puma/functions/fnc_rearViewCamCargo.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), reworked, per frame handler with interval instead of a scheduled waitUntil loop
 *
 *  Description:
 *      Displays a rear view camera/commander camera.
 *
 *  Parameter(s):
 *      0: OBJECT - Puma.
 *      1: NUMBER - Camera index (0-5) or -1 to disable.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [vehicle player, 0] call ttt_compat_bwa3_fnc_rearViewCamCargo
 *
 *  Public: No
 *
 */

#define ACTIVE_POS [0.330 * safeZoneW + safeZoneX, 0.277 * safeZoneH + safeZoneY, 0.34 * safeZoneW, 0.455 * safeZoneH]
#define SLEEP_POS [safeZoneX + safeZoneW - pixelW, safeZoneY + safeZoneH - pixelH, pixelW, pixelH]

params ["_vehicle", "_selectedCamera"];

disableSerialization;
private _dlgRearViewCam = uiNamespace getVariable "BWA3_dlgRearViewCam";
private _ctrlRearViewCamProxy = _dlgRearViewCam displayCtrl 1;
private _ctrlRearViewCamProxyNVG = _dlgRearViewCam displayCtrl 2;
private _ctrlRearViewCam = _dlgRearViewCam displayCtrl 4;
private _ctrlRearViewCamIndicator = _dlgRearViewCam displayCtrl 5;

_ctrlRearViewCam ctrlShow true;
_ctrlRearViewCamIndicator ctrlShow true;
_ctrlRearViewCamProxy ctrlSetPosition ACTIVE_POS;
_ctrlRearViewCamProxy ctrlCommit 0;

_ctrlRearViewCamIndicator ctrlSetText "";

switch (_selectedCamera) do {
    case -1: {
        BWA3_isRearViewCamera = false;
    };
    case 0: {
        [_vehicle, "cameraL", [-250, 150, -0.08], [0, -0.1, 0], 0.5, QPATHTOF(data\rsc\Radar_9.paa)] call FUNC(setCamera);
    };
    case 1: {
        [_vehicle, "cameraL", [-100, -150, -0.1], [0, 0, 0], 0.5, QPATHTOF(data\rsc\Radar_7.paa)] call FUNC(setCamera);
    };
    case 2: {
        [_vehicle, "cameraR", [100, -150, -0.1], [0, 0, 0], 0.5, QPATHTOF(data\rsc\Radar_5.paa)] call FUNC(setCamera);
    };
    case 3: {
        [_vehicle, "cameraR", [250, 150, -0.08], [0, -0.1, 0], 0.5, QPATHTOF(data\rsc\Radar_3.paa)] call FUNC(setCamera);
    };
    case 4: {
        [_vehicle, "commanderview", [0, 250, 0], [0, 0, 0], 0.25, QPATHTOF(data\rsc\Radar_Kdt.paa)] call FUNC(setCamera);
    };
    case 5: {
        [_vehicle, "commanderview", [0, 250, 0], [0, 0, 0], 0.01, QPATHTOF(data\rsc\Radar_Kdt.paa)] call FUNC(setCamera);
    };
};

// Only one handler at a time, switching the camera keeps the camera view open
if (GVAR(rearViewCamPFH) >= 0) then {
    [GVAR(rearViewCamPFH)] call CBA_fnc_removePerFrameHandler;
    GVAR(rearViewCamPFH) = -1;
};

private _hideCamera = {
    params ["_ctrlRearViewCamProxy", "_ctrlRearViewCamProxyNVG", "_ctrlRearViewCam", "_ctrlRearViewCamIndicator"];

    _ctrlRearViewCam ctrlShow false;
    _ctrlRearViewCamIndicator ctrlShow false;
    _ctrlRearViewCamProxy ctrlSetPosition SLEEP_POS;
    _ctrlRearViewCamProxy ctrlCommit 0;
    _ctrlRearViewCamProxyNVG ctrlSetPosition SLEEP_POS;
    _ctrlRearViewCamProxyNVG ctrlCommit 0;
};

if (!BWA3_isRearViewCamera) exitWith {
    [_ctrlRearViewCamProxy, _ctrlRearViewCamProxyNVG, _ctrlRearViewCam, _ctrlRearViewCamIndicator] call _hideCamera;
};

// Switches between the normal and the NVG picture when the vision mode changes and closes the camera when it is not needed anymore
GVAR(rearViewCamPFH) = [{
    params ["_args", "_handle"];
    _args params ["_vehicle", "_ctrlRearViewCamProxy", "_ctrlRearViewCamProxyNVG", "_ctrlRearViewCam", "_ctrlRearViewCamIndicator", "_hideCamera"];

    private _player = call CBA_fnc_currentUnit;
    private _visionMode = currentVisionMode _player;

    if (_visionMode != (_args select 6)) then {
        _args set [6, _visionMode];

        private _nvgActive = _visionMode == 1;
        _ctrlRearViewCamProxy ctrlSetPosition ([ACTIVE_POS, SLEEP_POS] select _nvgActive);
        _ctrlRearViewCamProxy ctrlCommit 0;
        _ctrlRearViewCamProxyNVG ctrlSetPosition ([SLEEP_POS, ACTIVE_POS] select _nvgActive);
        _ctrlRearViewCamProxyNVG ctrlCommit 0;
    };

    if (!BWA3_isRearViewCamera || {!(_player in (crew _vehicle - [driver _vehicle, gunner _vehicle]))} || {!isPiPEnabled}) then {
        [_handle] call CBA_fnc_removePerFrameHandler;
        GVAR(rearViewCamPFH) = -1;

        [_ctrlRearViewCamProxy, _ctrlRearViewCamProxyNVG, _ctrlRearViewCam, _ctrlRearViewCamIndicator] call _hideCamera;
        BWA3_isRearViewCamera = false;
    };
}, 0.25, [_vehicle, _ctrlRearViewCamProxy, _ctrlRearViewCamProxyNVG, _ctrlRearViewCam, _ctrlRearViewCamIndicator, _hideCamera, 0]] call CBA_fnc_addPerFrameHandler;
