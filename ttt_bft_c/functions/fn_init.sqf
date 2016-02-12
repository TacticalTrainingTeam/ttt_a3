/*
 * Author: Badguy, joko // Jonas
 * initilize BFT System
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */

if (!hasInterface) exitWith {};

BG_BFT_Icons = [];
BG_BFT_onlyPlayer = true;

BG_BFT_iconTypes=[];

BG_BFT_PFEH = -1;

player setVariable ["BG_BFT_playerSide", playerSide, true];

["playerInventoryChanged", {
    BG_UI_BFT_showEditButton = false;
    _var = 0;
    if ("ACE_GD300_b" in (Items player)) then {
        _var = 1;
    };
    if ("ACE_DK10_b" in (Items player)) then {
        _var = 2;
        BG_UI_BFT_showEditButton = true;
    };
    with uiNamespace do {
        BG_UI_BFT_editButton ctrlShow (missionNamespace getVariable ["BG_UI_BFT_showEditButton", false]);
        BG_UI_BFT_editButton ctrlCommit 0;
    };
    player setVariable ["BG_BFT_item", _var, true];
}] call ace_common_fnc_addEventhandler;

private ["_classes","_keys", "_values", "_side"];
_keys = [];
_values = [];

_classes = "getText (_x >> 'markerClass') in ['NATO_BLUFOR', 'NATO_OPFOR', 'NATO_Independent', 'NATO_Civilian']" configClasses (configfile >> "CfgMarkers");

{
    _keys pushBack configName _x;
    _values pushBack [
        getText (_x >> "icon"),
        (_x >> "color") call BIS_fnc_colorConfigToRGBA,
        getNumber (_x >> "size"),
        getText (_x >> "name"),
        switch (getText (_x >> "markerClass")) do {
            case ("NATO_BLUFOR"): {
                west
            };
            case ("NATO_OPFOR"): {
                east
            };
            case ("NATO_Independent"): {
                independent
            };
            case ("NATO_Civilian"): {
                civilian
            };
            default : {
                west
            };
        },
        configName _x
    ];
    nil
} count _classes;

BG_BFT_iconTypes = [_keys,_values];

[] call BG_fnc_iconUpdateLoop;

["visibleMapChanged", {
    params ["_player", "_mapOn"];
    if (_mapOn) then {
        [] call BG_fnc_iconUpdateLoop;
        if (BG_BFT_PFEH == -1) then {
            BG_BFT_PFEH = [{
                [] call BG_fnc_iconUpdateLoop;
            }, 10, []] call CBA_fnc_addPerFrameHandler;
        };
    } else {
        with uiNamespace do {
            BG_UI_BFT_ctrlGroup ctrlShow false;
            BG_UI_BFT_ctrlGroup ctrlCommit 0;
        };
        if (BG_BFT_PFEH != -1) then {
            [BG_BFT_PFEH] call CBA_fnc_removePerFrameHandler;
            BG_BFT_PFEH = -1;
        };
    };
}] call ace_common_fnc_addEventhandler;

[] spawn {
    waitUntil {!isNull ((findDisplay 12) displayCtrl 51)};
    [] call BG_fnc_bftdialog;
    ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw",BG_fnc_drawEvent];
    ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["MouseMoving",BG_fnc_mouseMovingEvent];
};
