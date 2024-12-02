[
    QGVAR(enable), 
    "CHECKBOX",
    [LSTRING(settingEnable_name), LSTRING(settingEnable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks), 
    "EDITBOX",
    ["Erlaubte Rucksäcke", "Classnames der Rucksäcke die eine Plane haben."],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "[""B_Kitbag_cbr""]",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedItems), 
    "EDITBOX",
    ["Zusätzliche Gegenstände", "Classnames der Gegenstände die auf der Plane gespawnt werden."],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "[""Land_FirstAidKit_01_open_F""]",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedObject), 
    "EDITBOX",
    ["Objekt", "Classname des Objekts das eine medizinische Einrichtung sein soll."],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "Land_MedicalTent_01_floor_dark_F",
    true
] call CBA_fnc_addSetting;