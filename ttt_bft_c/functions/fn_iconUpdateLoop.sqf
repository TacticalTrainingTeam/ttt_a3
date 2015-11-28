/*
 * Author: Badguy, joko // Jonas
 * Update the BFT Icons
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 */
private ["_players","_icons","_defaultIcon","_icon","_text","_textSize","_font","_align","_iconType"];

_icons = [];
_textSize = 0.06;
_font = "PuristaSemiBold";
_align = "right";
_defaultIcon = switch (playerSide) do {
    case (west): {
      "b_unknown"
    };
    case (east): {
      "o_unknown"
    };
    case (independent): {
      "n_unknown"
    };
    default {
        "hd_unknown"
    };
};

if (BG_BFT_onlyPlayer) then {
    {
        if ( "ACE_DK10_b" in (items _x) && {_x getVariable ["BG_BFT_playerSide", side _x] == playerSide}) then {
            _icon = _x getVariable ["BG_BFT_icon", _defaultIcon];
            _text = _x getVariable ["BG_BFT_groupId", groupId (group _x)];
            _iconType = (BG_BFT_iconTypes select 0) find _icon;
            if (_iconType >= 0) then {
                _iconType = (BG_BFT_iconTypes select 1) select _iconType;
                _icons pushBack [
                    _iconType select 0,
                    _iconType select 1,
                    _x,
                    _iconType select 2,
                    _iconType select 2,
                    0,
                    _text,
                    0,
                    _textSize,
                    _font,
                    _align
                ];
            };
        };
        true
    } count allPlayers;
} else {
    {
        if ( ("ACE_DK10_b" in (items _x) || "ACE_GD300_b" in (items _x)) && {_x getVariable ["BG_BFT_playerSide", side _x] == playerSide}) then {
            _icon = _x getVariable ["BG_BFT_icon", _defaultIcon];
            _text = _x getVariable ["BG_BFT_groupId", groupId (group _x)];
            _iconType = (BG_BFT_iconTypes select 0) find _icon;
            if (_iconType >= 0) then {
                _iconType = (BG_BFT_iconTypes select 1) select _iconType;
                _icons pushBack [
                    _iconType select 0,
                    _iconType select 1,
                    _x,
                    _iconType select 2,
                    _iconType select 2,
                    0,
                    _text,
                    0,
                    _textSize,
                    _font,
                    _align
                ];
            };
        };
        true
    } count allUnits;
};

BG_BFT_Icons = +_icons;
