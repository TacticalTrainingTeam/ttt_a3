#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/BwMod_Puma/functions/fnc_setCamera.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted to this repository
 *
 *  Description:
 *      Sets the view of the camera.
 *
 *  Parameter(s):
 *      0: OBJECT - The vehicle to attach to the camera.
 *      1: STRING - Memory selection.
 *      2: ARRAY - Viewing direction as relative offset.
 *      3: ARRAY - Attach offset relative to the memory selection.
 *      4: NUMBER - Field of view.
 *      5: STRING - Path to overlay texture for camera indicator.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget, "cameraL", [-2500, 1500, -0.08], [0, 0, 0], 0.5, "z\PzGrenBtl402\addons\BwMod_Puma\data\rsc\Puma_Monitor_9.paa"] call ttt_compat_bwa3_fnc_setCamera
 *
 *  Public: No
 *
 */

params ["_vehicle", "_camPosName", "_camDirHelperPos", "_camOffset", "_fov", "_indicatorOverlay"];

BWA3_cam attachTo [_vehicle, _camOffset, _camPosName, true];
BWA3_camNVG attachTo [_vehicle, _camOffset, _camPosName, true];

private _camPos = _vehicle selectionPosition _camPosName;
private _camDir = ((_camDirHelperPos select 0) - (_camPos select 0)) atan2 ((_camDirHelperPos select 1) - (_camPos select 1));

BWA3_cam setDir _camDir;
BWA3_cam camSetFov _fov;
BWA3_cam camCommit 0;

BWA3_camNVG setDir _camDir;
BWA3_camNVG camSetFov _fov;
BWA3_camNVG camCommit 0;

private _ctrlRearViewCamIndicator = (uiNamespace getVariable "BWA3_dlgRearViewCam") displayCtrl 5;
_ctrlRearViewCamIndicator ctrlSetText _indicatorOverlay;
