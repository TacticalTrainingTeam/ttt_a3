#include "..\script_component.hpp"
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_advancedtowing_fnc_addPlayerTowActions
 *
 * Public: No
 */

player addAction ["Deploy Tow Ropes", { //ToDo Localize
    call FUNC(takeTowRopesAction);
}, nil, 0, false, true, "", QUOTE([ARR_2(FUNC(takeTowRopesActionCheck),_this)] call CBA_fnc_directCall)];

player addAction ["Put Away Tow Ropes", { //ToDo Localize
    call FUNC(putAwayTowRopesAction);
}, nil, 0, false, true, "", QUOTE([ARR_2(FUNC(putAwayTowRopesActionCheck),_this)] call CBA_fnc_directCall)];

player addAction ["Attach To Tow Ropes", { //ToDo Localize
    call FUNC(attachTowRopesAction);
}, nil, 0, false, true, "", QUOTE([ARR_2(FUNC(attachTowRopesActionCheck),_this)] call CBA_fnc_directCall)];

player addAction ["Drop Tow Ropes", { //ToDo Localize
    call FUNC(dropTowRopesAction);
}, nil, 0, false, true, "", QUOTE([ARR_2(FUNC(dropTowRopesActionCheck),_this)] call CBA_fnc_directCall)];

player addAction ["Pickup Tow Ropes", { //ToDo Localize
    call FUNC(pickupTowRopesAction);
}, nil, 0, false, true, "", QUOTE([ARR_2(FUNC(pickupTowRopesActionCheck),_this)] call CBA_fnc_directCall)];

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(Actions_Loaded), false];
}];
