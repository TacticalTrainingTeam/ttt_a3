#include "script_component.hpp"

// Source: PzGrenBtl402 addons/Ladder/XEH_postInit.sqf (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted, added cleanup of attached ladders
if (isServer) then {
    // Attached objects are not deleted with their vehicle
    ["LandVehicle", "Deleted", {
        params ["_vehicle"];

        {
            if (_x isKindOf "ACE_TacticalLadder") then {
                deleteVehicle _x;
            };
        } forEach attachedObjects _vehicle;
    }] call CBA_fnc_addClassEventHandler;
};

if (!hasInterface) exitWith {};

GVAR(ladder) = objNull;
GVAR(currentStep) = MIN_ALLOWED_STEP;
GVAR(currentAngle) = 0;

// Stop adjusting when the interact menu opens
["ace_interactMenuOpened", {
    [] call FUNC(confirmLadderAdjust);
}] call CBA_fnc_addEventHandler;

// Stop adjusting when falling unconscious
["ace_unconscious", {
    params ["_unit"];

    if (!isNull GVAR(ladder) && {local _unit}) then {
        [] call FUNC(confirmLadderAdjust);
    };
}] call CBA_fnc_addEventHandler;
