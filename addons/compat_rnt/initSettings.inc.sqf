[
    QGVAR(lafetteMountTime),
    "SLIDER",
    [LLSTRING(settingsLafetteMountTime), LLSTRING(settingsLafetteMountTime_tooltip)],
    [ELSTRING(main,TacticalTrainingTeam), LLSTRING(subCategoryMG)],
    [MIN_DURATION, MAX_DURATION, MG_MOUNT_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;

[
    QGVAR(lafetteDisassembleTime),
    "SLIDER",
    [LLSTRING(settingsLafetteDisassembleTime), LLSTRING(settingsLafetteDisassembleTime_tooltip)],
    [ELSTRING(main,TacticalTrainingTeam), LLSTRING(subCategoryMG)],
    [MIN_DURATION, MAX_DURATION, DISASSEMBLE_TIME, TRAILING_DECIMALS],
    IS_SERVER_SETTINGS
] call CBA_fnc_addSetting;