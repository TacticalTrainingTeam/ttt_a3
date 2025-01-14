[
    QGVAR(enable),
    "CHECKBOX",
    [LSTRING(enable_displayName), LSTRING(enable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    true,
    {[] call FUNC(addActions);}
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks),
    "EDITBOX",
    [LSTRING(supportedBackpacks_displayName), LSTRING(allowedBackpacks_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    "[]",
    true,
    {[] call FUNC(addActions);},
    true
] call CBA_fnc_addSetting;