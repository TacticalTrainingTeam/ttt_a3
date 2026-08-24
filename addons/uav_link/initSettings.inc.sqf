[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    true,
    {[] call FUNC(startMonitor);}
] call CBA_fnc_addSetting;

[
    QGVAR(degradeDistance),
    "SLIDER",
    [LSTRING(degradeDistance_displayName), LSTRING(degradeDistance_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [100, 5000, 800, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(lostDistance),
    "SLIDER",
    [LSTRING(lostDistance_displayName), LSTRING(lostDistance_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [100, 6000, 1200, 0],
    true
] call CBA_fnc_addSetting;
