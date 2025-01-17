
if (EGVAR(main,aceSafemode)) then {
    [
        QGVAR(startLocked),
        "CHECKBOX",
        [LSTRING(StartLocked), LSTRING(StartLocked_Description)],
        [ELSTRING(main,TacticalTrainingTeam), LSTRING(subcategory)],
        true,
        2
    ] call CBA_fnc_addSetting;
};