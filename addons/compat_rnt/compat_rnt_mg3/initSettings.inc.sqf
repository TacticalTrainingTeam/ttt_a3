[
    QGVAR(lafetteMountTime),
    "SLIDER",
    [LLSTRING(settingsLafetteMountTime), LLSTRING(settingsLafetteMountTime_tooltip)],
    [LELSTRING(main,TacticalTrainingTeam), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, MG_MOUNT_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(lafetteDisassembleTime),
    "SLIDER",
    [LLSTRING(settingsLafetteDisassembleTime), LLSTRING(settingsLafetteDisassembleTime_tooltip)],
    [LELSTRING(main,TacticalTrainingTeam), LLSTRING(subCategory)],
    [MIN_DURATION, MAX_DURATION, DISASSEMBLE_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;