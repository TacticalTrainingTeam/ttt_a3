[
    QGVAR(disableRemoteSensors),
    "CHECKBOX",
    [LSTRING(disableRemoteSensors_displayName), LSTRING(disableRemoteSensors_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    true,
    {
        params ["_value"];

        // Server and headless clients own the AI, their raycasts feed the actual AI knowledge - only player clients skip them
        if (isServer || {!hasInterface}) exitWith {};

        disableRemoteSensors _value;
        INFO_1("disableRemoteSensors %1",_value);
    }
] call CBA_fnc_addSetting;
