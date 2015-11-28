/*
 * Author: Badguy
 * get Triggerd by movingMouse and show Remarks and Freqencys if hover over a BFT Icon
 *
 * Arguments:
 * 0: Control <Control>
 * 1: Position X <Number>
 * 2: Position Y <Number>
 *
 * Return Value:
 * None
 */

disableSerialization;
params ["_ctrl", "_xPos", "_yPos"];
private ["_r","_temp","_group","_pos"];

if (player getVariable ["BG_BFT_item", 0] == 0 || BG_BFT_icons isEqualTo []) exitWith {
    with uiNamespace do {
        BG_UI_BFT_groupToolTip ctrlShow false;
        BG_UI_BFT_groupToolTip ctrlCommit 0;
    };
};

_r = 1000;
{
    _pos = _ctrl ctrlMapWorldToScreen visiblePosition (_x select 2);
    _temp = sqrt ((_xPos-(_pos select 0))^2+(_yPos-(_pos select 1))^2);
    if (_temp < _r) then {
        _r = _temp;
        _group = _x;
    };
} count BG_BFT_icons;

if (_r < 0.02) then {
    with uiNamespace do {
        private "_temp";
        _temp = (group (_group select 2));
        BG_UI_BFT_ttRadio ctrlSetText format [
            "SR: %1 | LR: %2",
            _temp getVariable ["BG_BFT_radioSR","n/a"],
            _temp getVariable ["BG_BFT_radioLR","n/a"]
        ];
        BG_UI_BFT_ttRadio ctrlCommit 0;
        BG_UI_BFT_ttRemarks ctrlSetText ((group (_group select 2)) getVariable ["BG_BFT_remarks",""]);
        BG_UI_BFT_ttRemarks ctrlCommit 0;
        BG_UI_BFT_groupToolTip ctrlSetPosition [_xPos,_yPos];
        BG_UI_BFT_groupToolTip ctrlShow true;
        BG_UI_BFT_groupToolTip ctrlCommit 0;
    };
} else {
    with uiNamespace do {
        BG_UI_BFT_groupToolTip ctrlShow false;
        BG_UI_BFT_groupToolTip ctrlCommit 0;
    };
};
