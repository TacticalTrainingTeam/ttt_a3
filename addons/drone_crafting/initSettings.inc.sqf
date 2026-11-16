[
    QGVAR(craftTime),
    "SLIDER",
    [LSTRING(setting_craftTime_name), LSTRING(setting_craftTime_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [1, 60, 5, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(maxDistance),
    "SLIDER",
    [LSTRING(setting_maxDistance_name), LSTRING(setting_maxDistance_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [2, 30, 7, 0],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(reserveCapacity),
    "SLIDER",
    [LSTRING(setting_reserveCapacity_name), LSTRING(setting_reserveCapacity_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [0, 0.9, 0.25, 0, true],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(stock),
    "EDITBOX",
    [LSTRING(setting_stock_name), LSTRING(setting_stock_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    '[["ACE_CableTie", 50], ["ACE_rope6", 10], ["UA_Item_EMPTY", 20], ["rhs_rpg7_OG7V_mag", 15], ["rhs_rpg7_PG7VL_mag", 15], ["rhs_rpg7_TBG7V_mag", 10]]',
    true
] call CBA_fnc_addSetting;
